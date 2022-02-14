
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; } ;
struct path {int dentry; struct vfsmount* mnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct path*,int *) ;

__attribute__((used)) static int FUNC_1(struct vfsmount *VAR_1, int VAR_2)
{
 struct path VAR_3 = { .mnt = VAR_1, .dentry = VAR_1->mnt_root };

 return FUNC_0(VAR_0, &VAR_3, ((void*)0));
}
