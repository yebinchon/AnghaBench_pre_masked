
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_2 = FUNC_1();
 FUNC_3(VAR_2 & ~VAR_0);

 if (!VAR_1) {
  FUNC_2("[FAIL]\tNo SIGTRAP\n");
  FUNC_0(1);
 }

 if (!(VAR_2 & VAR_0)) {
  FUNC_2("[FAIL]\tTF was cleared\n");
  FUNC_0(1);
 }

 FUNC_2("[OK]\tSurvived with TF set and %d traps\n", (int)VAR_1);
 VAR_1 = 0;
}
