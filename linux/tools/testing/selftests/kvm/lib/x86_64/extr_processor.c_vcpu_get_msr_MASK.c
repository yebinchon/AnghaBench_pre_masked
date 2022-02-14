
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vcpu {int fd; } ;
struct kvm_vm {int dummy; } ;
struct kvm_msrs {int nmsrs; } ;
struct kvm_msr_entry {int data; int index; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct kvm_msrs*) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

uint64_t FUNC_3(struct kvm_vm *VAR_2, uint32_t VAR_3, uint64_t VAR_4)
{
 struct vcpu *VAR_5 = FUNC_2(VAR_2, VAR_3);
 struct {
  struct kvm_msrs header;
  struct kvm_msr_entry entry;
 } VAR_6 = {};
 int VAR_7;

 FUNC_0(VAR_5 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_3);
 VAR_6.header.nmsrs = 1;
 VAR_6.entry.index = VAR_4;
 VAR_7 = FUNC_1(VAR_5->fd, VAR_0, &VAR_6.header);
 FUNC_0(VAR_7 == 1, "KVM_GET_MSRS IOCTL failed,\n"
  "  rc: %i errno: %i", VAR_7, VAR_1);

 return VAR_6.entry.data;
}
