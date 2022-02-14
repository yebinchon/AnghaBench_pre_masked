
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {int fd; } ;
struct kvm_vm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

int FUNC_3(struct kvm_vm *VAR_3, uint32_t VAR_4)
{
 struct vcpu *VAR_5 = FUNC_2(VAR_3, VAR_4);
 int VAR_6;

 FUNC_0(VAR_5 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_4);
 do {
  VAR_6 = FUNC_1(VAR_5->fd, VAR_1, ((void*)0));
 } while (VAR_6 == -1 && VAR_2 == VAR_0);
 return VAR_6;
}
