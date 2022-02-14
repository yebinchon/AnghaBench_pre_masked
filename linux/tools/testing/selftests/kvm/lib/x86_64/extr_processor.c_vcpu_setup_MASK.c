
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vm {int mode; int pgd; } ;
struct TYPE_2__ {scalar_t__ limit; } ;
struct kvm_sregs {int cr0; int cr4; int efer; int cr3; int tr; int es; int ds; int cs; int ldt; int gdt; TYPE_1__ idt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct kvm_vm*,int,int *) ;
 int FUNC_2 (struct kvm_vm*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_vm*,int *,int,int) ;
 int FUNC_5 (struct kvm_vm*,int *,int,int,int) ;
 int FUNC_6 (struct kvm_vm*,int,struct kvm_sregs*) ;
 int FUNC_7 (struct kvm_vm*,int,struct kvm_sregs*) ;

__attribute__((used)) static void FUNC_8(struct kvm_vm *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct kvm_sregs VAR_12;


 FUNC_6(VAR_8, VAR_9, &VAR_12);

 VAR_12.idt.limit = 0;

 FUNC_4(VAR_8, &VAR_12.gdt, VAR_11, VAR_10);

 switch (VAR_8->mode) {
 case 128:
  VAR_12.cr0 = VAR_4 | VAR_3 | VAR_5;
  VAR_12.cr4 |= VAR_7 | VAR_6;
  VAR_12.efer |= (VAR_1 | VAR_0 | VAR_2);

  FUNC_3(&VAR_12.ldt);
  FUNC_1(VAR_8, 0x8, &VAR_12.cs);
  FUNC_2(VAR_8, 0x10, &VAR_12.ds);
  FUNC_2(VAR_8, 0x10, &VAR_12.es);
  FUNC_5(VAR_8, &VAR_12.tr, 0x18, VAR_11, VAR_10);
  break;

 default:
  FUNC_0(0, "Unknown guest mode, mode: 0x%x", VAR_8->mode);
 }

 VAR_12.cr3 = VAR_8->pgd;
 FUNC_7(VAR_8, VAR_9, &VAR_12);
}
