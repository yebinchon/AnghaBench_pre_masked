
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_get_cull_mode ) (int ) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_cull_mode { ____Placeholder_gs_cull_mode } gs_cull_mode ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;

enum gs_cull_mode FUNC_2(void)
{
 graphics_t *VAR_2 = VAR_1;

 if (!FUNC_0("gs_get_cull_mode"))
  return VAR_0;

 return VAR_2->exports.device_get_cull_mode(VAR_2->device);
}
