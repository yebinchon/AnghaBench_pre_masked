
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_io_device {int dummy; } ;
struct kvm_coalesced_mmio_ring {size_t last; TYPE_1__* coalesced_mmio; } ;
struct TYPE_5__ {int pio; } ;
struct kvm_coalesced_mmio_dev {TYPE_3__* kvm; TYPE_2__ zone; } ;
typedef int gpa_t ;
typedef size_t __u32 ;
struct TYPE_6__ {int ring_lock; struct kvm_coalesced_mmio_ring* coalesced_mmio_ring; } ;
struct TYPE_4__ {int len; int pio; int data; int phys_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct kvm_coalesced_mmio_dev*,size_t) ;
 int FUNC_2 (struct kvm_coalesced_mmio_dev*,int ,int) ;
 int FUNC_3 (int ,void const*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct kvm_coalesced_mmio_dev* FUNC_7 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_2,
    struct kvm_io_device *VAR_3, gpa_t VAR_4,
    int VAR_5, const void *VAR_6)
{
 struct kvm_coalesced_mmio_dev *VAR_7 = FUNC_7(VAR_3);
 struct kvm_coalesced_mmio_ring *VAR_8 = VAR_7->kvm->coalesced_mmio_ring;
 __u32 VAR_9;

 if (!FUNC_2(VAR_7, VAR_4, VAR_5))
  return -VAR_0;

 FUNC_5(&VAR_7->kvm->ring_lock);

 VAR_9 = FUNC_0(VAR_8->last);
 if (!FUNC_1(VAR_7, VAR_9) ||
     VAR_9 >= VAR_1) {
  FUNC_6(&VAR_7->kvm->ring_lock);
  return -VAR_0;
 }



 VAR_8->coalesced_mmio[VAR_9].phys_addr = VAR_4;
 VAR_8->coalesced_mmio[VAR_9].len = VAR_5;
 FUNC_3(VAR_8->coalesced_mmio[VAR_9].data, VAR_6, VAR_5);
 VAR_8->coalesced_mmio[VAR_9].pio = VAR_7->zone.pio;
 FUNC_4();
 VAR_8->last = (VAR_9 + 1) % VAR_1;
 FUNC_6(&VAR_7->kvm->ring_lock);
 return 0;
}
