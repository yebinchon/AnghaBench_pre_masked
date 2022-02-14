
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_stencil_function ) (int ,int,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_stencil_side { ____Placeholder_gs_stencil_side } gs_stencil_side ;
typedef enum gs_depth_test { ____Placeholder_gs_depth_test } gs_depth_test ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(enum gs_stencil_side VAR_1, enum gs_depth_test VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_stencil_function"))
  return;

 VAR_3->exports.device_stencil_function(VAR_3->device, VAR_1, VAR_2);
}
