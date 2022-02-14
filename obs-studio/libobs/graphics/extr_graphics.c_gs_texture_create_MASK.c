
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int * (* device_texture_create ) (int ,int,int,int,int,int const**,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int ,int,int,int,int,int const**,int) ;
 TYPE_2__* VAR_3 ;

gs_texture_t *FUNC_4(uint32_t VAR_4, uint32_t VAR_5,
    enum gs_color_format VAR_6,
    uint32_t VAR_7, const uint8_t **VAR_8,
    uint32_t VAR_9)
{
 graphics_t *VAR_10 = VAR_3;
 bool VAR_11 = FUNC_2(VAR_4) && FUNC_2(VAR_5);
 bool VAR_12 = (VAR_9 & VAR_0 || VAR_7 != 1);

 if (!FUNC_1("gs_texture_create"))
  return ((void*)0);

 if (VAR_12 && !VAR_11) {
  FUNC_0(VAR_2, "Cannot use mipmaps with a "
      "non-power-of-two texture.  Disabling "
      "mipmaps for this texture.");

  VAR_12 = 0;
  VAR_9 &= ~VAR_0;
  VAR_7 = 1;
 }

 if (VAR_12 && VAR_9 & VAR_1) {
  FUNC_0(VAR_2, "Cannot use mipmaps with render targets.  "
      "Disabling mipmaps for this texture.");
  VAR_9 &= ~VAR_0;
  VAR_7 = 1;
 }

 return VAR_10->exports.device_texture_create(VAR_10->device, VAR_4,
             VAR_5, VAR_6,
             VAR_7, VAR_8, VAR_9);
}
