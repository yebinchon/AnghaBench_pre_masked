
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_rect {int dummy; } ;
struct TYPE_4__ {int (* device_get_viewport ) (int ,struct gs_rect*) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,struct gs_rect*) ;
 int FUNC_1 (int ,struct gs_rect*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(struct gs_rect *VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_get_viewport", VAR_1))
  return;

 VAR_2->exports.device_get_viewport(VAR_2->device, VAR_1);
}
