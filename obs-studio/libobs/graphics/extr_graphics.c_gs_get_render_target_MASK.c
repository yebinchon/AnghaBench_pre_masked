
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_texture_t ;
struct TYPE_4__ {int * (* device_get_render_target ) (int ) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

gs_texture_t *FUNC_2(void)
{
 graphics_t *VAR_1 = VAR_0;

 if (!FUNC_0("gs_get_render_target"))
  return ((void*)0);

 return VAR_1->exports.device_get_render_target(VAR_1->device);
}
