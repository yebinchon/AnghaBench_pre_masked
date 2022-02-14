
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int devid; int flags; int data; int address_hi; int address_lo; } ;
struct TYPE_7__ {int irqchip; int pin; } ;
struct kvm_kernel_irq_routing_entry {TYPE_3__ msi; int set; TYPE_2__ irqchip; } ;
struct TYPE_9__ {int devid; int data; int address_hi; int address_lo; } ;
struct TYPE_6__ {int pin; int irqchip; } ;
struct TYPE_10__ {TYPE_4__ msi; TYPE_1__ irqchip; } ;
struct kvm_irq_routing_entry {int type; TYPE_5__ u; int flags; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct kvm *VAR_5,
     struct kvm_kernel_irq_routing_entry *VAR_6,
     const struct kvm_irq_routing_entry *VAR_7)
{
 int VAR_8 = -VAR_0;

 switch (VAR_7->type) {
 case 129:
  VAR_6->set = VAR_4;
  VAR_6->irqchip.irqchip = VAR_7->u.irqchip.irqchip;
  VAR_6->irqchip.pin = VAR_7->u.irqchip.pin;
  if ((VAR_6->irqchip.pin >= VAR_1) ||
      (VAR_6->irqchip.irqchip >= VAR_2))
   goto out;
  break;
 case 128:
  VAR_6->set = VAR_3;
  VAR_6->msi.address_lo = VAR_7->u.msi.address_lo;
  VAR_6->msi.address_hi = VAR_7->u.msi.address_hi;
  VAR_6->msi.data = VAR_7->u.msi.data;
  VAR_6->msi.flags = VAR_7->flags;
  VAR_6->msi.devid = VAR_7->u.msi.devid;
  break;
 default:
  goto out;
 }
 VAR_8 = 0;
out:
 return VAR_8;
}
