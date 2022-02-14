
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int has_irqchip; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct kvm_vm *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->fd, VAR_0, 0);
 FUNC_0(VAR_3 == 0, "KVM_CREATE_IRQCHIP IOCTL failed, "
  "rc: %i errno: %i", VAR_3, VAR_1);

 VAR_2->has_irqchip = 1;
}
