
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_zstencil_t ;
struct TYPE_4__ {scalar_t__ type; int is_render_target; } ;
typedef TYPE_1__ gs_texture_t ;
typedef int gs_device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int,int *) ;

void FUNC_2(gs_device_t *VAR_2, gs_texture_t *VAR_3,
       int VAR_4, gs_zstencil_t *VAR_5)
{
 if (VAR_3) {
  if (VAR_3->type != VAR_0) {
   FUNC_0(VAR_1, "Texture is not a cube texture");
   goto fail;
  }

  if (!VAR_3->is_render_target) {
   FUNC_0(VAR_1, "Texture is not a render target");
   goto fail;
  }
 }

 if (!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5))
  goto fail;

 return;

fail:
 FUNC_0(VAR_1, "device_set_cube_render_target (GL) failed");
}
