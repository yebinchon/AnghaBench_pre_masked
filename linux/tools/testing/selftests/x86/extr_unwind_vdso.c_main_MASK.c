
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dli_fname; int dli_fbase; } ;
typedef TYPE_1__ Dl_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,...) ;
 scalar_t__ VAR_7 ;

int FUNC_7()
{
 VAR_7 = FUNC_2(VAR_0);
 FUNC_3("\tAT_SYSINFO is 0x%lx\n", VAR_7);

 Dl_info VAR_8;
 if (!FUNC_0((void *)VAR_7, &VAR_8)) {
  FUNC_3("[WARN]\tdladdr failed on AT_SYSINFO\n");
 } else {
  FUNC_3("[OK]\tAT_SYSINFO maps to %s, loaded at 0x%p\n",
         VAR_8.dli_fname, VAR_8.dli_fbase);
 }

 FUNC_5(VAR_1, VAR_6, 0);

 FUNC_6(VAR_2);
 FUNC_3("[RUN]\tSet TF and check a fast syscall\n");
 FUNC_4(FUNC_1() | VAR_3);
 FUNC_6(VAR_2, 1, 2, 3, 4, 5, 6);
 if (!VAR_4) {
  FUNC_4(FUNC_1() & ~VAR_3);






  FUNC_3("[WARN]\tsyscall(2) didn't enter AT_SYSINFO\n");
 }

 if (FUNC_1() & VAR_3) {
  FUNC_3("[FAIL]\tTF is still set\n");
  VAR_5++;
 }

 if (VAR_5) {
  FUNC_3("[FAIL]\tThere were errors\n");
  return 1;
 } else {
  FUNC_3("[OK]\tAll is well\n");
  return 0;
 }
}
