
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

int FUNC_3(int VAR_0, char **VAR_1) {
 if (VAR_0>1) {
  FUNC_2 ("grubfs api\n");
  return FUNC_1 ();
 }
 FUNC_2 ("grub internal api\n");
 if (FUNC_0()) {
  FUNC_2 ("\n** worked!\n");
 } else {
  FUNC_2 ("\n** failed!\n");
 }
 return 0;
}
