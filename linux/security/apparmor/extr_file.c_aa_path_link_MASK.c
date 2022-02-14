
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path_cond {int member_1; int member_0; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int i_mode; int i_uid; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct aa_profile*,struct path*,char*,struct path*,char*,struct path_cond*) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(struct aa_label *VAR_0, struct dentry *VAR_1,
   const struct path *VAR_2, struct dentry *VAR_3)
{
 struct path VAR_4 = { .mnt = VAR_2->mnt, .dentry = VAR_3 };
 struct path VAR_5 = { .mnt = VAR_2->mnt, .dentry = VAR_1 };
 struct path_cond VAR_6 = {
  FUNC_0(VAR_1)->i_uid,
  FUNC_0(VAR_1)->i_mode
 };
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct aa_profile *VAR_9;
 int VAR_10;


 FUNC_2(VAR_7, VAR_8);
 VAR_10 = FUNC_1(VAR_0, VAR_9,
   FUNC_3(VAR_9, &VAR_4, VAR_7, &VAR_5,
       VAR_8, &VAR_6));
 FUNC_4(VAR_7, VAR_8);

 return VAR_10;
}
