
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_device_info {int num_irqs; int num_regions; int flags; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mdev_device *VAR_3,
    struct vfio_device_info *VAR_4)
{
 VAR_4->flags = VAR_0;
 VAR_4->num_regions = VAR_2;
 VAR_4->num_irqs = VAR_1;
 return 0;
}
