
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_texture_render {int format; int zsformat; } ;
typedef struct gs_texture_render gs_texrender_t ;
typedef enum gs_zstencil_format { ____Placeholder_gs_zstencil_format } gs_zstencil_format ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 struct gs_texture_render* FUNC_0 (int) ;

gs_texrender_t *FUNC_1(enum gs_color_format VAR_0,
        enum gs_zstencil_format VAR_1)
{
 struct gs_texture_render *VAR_2;
 VAR_2 = FUNC_0(sizeof(struct gs_texture_render));
 VAR_2->format = VAR_0;
 VAR_2->zsformat = VAR_1;

 return VAR_2;
}
