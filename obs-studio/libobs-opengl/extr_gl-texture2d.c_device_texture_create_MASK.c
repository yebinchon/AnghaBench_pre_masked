
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int format; int levels; int is_dynamic; int is_render_target; int is_dummy; int gen_mipmaps; int gl_internal_format; int gl_format; int gl_type; int texture; int gl_target; int type; int * device; } ;
struct gs_texture_2d {int width; int height; TYPE_1__ base; } ;
typedef int gs_texture_t ;
typedef int gs_device_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 struct gs_texture_2d* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gs_texture_2d*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int ,int ,int,int ,int ,int,int,int,int,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct gs_texture_2d*,int const**) ;

gs_texture_t *FUNC_14(gs_device_t *VAR_8, uint32_t VAR_9,
        uint32_t VAR_10,
        enum gs_color_format VAR_11,
        uint32_t VAR_12, const uint8_t **VAR_13,
        uint32_t VAR_14)
{
 struct gs_texture_2d *VAR_15 = FUNC_1(sizeof(struct gs_texture_2d));
 VAR_15->base.device = VAR_8;
 VAR_15->base.type = VAR_6;
 VAR_15->base.format = VAR_11;
 VAR_15->base.levels = VAR_12;
 VAR_15->base.gl_format = FUNC_2(VAR_11);
 VAR_15->base.gl_internal_format = FUNC_3(VAR_11);
 VAR_15->base.gl_type = FUNC_5(VAR_11);
 VAR_15->base.gl_target = VAR_0;
 VAR_15->base.is_dynamic = (VAR_14 & VAR_3) != 0;
 VAR_15->base.is_render_target = (VAR_14 & VAR_5) != 0;
 VAR_15->base.is_dummy = (VAR_14 & VAR_4) != 0;
 VAR_15->base.gen_mipmaps = (VAR_14 & VAR_2) != 0;
 VAR_15->width = VAR_9;
 VAR_15->height = VAR_10;

 if (!FUNC_7(1, &VAR_15->base.texture))
  goto fail;

 if (!VAR_15->base.is_dummy) {
  if (VAR_15->base.is_dynamic && !FUNC_4(VAR_15))
   goto fail;
  if (!FUNC_13(VAR_15, VAR_13))
   goto fail;
 } else {
  if (!FUNC_6(VAR_0, VAR_15->base.texture))
   goto fail;

  uint32_t VAR_16 =
   VAR_15->width * FUNC_10(VAR_15->base.format);
  uint32_t VAR_17 = VAR_15->height * VAR_16 / 8;
  bool VAR_18 = FUNC_11(VAR_15->base.format);
  bool VAR_19 = FUNC_8(VAR_0, VAR_15->base.gl_type,
          1, VAR_15->base.gl_format,
          VAR_15->base.gl_internal_format,
          VAR_18, VAR_15->width,
          VAR_15->height, VAR_17, ((void*)0));
  VAR_19 =
   FUNC_9(VAR_0, VAR_1, 0);

  bool VAR_20 = FUNC_6(VAR_0, 0);
  if (!VAR_19 || !VAR_20)
   goto fail;
 }

 return (gs_texture_t *)VAR_15;

fail:
 FUNC_12((gs_texture_t *)VAR_15);
 FUNC_0(VAR_7, "device_texture_create (GL) failed");
 return ((void*)0);
}
