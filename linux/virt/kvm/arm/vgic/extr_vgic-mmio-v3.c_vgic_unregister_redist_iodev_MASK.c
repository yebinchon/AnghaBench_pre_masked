
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_io_device {int dev; } ;
struct TYPE_3__ {struct vgic_io_device rd_iodev; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1)
{
 struct vgic_io_device *VAR_2 = &VAR_1->arch.vgic_cpu.rd_iodev;

 FUNC_0(VAR_1->kvm, VAR_0, &VAR_2->dev);
}
