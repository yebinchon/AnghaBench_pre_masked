
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_sampler_info {int dummy; } ;
typedef int gs_samplerstate_t ;
struct TYPE_4__ {int * (* device_samplerstate_create ) (int ,struct gs_sampler_info const*) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,struct gs_sampler_info const*) ;
 int * FUNC_1 (int ,struct gs_sampler_info const*) ;
 TYPE_2__* VAR_0 ;

gs_samplerstate_t *FUNC_2(const struct gs_sampler_info *VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_samplerstate_create", VAR_1))
  return ((void*)0);

 return VAR_2->exports.device_samplerstate_create(VAR_2->device,
           VAR_1);
}
