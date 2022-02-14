
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {int fd; } ;
struct kvm_vm {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,unsigned long,void*) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

int FUNC_3(struct kvm_vm *VAR_0, uint32_t VAR_1,
  unsigned long VAR_2, void *VAR_3)
{
 struct vcpu *VAR_4 = FUNC_2(VAR_0, VAR_1);
 int VAR_5;

 FUNC_0(VAR_4 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_1);

 VAR_5 = FUNC_1(VAR_4->fd, VAR_2, VAR_3);

 return VAR_5;
}
