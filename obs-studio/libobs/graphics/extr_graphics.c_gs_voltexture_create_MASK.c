
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int * (* device_voltexture_create ) (int ,int ,int ,int ,int,int ,int const**,int ) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ,int ,int ,int,int ,int const**,int ) ;
 TYPE_2__* VAR_0 ;

gs_texture_t *FUNC_2(uint32_t VAR_1, uint32_t VAR_2,
       uint32_t VAR_3,
       enum gs_color_format VAR_4,
       uint32_t VAR_5, const uint8_t **VAR_6,
       uint32_t VAR_7)
{
 graphics_t *VAR_8 = VAR_0;

 if (!FUNC_0("gs_voltexture_create"))
  return ((void*)0);

 return VAR_8->exports.device_voltexture_create(VAR_8->device,
         VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5,
         VAR_6, VAR_7);
}
