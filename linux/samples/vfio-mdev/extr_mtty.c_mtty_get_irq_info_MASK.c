
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_irq_info {int index; int flags; int count; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




__attribute__((used)) static int FUNC_0(struct mdev_device *VAR_5,
        struct vfio_irq_info *VAR_6)
{
 switch (VAR_6->index) {
 case 130:
 case 129:
 case 128:
  break;

 default:
  return -VAR_0;
 }

 VAR_6->flags = VAR_2;
 VAR_6->count = 1;

 if (VAR_6->index == 130)
  VAR_6->flags |= (VAR_3 |
    VAR_1);
 else
  VAR_6->flags |= VAR_4;

 return 0;
}
