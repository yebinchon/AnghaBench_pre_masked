
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_coalesced_mmio_ring {int first; } ;
struct kvm_coalesced_mmio_dev {TYPE_1__* kvm; } ;
struct TYPE_2__ {struct kvm_coalesced_mmio_ring* coalesced_mmio_ring; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_coalesced_mmio_dev *VAR_1, u32 VAR_2)
{
 struct kvm_coalesced_mmio_ring *VAR_3;
 unsigned VAR_4;







 VAR_3 = VAR_1->kvm->coalesced_mmio_ring;
 VAR_4 = (VAR_3->first - VAR_2 - 1) % VAR_0;
 if (VAR_4 == 0) {

  return 0;
 }

 return 1;
}
