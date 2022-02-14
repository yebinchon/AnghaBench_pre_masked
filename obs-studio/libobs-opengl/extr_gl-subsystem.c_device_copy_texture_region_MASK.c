
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct gs_texture_2d {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ format; } ;
typedef TYPE_1__ gs_texture_t ;
typedef int gs_device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__,scalar_t__,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_2(gs_device_t *VAR_2, gs_texture_t *VAR_3,
    uint32_t VAR_4, uint32_t VAR_5,
    gs_texture_t *VAR_6, uint32_t VAR_7,
    uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 struct gs_texture_2d *VAR_11 = (struct gs_texture_2d *)VAR_6;
 struct gs_texture_2d *VAR_12 = (struct gs_texture_2d *)VAR_3;

 if (!VAR_6) {
  FUNC_0(VAR_1, "Source texture is NULL");
  goto fail;
 }

 if (!VAR_3) {
  FUNC_0(VAR_1, "Destination texture is NULL");
  goto fail;
 }

 if (VAR_3->type != VAR_0 || VAR_6->type != VAR_0) {
  FUNC_0(VAR_1, "Source and destination textures must be 2D "
    "textures");
  goto fail;
 }

 if (VAR_3->format != VAR_6->format) {
  FUNC_0(VAR_1, "Source and destination formats do not match");
  goto fail;
 }

 uint32_t VAR_13 = (uint32_t)VAR_9 ? (uint32_t)VAR_9
          : (VAR_11->width - VAR_7);
 uint32_t VAR_14 = (uint32_t)VAR_10 ? (uint32_t)VAR_10
          : (VAR_11->height - VAR_8);

 if (VAR_12->width - VAR_4 < VAR_13 || VAR_12->height - VAR_5 < VAR_14) {
  FUNC_0(VAR_1, "Destination texture region is not big "
    "enough to hold the source region");
  goto fail;
 }

 if (!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_13,
        VAR_14))
  goto fail;

 return;

fail:
 FUNC_0(VAR_1, "device_copy_texture (GL) failed");
}
