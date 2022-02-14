
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(FUNC_0() | VAR_2);
 FUNC_3(VAR_0);
 VAR_3 = FUNC_0();
 if ((VAR_3 & VAR_2) == VAR_2) {
  FUNC_1("[OK]\tThe syscall worked and flags are still set\n");
 } else {
  FUNC_1("[FAIL]\tThe syscall worked but flags were cleared (flags = 0x%lx but expected 0x%lx set)\n",
         VAR_3, VAR_2);
  VAR_1++;
 }
}
