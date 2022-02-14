
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

int FUNC_7()
{
 stack_t VAR_13 = {
  .ss_sp = VAR_7,
  .ss_size = VAR_4,
 };
 if (FUNC_5(&VAR_13, ((void*)0)) != 0)
  FUNC_0(1, "sigaltstack");

 FUNC_4(VAR_3, VAR_10, VAR_0);





 FUNC_4(VAR_1, VAR_10, VAR_0);
 FUNC_4(VAR_2, VAR_9, VAR_0);
 FUNC_2("[RUN]\tSYSENTER with invalid state\n");
 if (FUNC_6(VAR_8, 1) == 0) {
  asm volatile (
   "movl $-1, %%eax\n\t"
   "movl $-1, %%ebx\n\t"
   "movl $-1, %%ecx\n\t"
   "movl $-1, %%edx\n\t"
   "movl $-1, %%esi\n\t"
   "movl $-1, %%edi\n\t"
   "movl $-1, %%ebp\n\t"
   "movl $-1, %%esp\n\t"
   "sysenter"
   : : : "memory", "flags");
 }

 FUNC_2("[RUN]\tSYSCALL with invalid state\n");
 if (FUNC_6(VAR_8, 1) == 0) {
  asm volatile (
   "movl $-1, %%eax\n\t"
   "movl $-1, %%ebx\n\t"
   "movl $-1, %%ecx\n\t"
   "movl $-1, %%edx\n\t"
   "movl $-1, %%esi\n\t"
   "movl $-1, %%edi\n\t"
   "movl $-1, %%ebp\n\t"
   "movl $-1, %%esp\n\t"
   "syscall\n\t"
   "ud2"
   : : : "memory", "flags");
 }

 FUNC_2("[RUN]\tSYSENTER with TF and invalid state\n");
 FUNC_4(VAR_5, VAR_11, VAR_0);

 if (FUNC_6(VAR_8, 1) == 0) {
  VAR_12 = 0;
  FUNC_3(FUNC_1() | VAR_6);
  asm volatile (
   "movl $-1, %%eax\n\t"
   "movl $-1, %%ebx\n\t"
   "movl $-1, %%ecx\n\t"
   "movl $-1, %%edx\n\t"
   "movl $-1, %%esi\n\t"
   "movl $-1, %%edi\n\t"
   "movl $-1, %%ebp\n\t"
   "movl $-1, %%esp\n\t"
   "sysenter"
   : : : "memory", "flags");
 }
 FUNC_3(FUNC_1() & ~VAR_6);

 FUNC_2("[RUN]\tSYSCALL with TF and invalid state\n");
 if (FUNC_6(VAR_8, 1) == 0) {
  VAR_12 = 0;
  FUNC_3(FUNC_1() | VAR_6);
  asm volatile (
   "movl $-1, %%eax\n\t"
   "movl $-1, %%ebx\n\t"
   "movl $-1, %%ecx\n\t"
   "movl $-1, %%edx\n\t"
   "movl $-1, %%esi\n\t"
   "movl $-1, %%edi\n\t"
   "movl $-1, %%ebp\n\t"
   "movl $-1, %%esp\n\t"
   "syscall\n\t"
   "ud2"
   : : : "memory", "flags");
 }
 FUNC_3(FUNC_1() & ~VAR_6);

 return 0;
}
