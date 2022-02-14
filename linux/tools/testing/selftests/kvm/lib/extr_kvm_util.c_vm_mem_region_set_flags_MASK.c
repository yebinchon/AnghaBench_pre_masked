
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flags; } ;
struct userspace_mem_region {TYPE_1__ region; } ;
struct kvm_vm {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 struct userspace_mem_region* FUNC_2 (struct kvm_vm*,int ) ;

void FUNC_3(struct kvm_vm *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 struct userspace_mem_region *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3);

 VAR_6->region.flags = VAR_4;

 VAR_5 = FUNC_1(VAR_2->fd, VAR_0, &VAR_6->region);

 FUNC_0(VAR_5 == 0, "KVM_SET_USER_MEMORY_REGION IOCTL failed,\n"
  "  rc: %i errno: %i slot: %u flags: 0x%x",
  VAR_5, VAR_1, VAR_3, VAR_4);
}
