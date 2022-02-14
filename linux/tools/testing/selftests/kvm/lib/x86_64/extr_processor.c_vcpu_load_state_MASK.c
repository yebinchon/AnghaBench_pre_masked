
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vcpu {int fd; } ;
struct TYPE_4__ {int nmsrs; scalar_t__ size; TYPE_1__* entries; } ;
struct kvm_x86_state {TYPE_2__ nested; TYPE_2__ regs; TYPE_2__ debugregs; TYPE_2__ mp_state; TYPE_2__ events; TYPE_2__ msrs; TYPE_2__ sregs; TYPE_2__ xcrs; TYPE_2__ xsave; } ;
struct kvm_vm {int dummy; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct vcpu* FUNC_3 (struct kvm_vm*,int ) ;

void FUNC_4(struct kvm_vm *VAR_10, uint32_t VAR_11, struct kvm_x86_state *VAR_12)
{
 struct vcpu *VAR_13 = FUNC_3(VAR_10, VAR_11);
 int VAR_14;

 VAR_14 = FUNC_1(VAR_13->fd, VAR_9, &VAR_12->xsave);
        FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_XSAVE, r: %i",
                VAR_14);

 if (FUNC_2(VAR_0)) {
  VAR_14 = FUNC_1(VAR_13->fd, VAR_8, &VAR_12->xcrs);
  FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_XCRS, r: %i",
       VAR_14);
 }

 VAR_14 = FUNC_1(VAR_13->fd, VAR_6, &VAR_12->sregs);
        FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_SREGS, r: %i",
                VAR_14);

 VAR_14 = FUNC_1(VAR_13->fd, VAR_3, &VAR_12->msrs);
        FUNC_0(VAR_14 == VAR_12->msrs.nmsrs, "Unexpected result from KVM_SET_MSRS, r: %i (failed at %x)",
                VAR_14, VAR_14 == VAR_12->msrs.nmsrs ? -1 : VAR_12->msrs.entries[VAR_14].index);

 VAR_14 = FUNC_1(VAR_13->fd, VAR_7, &VAR_12->events);
        FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_VCPU_EVENTS, r: %i",
                VAR_14);

 VAR_14 = FUNC_1(VAR_13->fd, VAR_2, &VAR_12->mp_state);
        FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_MP_STATE, r: %i",
                VAR_14);

 VAR_14 = FUNC_1(VAR_13->fd, VAR_1, &VAR_12->debugregs);
        FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_DEBUGREGS, r: %i",
                VAR_14);

 VAR_14 = FUNC_1(VAR_13->fd, VAR_5, &VAR_12->regs);
        FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_REGS, r: %i",
                VAR_14);

 if (VAR_12->nested.size) {
  VAR_14 = FUNC_1(VAR_13->fd, VAR_4, &VAR_12->nested);
  FUNC_0(VAR_14 == 0, "Unexpected result from KVM_SET_NESTED_STATE, r: %i",
   VAR_14);
 }
}
