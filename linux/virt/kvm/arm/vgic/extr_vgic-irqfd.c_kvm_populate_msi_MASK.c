
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_msi {int devid; int flags; int data; int address_hi; int address_lo; } ;
struct TYPE_2__ {int devid; int flags; int data; int address_hi; int address_lo; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ msi; } ;



__attribute__((used)) static void FUNC_0(struct kvm_kernel_irq_routing_entry *VAR_0,
        struct kvm_msi *VAR_1)
{
 VAR_1->address_lo = VAR_0->msi.address_lo;
 VAR_1->address_hi = VAR_0->msi.address_hi;
 VAR_1->data = VAR_0->msi.data;
 VAR_1->flags = VAR_0->msi.flags;
 VAR_1->devid = VAR_0->msi.devid;
}
