
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct vfsmount*) ;
 struct file_system_type* FUNC_1 (char*) ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct file_system_type*) ;
 struct vfsmount* FUNC_4 (struct dentry*,struct file_system_type*,char*,int *) ;

__attribute__((used)) static struct vfsmount *FUNC_5(struct dentry *VAR_0, void *VAR_1)
{
 struct vfsmount *VAR_2;
 struct file_system_type *VAR_3;






 VAR_3 = FUNC_1("tracefs");
 if (!VAR_3)
  return ((void*)0);
 VAR_2 = FUNC_4(VAR_0, VAR_3, "tracefs", ((void*)0));
 FUNC_3(VAR_3);
 if (FUNC_0(VAR_2))
  return ((void*)0);
 FUNC_2(VAR_2);

 return VAR_2;
}
