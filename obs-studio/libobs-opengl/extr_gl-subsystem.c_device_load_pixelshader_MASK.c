
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ gs_shader_t ;
struct TYPE_9__ {TYPE_1__* cur_pixel_shader; } ;
typedef TYPE_2__ gs_device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

void FUNC_3(gs_device_t *VAR_2, gs_shader_t *VAR_3)
{
 if (VAR_2->cur_pixel_shader == VAR_3)
  return;

 if (VAR_3 && VAR_3->type != VAR_0) {
  FUNC_0(VAR_1, "Specified shader is not a pixel shader");
  goto fail;
 }

 VAR_2->cur_pixel_shader = VAR_3;

 FUNC_1(VAR_2);

 if (VAR_3)
  FUNC_2(VAR_2, VAR_3);
 return;

fail:
 FUNC_0(VAR_1, "device_load_pixelshader (GL) failed");
}
