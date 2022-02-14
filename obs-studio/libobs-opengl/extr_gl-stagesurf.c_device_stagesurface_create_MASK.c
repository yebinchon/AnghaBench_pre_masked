
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct gs_stage_surface {int format; int bytes_per_pixel; int gl_type; int gl_internal_format; int gl_format; void* height; void* width; int * device; } ;
typedef struct gs_stage_surface gs_stagesurf_t ;
typedef int gs_device_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct gs_stage_surface* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gs_stage_surface*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct gs_stage_surface*) ;

gs_stagesurf_t *FUNC_8(gs_device_t *VAR_1, uint32_t VAR_2,
        uint32_t VAR_3,
        enum gs_color_format VAR_4)
{
 struct gs_stage_surface *VAR_5;
 VAR_5 = FUNC_1(sizeof(struct gs_stage_surface));
 VAR_5->device = VAR_1;
 VAR_5->format = VAR_4;
 VAR_5->width = VAR_2;
 VAR_5->height = VAR_3;
 VAR_5->gl_format = FUNC_2(VAR_4);
 VAR_5->gl_internal_format = FUNC_3(VAR_4);
 VAR_5->gl_type = FUNC_5(VAR_4);
 VAR_5->bytes_per_pixel = FUNC_6(VAR_4) / 8;

 if (!FUNC_4(VAR_5)) {
  FUNC_0(VAR_0, "device_stagesurface_create (GL) failed");
  FUNC_7(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
