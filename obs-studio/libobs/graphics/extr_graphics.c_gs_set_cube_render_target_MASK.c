
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_zstencil_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int (* device_set_cube_render_target ) (int ,int *,int,int *) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int,int *) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_texture_t *VAR_1, int VAR_2,
          gs_zstencil_t *VAR_3)
{
 graphics_t *VAR_4 = VAR_0;

 if (!FUNC_0("gs_set_cube_render_target"))
  return;

 VAR_4->exports.device_set_cube_render_target(
  VAR_4->device, VAR_1, VAR_2, VAR_3);
}
