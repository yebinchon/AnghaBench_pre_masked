
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sort_by_name; int allow_aliases; scalar_t__ vmlinux_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;

int FUNC_5(bool VAR_2)
{
 int VAR_3;

 VAR_1.sort_by_name = 1;
 VAR_1.allow_aliases = 1;
 VAR_3 = FUNC_4(((void*)0));
 if (VAR_3 < 0) {
  FUNC_1("Failed to init symbol map.\n");
  goto out;
 }

 if (VAR_0 || VAR_2)
  return 0;

 if (VAR_1.vmlinux_name)
  FUNC_1("Use vmlinux: %s\n", VAR_1.vmlinux_name);

 VAR_0 = FUNC_0();
 if (!VAR_0) {
  FUNC_1("machine__new_host() failed.\n");
  FUNC_3();
  VAR_3 = -1;
 }
out:
 if (VAR_3 < 0)
  FUNC_2("Failed to init vmlinux path.\n");
 return VAR_3;
}
