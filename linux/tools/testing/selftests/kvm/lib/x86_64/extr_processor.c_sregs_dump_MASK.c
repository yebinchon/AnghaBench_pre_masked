
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint8_t ;
struct kvm_sregs {int * interrupt_bitmap; int apic_base; int efer; int cr8; int cr4; int cr3; int cr2; int cr0; int idt; int gdt; int ldt; int tr; int ss; int gs; int fs; int es; int ds; int cs; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*,char*,char*,...) ;
 int FUNC_2 (int *,int *,char*) ;

void FUNC_3(FILE *VAR_1, struct kvm_sregs *VAR_2,
  uint8_t VAR_3)
{
 unsigned int VAR_4;

 FUNC_1(VAR_1, "%*scs:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->cs, VAR_3 + 2);
 FUNC_1(VAR_1, "%*sds:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->ds, VAR_3 + 2);
 FUNC_1(VAR_1, "%*ses:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->es, VAR_3 + 2);
 FUNC_1(VAR_1, "%*sfs:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->fs, VAR_3 + 2);
 FUNC_1(VAR_1, "%*sgs:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->gs, VAR_3 + 2);
 FUNC_1(VAR_1, "%*sss:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->ss, VAR_3 + 2);
 FUNC_1(VAR_1, "%*str:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->tr, VAR_3 + 2);
 FUNC_1(VAR_1, "%*sldt:\n", VAR_3, "");
 FUNC_2(VAR_1, &VAR_2->ldt, VAR_3 + 2);

 FUNC_1(VAR_1, "%*sgdt:\n", VAR_3, "");
 FUNC_0(VAR_1, &VAR_2->gdt, VAR_3 + 2);
 FUNC_1(VAR_1, "%*sidt:\n", VAR_3, "");
 FUNC_0(VAR_1, &VAR_2->idt, VAR_3 + 2);

 FUNC_1(VAR_1, "%*scr0: 0x%.16llx cr2: 0x%.16llx "
  "cr3: 0x%.16llx cr4: 0x%.16llx\n",
  VAR_3, "",
  VAR_2->cr0, VAR_2->cr2, VAR_2->cr3, VAR_2->cr4);
 FUNC_1(VAR_1, "%*scr8: 0x%.16llx efer: 0x%.16llx "
  "apic_base: 0x%.16llx\n",
  VAR_3, "",
  VAR_2->cr8, VAR_2->efer, VAR_2->apic_base);

 FUNC_1(VAR_1, "%*sinterrupt_bitmap:\n", VAR_3, "");
 for (VAR_4 = 0; VAR_4 < (VAR_0 + 63) / 64; VAR_4++) {
  FUNC_1(VAR_1, "%*s%.16llx\n", VAR_3 + 2, "",
   VAR_2->interrupt_bitmap[VAR_4]);
 }
}
