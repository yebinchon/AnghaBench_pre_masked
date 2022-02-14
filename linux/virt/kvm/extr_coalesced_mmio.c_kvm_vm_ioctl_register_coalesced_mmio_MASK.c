
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_coalesced_mmio_zone {int pio; int size; int addr; } ;
struct kvm_coalesced_mmio_dev {int list; int dev; struct kvm_coalesced_mmio_zone zone; struct kvm* kvm; } ;
struct kvm {int slots_lock; int coalesced_zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_coalesced_mmio_dev*) ;
 int FUNC_1 (struct kvm*,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 struct kvm_coalesced_mmio_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct kvm *VAR_6,
      struct kvm_coalesced_mmio_zone *VAR_7)
{
 int VAR_8;
 struct kvm_coalesced_mmio_dev *VAR_9;

 if (VAR_7->pio != 1 && VAR_7->pio != 0)
  return -VAR_0;

 VAR_9 = FUNC_3(sizeof(struct kvm_coalesced_mmio_dev),
        VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_2(&VAR_9->dev, &VAR_5);
 VAR_9->kvm = VAR_6;
 VAR_9->zone = *VAR_7;

 FUNC_5(&VAR_6->slots_lock);
 VAR_8 = FUNC_1(VAR_6,
    VAR_7->pio ? VAR_4 : VAR_3,
    VAR_7->addr, VAR_7->size, &VAR_9->dev);
 if (VAR_8 < 0)
  goto out_free_dev;
 FUNC_4(&VAR_9->list, &VAR_6->coalesced_zones);
 FUNC_6(&VAR_6->slots_lock);

 return 0;

out_free_dev:
 FUNC_6(&VAR_6->slots_lock);
 FUNC_0(VAR_9);

 return VAR_8;
}
