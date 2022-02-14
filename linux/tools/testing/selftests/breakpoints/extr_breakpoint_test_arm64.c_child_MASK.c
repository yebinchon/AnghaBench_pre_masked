
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_5(int VAR_4, int VAR_5)
{
 volatile uint8_t *VAR_6 = &VAR_3[32 + VAR_5];

 if (FUNC_2(VAR_0, 0, ((void*)0), ((void*)0)) != 0) {
  FUNC_1(
   "ptrace(PTRACE_TRACEME) failed: %s\n",
   FUNC_4(VAR_2));
  FUNC_0(1);
 }

 if (FUNC_3(VAR_1) != 0) {
  FUNC_1(
   "raise(SIGSTOP) failed: %s\n", FUNC_4(VAR_2));
  FUNC_0(1);
 }

 if ((uintptr_t) VAR_6 % VAR_4) {
  FUNC_1(
    "Wrong address write for the given size: %s\n",
    FUNC_4(VAR_2));
  FUNC_0(1);
 }

 switch (VAR_4) {
 case 1:
  *VAR_6 = 47;
  break;
 case 2:
  *(uint16_t *)VAR_6 = 47;
  break;
 case 4:
  *(uint32_t *)VAR_6 = 47;
  break;
 case 8:
  *(uint64_t *)VAR_6 = 47;
  break;
 case 16:
  __asm__ volatile ("stp x29, x30, %0" : "=m" (VAR_6[0]));
  break;
 case 32:
  __asm__ volatile ("stp q29, q30, %0" : "=m" (VAR_6[0]));
  break;
 }

 FUNC_0(0);
}
