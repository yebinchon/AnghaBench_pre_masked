
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_fs_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct selinux_fs_info*) ;
 int FUNC_2 (struct selinux_fs_info*) ;
 int FUNC_3 (struct selinux_fs_info*) ;

__attribute__((used)) static int FUNC_4(struct selinux_fs_info *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0("SELinux: failed to load policy booleans\n");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("SELinux: failed to load policy classes\n");
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0("SELinux: failed to load policy capabilities\n");
  return VAR_1;
 }

 return 0;
}
