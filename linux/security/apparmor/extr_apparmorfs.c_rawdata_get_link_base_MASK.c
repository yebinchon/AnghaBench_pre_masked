
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct aa_proxy* i_private; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct aa_proxy {int label; } ;
struct aa_profile {TYPE_1__* rawdata; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 struct aa_label* FUNC_2 (int *) ;
 int FUNC_3 (struct aa_label*) ;
 char* FUNC_4 (int,int ,char const*) ;
 struct aa_profile* FUNC_5 (struct aa_label*) ;
 int FUNC_6 (struct aa_profile*) ;
 int VAR_1 ;
 int FUNC_7 (struct delayed_call*,int ,char*) ;

__attribute__((used)) static const char *FUNC_8(struct dentry *VAR_2,
      struct inode *VAR_3,
      struct delayed_call *VAR_4,
      const char *VAR_5)
{
 struct aa_proxy *VAR_6 = VAR_3->i_private;
 struct aa_label *VAR_7;
 struct aa_profile *VAR_8;
 char *VAR_9;
 int VAR_10;

 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(&VAR_6->label);
 VAR_8 = FUNC_5(VAR_7);
 VAR_10 = FUNC_6(VAR_8);
 VAR_9 = FUNC_4(VAR_10, VAR_8->rawdata->name, VAR_5);
 FUNC_3(VAR_7);

 if (FUNC_1(VAR_9))
  return VAR_9;

 FUNC_7(VAR_4, VAR_1, VAR_9);

 return VAR_9;
}
