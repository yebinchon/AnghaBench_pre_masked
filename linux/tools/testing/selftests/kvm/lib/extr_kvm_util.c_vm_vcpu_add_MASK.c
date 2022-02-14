
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {int id; scalar_t__ fd; struct vcpu* next; struct vcpu* prev; struct kvm_run* state; } ;
struct kvm_vm {struct vcpu* vcpu_head; int fd; } ;
struct kvm_run {int dummy; } ;


 int VAR_0 ;
 struct kvm_run* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 struct vcpu* FUNC_1 (int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int,int,int ,int,int ) ;
 struct vcpu* FUNC_4 (struct kvm_vm*,int) ;
 int FUNC_5 () ;

void FUNC_6(struct kvm_vm *VAR_6, uint32_t VAR_7)
{
 struct vcpu *VAR_8;


 VAR_8 = FUNC_4(VAR_6, VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_0(0, "vcpu with the specified id "
   "already exists,\n"
   "  requested vcpuid: %u\n"
   "  existing vcpuid: %u state: %p",
   VAR_7, VAR_8->id, VAR_8->state);


 VAR_8 = FUNC_1(1, sizeof(*VAR_8));
 FUNC_0(VAR_8 != ((void*)0), "Insufficient Memory");
 VAR_8->id = VAR_7;
 VAR_8->fd = FUNC_2(VAR_6->fd, VAR_0, VAR_7);
 FUNC_0(VAR_8->fd >= 0, "KVM_CREATE_VCPU failed, rc: %i errno: %i",
  VAR_8->fd, VAR_5);

 FUNC_0(FUNC_5() >= sizeof(*VAR_8->state), "vcpu mmap size "
  "smaller than expected, vcpu_mmap_sz: %i expected_min: %zi",
  FUNC_5(), sizeof(*VAR_8->state));
 VAR_8->state = (struct kvm_run *) FUNC_3(((void*)0), sizeof(*VAR_8->state),
  VAR_3 | VAR_4, VAR_2, VAR_8->fd, 0);
 FUNC_0(VAR_8->state != VAR_1, "mmap vcpu_state failed, "
  "vcpu id: %u errno: %i", VAR_7, VAR_5);


 if (VAR_6->vcpu_head)
  VAR_6->vcpu_head->prev = VAR_8;
 VAR_8->next = VAR_6->vcpu_head;
 VAR_6->vcpu_head = VAR_8;
}
