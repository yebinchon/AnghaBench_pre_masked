
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vcpu {TYPE_1__* state; int fd; } ;
struct kvm_vm {int dummy; } ;
struct TYPE_2__ {int immediate_exit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

void FUNC_3(struct kvm_vm *VAR_3, uint32_t VAR_4)
{
 struct vcpu *VAR_5 = FUNC_2(VAR_3, VAR_4);
 int VAR_6;

 FUNC_0(VAR_5 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_4);

 VAR_5->state->immediate_exit = 1;
 VAR_6 = FUNC_1(VAR_5->fd, VAR_1, ((void*)0));
 VAR_5->state->immediate_exit = 0;

 FUNC_0(VAR_6 == -1 && VAR_2 == VAR_0,
      "KVM_RUN IOCTL didn't exit immediately, rc: %i, errno: %i",
      VAR_6, VAR_2);
}
