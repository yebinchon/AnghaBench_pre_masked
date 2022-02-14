
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vec2 {int dummy; } ;
struct TYPE_2__ {scalar_t__ output_format; } ;
struct obs_core_video {scalar_t__ base_width; scalar_t__ base_height; int * default_effect; TYPE_1__ ovi; int * output_texture; int * render_texture; } ;
typedef int gs_texture_t ;
typedef int gs_technique_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct obs_core_video*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct vec2*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_1 ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (struct vec2*,float,float) ;

__attribute__((used)) static inline gs_texture_t *FUNC_18(struct obs_core_video *VAR_2)
{
 gs_texture_t *VAR_3 = VAR_2->render_texture;
 gs_texture_t *VAR_4 = VAR_2->output_texture;
 uint32_t VAR_5 = FUNC_13(VAR_4);
 uint32_t VAR_6 = FUNC_12(VAR_4);

 gs_effect_t *VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_6);
 gs_technique_t *VAR_8;

 if (VAR_2->ovi.output_format == VAR_0) {
  VAR_8 = FUNC_3(VAR_7, "DrawAlphaDivide");
 } else {
  if ((VAR_7 == VAR_2->default_effect) &&
      (VAR_5 == VAR_2->base_width) &&
      (VAR_6 == VAR_2->base_height))
   return VAR_3;

  VAR_8 = FUNC_3(VAR_7, "Draw");
 }

 FUNC_15(VAR_1);

 gs_eparam_t *VAR_9 = FUNC_2(VAR_7, "image");
 gs_eparam_t *VAR_10 =
  FUNC_2(VAR_7, "base_dimension");
 gs_eparam_t *VAR_11 =
  FUNC_2(VAR_7, "base_dimension_i");
 size_t VAR_12, VAR_13;

 FUNC_7(VAR_4, ((void*)0));
 FUNC_16(VAR_5, VAR_6);

 if (VAR_10) {
  struct vec2 VAR_14;
  FUNC_17(&VAR_14, (float)VAR_2->base_width,
    (float)VAR_2->base_height);
  FUNC_5(VAR_10, &VAR_14);
 }

 if (VAR_11) {
  struct vec2 VAR_15;
  FUNC_17(&VAR_15, 1.0f / (float)VAR_2->base_width,
    1.0f / (float)VAR_2->base_height);
  FUNC_5(VAR_11, &VAR_15);
 }

 FUNC_4(VAR_9, VAR_3);

 FUNC_6(0);
 VAR_12 = FUNC_8(VAR_8);
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_9(VAR_8, VAR_13);
  FUNC_1(VAR_3, 0, VAR_5, VAR_6);
  FUNC_11(VAR_8);
 }
 FUNC_10(VAR_8);
 FUNC_6(1);

 FUNC_14(VAR_1);

 return VAR_4;
}
