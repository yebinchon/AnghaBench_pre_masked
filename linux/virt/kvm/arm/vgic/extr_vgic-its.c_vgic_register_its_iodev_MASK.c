
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_io_device {int dev; int base_addr; struct vgic_its* its; int iodev_type; int nr_regions; int regions; } ;
struct vgic_its {int vgic_its_base; struct vgic_io_device iodev; } ;
struct kvm {int slots_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct kvm*,int ,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_6, struct vgic_its *VAR_7,
       u64 VAR_8)
{
 struct vgic_io_device *VAR_9 = &VAR_7->iodev;
 int VAR_10;

 FUNC_4(&VAR_6->slots_lock);
 if (!FUNC_1(VAR_7->vgic_its_base)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_7->vgic_its_base = VAR_8;
 VAR_9->regions = VAR_4;
 VAR_9->nr_regions = FUNC_0(VAR_4);
 FUNC_3(&VAR_9->dev, &VAR_5);

 VAR_9->base_addr = VAR_7->vgic_its_base;
 VAR_9->iodev_type = VAR_1;
 VAR_9->its = VAR_7;
 VAR_10 = FUNC_2(VAR_6, VAR_2, VAR_9->base_addr,
          VAR_3, &VAR_9->dev);
out:
 FUNC_5(&VAR_6->slots_lock);

 return VAR_10;
}
