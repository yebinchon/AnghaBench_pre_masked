
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* device_enable_blending ) (int ,int) ;} ;
struct TYPE_5__ {int enabled; } ;
struct TYPE_7__ {int device; TYPE_2__ exports; TYPE_1__ cur_blend_state; } ;
typedef TYPE_3__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__* VAR_0 ;

void FUNC_2(bool VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_enable_blending"))
  return;

 VAR_2->cur_blend_state.enabled = VAR_1;
 VAR_2->exports.device_enable_blending(VAR_2->device, VAR_1);
}
