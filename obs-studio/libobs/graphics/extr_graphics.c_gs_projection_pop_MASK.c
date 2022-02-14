
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_projection_pop ) (int ) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(void)
{
 graphics_t *VAR_1 = VAR_0;

 if (!FUNC_0("gs_projection_pop"))
  return;

 VAR_1->exports.device_projection_pop(VAR_1->device);
}
