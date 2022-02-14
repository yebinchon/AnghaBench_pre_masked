
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scale_filter_data {int cx_in; int cy_in; int cx_out; int cy_out; int target_valid; double undistort_factor; int upscale; int sampling; int * undistort_factor_param; int effect; int * dimension_i_param; int * dimension_param; void* image_param; scalar_t__ undistort; int dimension_i; int dimension; scalar_t__ aspect_ratio_only; int valid; int context; scalar_t__ base_canvas_resolution; } ;
struct obs_video_info {int base_width; int base_height; } ;
typedef int obs_source_t ;
typedef enum obs_base_effect { ____Placeholder_obs_base_effect } obs_base_effect ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (float) ;
 scalar_t__ FUNC_1 (double) ;
 void* FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct obs_video_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,float,float) ;

__attribute__((used)) static void FUNC_9(void *VAR_6, float VAR_7)
{
 struct scale_filter_data *VAR_8 = VAR_6;
 enum obs_base_effect VAR_9;
 obs_source_t *VAR_10;
 bool VAR_11;
 double VAR_12;
 double VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_8->base_canvas_resolution) {
  struct obs_video_info VAR_16;
  FUNC_5(&VAR_16);
  VAR_8->cx_in = VAR_16.base_width;
  VAR_8->cy_in = VAR_16.base_height;
 }

 VAR_10 = FUNC_3(VAR_8->context);
 VAR_8->cx_out = 0;
 VAR_8->cy_out = 0;

 VAR_8->target_valid = !!VAR_10;
 if (!VAR_8->target_valid)
  return;

 VAR_14 = FUNC_7(VAR_10);
 VAR_15 = FUNC_6(VAR_10);

 if (!VAR_14 || !VAR_15) {
  VAR_8->target_valid = 0;
  return;
 }

 VAR_8->cx_out = VAR_14;
 VAR_8->cy_out = VAR_15;

 if (!VAR_8->valid)
  return;



 VAR_12 = (double)VAR_14;
 VAR_13 = (double)VAR_15;

 double VAR_17 = VAR_12 / VAR_13;
 double VAR_18 = (double)VAR_8->cx_in / (double)VAR_8->cy_in;

 if (VAR_8->aspect_ratio_only) {
  if (FUNC_1(VAR_17 - VAR_18) <= VAR_0) {
   VAR_8->target_valid = 0;
   return;
  } else {
   if (VAR_18 > VAR_17) {
    VAR_8->cx_out = (int)(VAR_13 * VAR_18);
    VAR_8->cy_out = VAR_15;
   } else {
    VAR_8->cx_out = VAR_14;
    VAR_8->cy_out = (int)(VAR_12 / VAR_18);
   }
  }
 } else {
  VAR_8->cx_out = VAR_8->cx_in;
  VAR_8->cy_out = VAR_8->cy_in;
 }

 FUNC_8(&VAR_8->dimension, (float)VAR_14, (float)VAR_15);
 FUNC_8(&VAR_8->dimension_i, 1.0f / (float)VAR_14, 1.0f / (float)VAR_15);

 if (VAR_8->undistort) {
  VAR_8->undistort_factor = VAR_18 / VAR_17;
 } else {
  VAR_8->undistort_factor = 1.0;
 }

 VAR_8->upscale = 0;



 VAR_11 = VAR_8->cx_out < VAR_14 / 2 || VAR_8->cy_out < VAR_15 / 2;

 if (VAR_11 && VAR_8->sampling != 128) {
  VAR_9 = VAR_3;
 } else {
  switch (VAR_8->sampling) {
  default:
  case 128:
  case 130:
   VAR_9 = VAR_4;
   break;
  case 131:
   VAR_9 = VAR_2;
   break;
  case 129:
   VAR_9 = VAR_5;
   break;
  case 132:
   VAR_9 = VAR_1;
   if ((VAR_8->cx_out >= VAR_14) && (VAR_8->cy_out >= VAR_15))
    VAR_8->upscale = 1;
   break;
  }
 }

 VAR_8->effect = FUNC_4(VAR_9);
 VAR_8->image_param =
  FUNC_2(VAR_8->effect, "image");

 if (VAR_9 != VAR_4) {
  VAR_8->dimension_param = FUNC_2(
   VAR_8->effect, "base_dimension");
  VAR_8->dimension_i_param = FUNC_2(
   VAR_8->effect, "base_dimension_i");
 } else {
  VAR_8->dimension_param = ((void*)0);
  VAR_8->dimension_i_param = ((void*)0);
 }

 if (VAR_9 == VAR_2 || VAR_9 == VAR_5) {
  VAR_8->undistort_factor_param = FUNC_2(
   VAR_8->effect, "undistort_factor");
 } else {
  VAR_8->undistort_factor_param = ((void*)0);
 }

 FUNC_0(VAR_7);
}
