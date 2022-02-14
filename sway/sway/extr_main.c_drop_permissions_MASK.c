
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static bool FUNC_7(void) {
 if (FUNC_3() != FUNC_1() || FUNC_2() != FUNC_0()) {
  if (FUNC_5(FUNC_3()) != 0 || FUNC_4(FUNC_2()) != 0) {
   FUNC_6(VAR_0, "Unable to drop root, refusing to start");
   return 0;
  }
 }
 if (FUNC_5(0) != -1) {
  FUNC_6(VAR_0, "Unable to drop root (we shouldn't be able to "
   "restore it after setuid), refusing to start");
  return 0;
 }
 return 1;
}
