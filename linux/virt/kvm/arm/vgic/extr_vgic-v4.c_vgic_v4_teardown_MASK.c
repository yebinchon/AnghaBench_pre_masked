
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct its_vm {int nr_vpes; TYPE_3__** vpes; } ;
struct TYPE_4__ {struct its_vm its_vm; } ;
struct TYPE_5__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_6__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct kvm_vcpu*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct its_vm*) ;
 int FUNC_3 (TYPE_3__**) ;
 struct kvm_vcpu* FUNC_4 (struct kvm*,int) ;

void FUNC_5(struct kvm *VAR_1)
{
 struct its_vm *VAR_2 = &VAR_1->arch.vgic.its_vm;
 int VAR_3;

 if (!VAR_2->vpes)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_vpes; VAR_3++) {
  struct kvm_vcpu *VAR_4 = FUNC_4(VAR_1, VAR_3);
  int VAR_5 = VAR_2->vpes[VAR_3]->irq;

  FUNC_1(VAR_5, VAR_0);
  FUNC_0(VAR_5, VAR_4);
 }

 FUNC_2(VAR_2);
 FUNC_3(VAR_2->vpes);
 VAR_2->nr_vpes = 0;
 VAR_2->vpes = ((void*)0);
}
