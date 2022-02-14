
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {scalar_t__ coalesced_mmio_ring; } ;


 int FUNC_0 (unsigned long) ;

void FUNC_1(struct kvm *VAR_0)
{
 if (VAR_0->coalesced_mmio_ring)
  FUNC_0((unsigned long)VAR_0->coalesced_mmio_ring);
}
