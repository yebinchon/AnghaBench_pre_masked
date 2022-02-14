
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int (* device_copy_texture_region ) (int ,int *,int ,int ,int *,int ,int ,int ,int ) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ,int *,int ,int ,int *,int ,int ,int ,int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_texture_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
       gs_texture_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
       uint32_t VAR_7, uint32_t VAR_8)
{
 graphics_t *VAR_9 = VAR_0;

 if (!FUNC_0("gs_copy_texture_region", VAR_1))
  return;

 VAR_9->exports.device_copy_texture_region(VAR_9->device, VAR_1,
           VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, VAR_8);
}
