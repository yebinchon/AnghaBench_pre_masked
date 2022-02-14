
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_set_cull_mode ) (int ,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_cull_mode { ____Placeholder_gs_cull_mode } gs_cull_mode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(enum gs_cull_mode VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_set_cull_mode"))
  return;

 VAR_2->exports.device_set_cull_mode(VAR_2->device, VAR_1);
}
