
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct p9_client {int msize; int proto_version; TYPE_1__* trans_mod; } ;
struct TYPE_2__ {int name; int (* show_options ) (struct seq_file*,struct p9_client*) ;} ;





 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct seq_file*,struct p9_client*) ;

int FUNC_3(struct seq_file *VAR_0, struct p9_client *VAR_1)
{
 if (VAR_1->msize != 8192)
  FUNC_0(VAR_0, ",msize=%u", VAR_1->msize);
 FUNC_0(VAR_0, ",trans=%s", VAR_1->trans_mod->name);

 switch (VAR_1->proto_version) {
 case 128:
  FUNC_1(VAR_0, ",noextend");
  break;
 case 129:
  FUNC_1(VAR_0, ",version=9p2000.u");
  break;
 case 130:

  break;
 }

 if (VAR_1->trans_mod->show_options)
  return VAR_1->trans_mod->show_options(VAR_0, VAR_1);
 return 0;
}
