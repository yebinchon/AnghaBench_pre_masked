
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint8_t ;
struct kvm_regs {int rflags; int rip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsp; int rdi; int rsi; int rdx; int rcx; int rbx; int rax; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*,int ,int ,...) ;

void FUNC_1(FILE *VAR_0, struct kvm_regs *VAR_1,
        uint8_t VAR_2)
{
 FUNC_0(VAR_0, "%*srax: 0x%.16llx rbx: 0x%.16llx "
  "rcx: 0x%.16llx rdx: 0x%.16llx\n",
  VAR_2, "",
  VAR_1->rax, VAR_1->rbx, VAR_1->rcx, VAR_1->rdx);
 FUNC_0(VAR_0, "%*srsi: 0x%.16llx rdi: 0x%.16llx "
  "rsp: 0x%.16llx rbp: 0x%.16llx\n",
  VAR_2, "",
  VAR_1->rsi, VAR_1->rdi, VAR_1->rsp, VAR_1->rbp);
 FUNC_0(VAR_0, "%*sr8:  0x%.16llx r9:  0x%.16llx "
  "r10: 0x%.16llx r11: 0x%.16llx\n",
  VAR_2, "",
  VAR_1->r8, VAR_1->r9, VAR_1->r10, VAR_1->r11);
 FUNC_0(VAR_0, "%*sr12: 0x%.16llx r13: 0x%.16llx "
  "r14: 0x%.16llx r15: 0x%.16llx\n",
  VAR_2, "",
  VAR_1->r12, VAR_1->r13, VAR_1->r14, VAR_1->r15);
 FUNC_0(VAR_0, "%*srip: 0x%.16llx rfl: 0x%.16llx\n",
  VAR_2, "",
  VAR_1->rip, VAR_1->rflags);
}
