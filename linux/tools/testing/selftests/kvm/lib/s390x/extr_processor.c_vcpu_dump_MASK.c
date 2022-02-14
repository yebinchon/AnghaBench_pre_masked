
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uint8_t ;
typedef int uint32_t ;
struct vcpu {TYPE_1__* state; } ;
struct kvm_vm {struct vcpu* vcpu_head; } ;
struct TYPE_2__ {int psw_addr; int psw_mask; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*,int ,int ) ;

void FUNC_1(FILE *VAR_0, struct kvm_vm *VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
 struct vcpu *VAR_4 = VAR_1->vcpu_head;

 FUNC_0(VAR_0, "%*spstate: psw: 0x%.16llx:0x%.16llx\n",
  VAR_3, "", VAR_4->state->psw_mask, VAR_4->state->psw_addr);
}
