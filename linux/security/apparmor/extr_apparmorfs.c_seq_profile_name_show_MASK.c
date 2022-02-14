
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct aa_proxy* private; } ;
struct aa_proxy {int label; } ;
struct TYPE_2__ {int name; } ;
struct aa_profile {TYPE_1__ base; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 (int *) ;
 int FUNC_1 (struct aa_label*) ;
 struct aa_profile* FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_proxy *VAR_2 = VAR_0->private;
 struct aa_label *VAR_3 = FUNC_0(&VAR_2->label);
 struct aa_profile *VAR_4 = FUNC_2(VAR_3);
 FUNC_3(VAR_0, "%s\n", VAR_4->base.name);
 FUNC_1(VAR_3);

 return 0;
}
