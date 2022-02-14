
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_init_data {int dummy; } ;
typedef int gs_swapchain_t ;
struct TYPE_4__ {int * (* device_swapchain_create ) (int ,struct gs_init_data*) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,struct gs_init_data const*) ;
 int * FUNC_1 (int ,struct gs_init_data*) ;
 TYPE_2__* VAR_0 ;

gs_swapchain_t *FUNC_2(const struct gs_init_data *VAR_1)
{
 struct gs_init_data VAR_2 = *VAR_1;
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_swapchain_create", VAR_1))
  return ((void*)0);

 return VAR_3->exports.device_swapchain_create(VAR_3->device,
        &VAR_2);
}
