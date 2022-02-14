
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_device_gfx_plane_info {int flags; int width; int stride; scalar_t__ y_hot; scalar_t__ x_hot; scalar_t__ y_pos; scalar_t__ x_pos; scalar_t__ drm_format_mod; int region_index; int size; int height; int drm_format; } ;
struct mdev_state {int memsize; TYPE_1__* type; } ;
struct mdev_device {int dummy; } ;
struct TYPE_2__ {int width; int bytepp; int height; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mdev_state* FUNC_0 (struct mdev_device*) ;

__attribute__((used)) static int FUNC_1(struct mdev_device *VAR_4,
    struct vfio_device_gfx_plane_info *VAR_5)
{
 struct mdev_state *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->flags & VAR_2) {
  if (VAR_5->flags == (VAR_2 |
         VAR_3))
   return 0;
  return -VAR_0;
 }

 if (VAR_5->flags != VAR_3)
  return -VAR_0;

 VAR_5->drm_format = VAR_6->type->format;
 VAR_5->width = VAR_6->type->width;
 VAR_5->height = VAR_6->type->height;
 VAR_5->stride = (VAR_6->type->width *
     VAR_6->type->bytepp);
 VAR_5->size = VAR_6->memsize;
 VAR_5->region_index = VAR_1;


 VAR_5->drm_format_mod = 0;
 VAR_5->x_pos = 0;
 VAR_5->y_pos = 0;
 VAR_5->x_hot = 0;
 VAR_5->y_hot = 0;

 return 0;
}
