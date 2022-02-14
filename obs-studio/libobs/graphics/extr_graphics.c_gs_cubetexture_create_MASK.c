
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int * (* device_cubetexture_create ) (int ,int,int,int,int const**,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ,int,int,int,int const**,int) ;
 TYPE_2__* VAR_3 ;

gs_texture_t *FUNC_4(uint32_t VAR_4,
        enum gs_color_format VAR_5,
        uint32_t VAR_6, const uint8_t **VAR_7,
        uint32_t VAR_8)
{
 graphics_t *VAR_9 = VAR_3;
 bool VAR_10 = FUNC_2(VAR_4);
 bool VAR_11 = (VAR_8 & VAR_0 || VAR_6 != 1);

 if (!FUNC_1("gs_cubetexture_create"))
  return ((void*)0);

 if (VAR_11 && !VAR_10) {
  FUNC_0(VAR_2, "Cannot use mipmaps with a "
      "non-power-of-two texture.  Disabling "
      "mipmaps for this texture.");

  VAR_11 = 0;
  VAR_8 &= ~VAR_0;
  VAR_6 = 1;
 }

 if (VAR_11 && VAR_8 & VAR_1) {
  FUNC_0(VAR_2, "Cannot use mipmaps with render targets.  "
      "Disabling mipmaps for this texture.");
  VAR_8 &= ~VAR_0;
  VAR_6 = 1;
  VAR_7 = ((void*)0);
 }

 return VAR_9->exports.device_cubetexture_create(
  VAR_9->device, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
