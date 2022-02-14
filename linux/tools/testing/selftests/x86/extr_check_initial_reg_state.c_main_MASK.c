
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

int FUNC_2()
{
 int VAR_17 = 0;

 if (VAR_16 == 0) {
  FUNC_1("[FAIL]\tTest was built incorrectly\n");
  return 1;
 }

 if (VAR_0 || VAR_2 || VAR_3 || VAR_5 || VAR_15 || VAR_4 || VAR_1

     || VAR_13 || VAR_14 || VAR_7 || VAR_8 || VAR_9 || VAR_10 || VAR_11 || VAR_12

  ) {
  FUNC_1("[FAIL]\tAll GPRs except SP should be 0\n");

  FUNC_1("\t" "ax" " = 0x%lx\n", VAR_0);;
  FUNC_1("\t" "bx" " = 0x%lx\n", VAR_2);;
  FUNC_1("\t" "cx" " = 0x%lx\n", VAR_3);;
  FUNC_1("\t" "dx" " = 0x%lx\n", VAR_5);;
  FUNC_1("\t" "si" " = 0x%lx\n", VAR_15);;
  FUNC_1("\t" "di" " = 0x%lx\n", VAR_4);;
  FUNC_1("\t" "bp" " = 0x%lx\n", VAR_1);;
  FUNC_1("\t" "sp" " = 0x%lx\n", VAR_16);;

  FUNC_1("\t" "r8" " = 0x%lx\n", VAR_13);;
  FUNC_1("\t" "r9" " = 0x%lx\n", VAR_14);;
  FUNC_1("\t" "r10" " = 0x%lx\n", VAR_7);;
  FUNC_1("\t" "r11" " = 0x%lx\n", VAR_8);;
  FUNC_1("\t" "r12" " = 0x%lx\n", VAR_9);;
  FUNC_1("\t" "r13" " = 0x%lx\n", VAR_10);;
  FUNC_1("\t" "r14" " = 0x%lx\n", VAR_11);;
  FUNC_1("\t" "r15" " = 0x%lx\n", VAR_12);;

  VAR_17++;
 } else {
  FUNC_1("[OK]\tAll GPRs except SP are 0\n");
 }

 if (VAR_6 != 0x202) {
  FUNC_1("[FAIL]\tFLAGS is 0x%lx, but it should be 0x202\n", VAR_6);
  VAR_17++;
 } else {
  FUNC_1("[OK]\tFLAGS is 0x202\n");
 }

 return VAR_17 ? 1 : 0;
}
