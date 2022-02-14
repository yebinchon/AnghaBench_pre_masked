
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; } ;
struct path {int dentry; struct vfsmount* mnt; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct aa_profile*,struct path*,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct aa_label *VAR_0, struct vfsmount *VAR_1, int VAR_2)
{
 struct aa_profile *VAR_3;
 char *VAR_4 = ((void*)0);
 int VAR_5;
 struct path VAR_6 = { .mnt = VAR_1, .dentry = VAR_1->mnt_root };

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 FUNC_2(VAR_4);
 VAR_5 = FUNC_1(VAR_0, VAR_3,
   FUNC_3(VAR_3, &VAR_6, VAR_4));
 FUNC_4(VAR_4);

 return VAR_5;
}
