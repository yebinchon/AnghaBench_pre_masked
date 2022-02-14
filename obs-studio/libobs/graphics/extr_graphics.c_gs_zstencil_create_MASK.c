
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gs_zstencil_t ;
struct TYPE_4__ {int * (* device_zstencil_create ) (int ,int ,int ,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_zstencil_format { ____Placeholder_gs_zstencil_format } gs_zstencil_format ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ,int ,int) ;
 TYPE_2__* VAR_0 ;

gs_zstencil_t *FUNC_2(uint32_t VAR_1, uint32_t VAR_2,
      enum gs_zstencil_format VAR_3)
{
 graphics_t *VAR_4 = VAR_0;

 if (!FUNC_0("gs_zstencil_create"))
  return ((void*)0);

 return VAR_4->exports.device_zstencil_create(VAR_4->device, VAR_1,
       VAR_2, VAR_3);
}
