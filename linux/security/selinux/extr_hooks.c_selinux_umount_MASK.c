
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct vfsmount *VAR_1, int VAR_2)
{
 const struct cred *VAR_3 = FUNC_0();

 return FUNC_1(VAR_3, VAR_1->mnt_sb,
       VAR_0, ((void*)0));
}
