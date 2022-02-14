
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vfio_region_info {int index; unsigned int size; int flags; void* offset; } ;
struct mdev_state {int nr_ports; int ops_lock; TYPE_1__* region_info; } ;
struct mdev_device {int dummy; } ;
struct TYPE_2__ {unsigned int size; void* vfio_offset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mdev_state* FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mdev_device *VAR_6,
    struct vfio_region_info *VAR_7,
    u16 *VAR_8, void **VAR_9)
{
 unsigned int VAR_10 = 0;
 struct mdev_state *VAR_11;
 u32 VAR_12;

 if (!VAR_6)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_6);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = VAR_7->index;
 if (VAR_12 >= VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_11->ops_lock);

 switch (VAR_12) {
 case 128:
  VAR_10 = VAR_1;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  if (VAR_11->nr_ports == 2)
   VAR_10 = VAR_2;
  break;
 default:
  VAR_10 = 0;
  break;
 }

 VAR_11->region_info[VAR_12].size = VAR_10;
 VAR_11->region_info[VAR_12].vfio_offset =
  FUNC_0(VAR_12);

 VAR_7->size = VAR_10;
 VAR_7->offset = FUNC_0(VAR_12);
 VAR_7->flags = VAR_4 |
  VAR_5;
 FUNC_3(&VAR_11->ops_lock);
 return 0;
}
