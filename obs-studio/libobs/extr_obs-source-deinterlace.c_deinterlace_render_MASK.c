
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vec2 {float member_0; float member_1; } ;
struct TYPE_6__ {scalar_t__ deinterlace_frame_ts; scalar_t__ deinterlace_offset; scalar_t__ deinterlace_half_duration; scalar_t__ async_height; scalar_t__ async_width; scalar_t__ async_flip; int deinterlace_top_first; int ** async_prev_textures; scalar_t__ async_prev_texrender; int ** async_textures; scalar_t__ async_texrender; int * deinterlace_effect; } ;
typedef TYPE_2__ obs_source_t ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;
struct TYPE_5__ {scalar_t__ video_time; } ;
struct TYPE_7__ {TYPE_1__ video; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,scalar_t__) ;
 int * FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct vec2*) ;
 int * FUNC_7 (scalar_t__) ;
 TYPE_3__* VAR_2 ;

void FUNC_8(obs_source_t *VAR_3)
{
 gs_effect_t *VAR_4 = VAR_3->deinterlace_effect;

 uint64_t VAR_5;
 gs_eparam_t *VAR_6 = FUNC_1(VAR_4, "image");
 gs_eparam_t *VAR_7 =
  FUNC_1(VAR_4, "previous_image");
 gs_eparam_t *VAR_8 = FUNC_1(VAR_4, "field_order");
 gs_eparam_t *VAR_9 = FUNC_1(VAR_4, "frame2");
 gs_eparam_t *VAR_10 =
  FUNC_1(VAR_4, "dimensions");
 struct vec2 VAR_11 = {(float)VAR_3->async_width, (float)VAR_3->async_height};

 gs_texture_t *VAR_12 =
  VAR_3->async_texrender
   ? FUNC_7(VAR_3->async_texrender)
   : VAR_3->async_textures[0];
 gs_texture_t *VAR_13 =
  VAR_3->async_prev_texrender
   ? FUNC_7(VAR_3->async_prev_texrender)
   : VAR_3->async_prev_textures[0];

 if (!VAR_12 || !VAR_13 || !VAR_3->async_width || !VAR_3->async_height)
  return;

 FUNC_5(VAR_6, VAR_12);
 FUNC_5(VAR_7, VAR_13);
 FUNC_4(VAR_8, VAR_3->deinterlace_top_first);
 FUNC_6(VAR_10, &VAR_11);

 VAR_5 = VAR_3->deinterlace_frame_ts + VAR_3->deinterlace_offset +
      VAR_3->deinterlace_half_duration - VAR_1;

 FUNC_3(VAR_9, VAR_2->video.video_time >= VAR_5);

 while (FUNC_2(VAR_4, "Draw"))
  FUNC_0(((void*)0), VAR_3->async_flip ? VAR_0 : 0,
          VAR_3->async_width, VAR_3->async_height);
}
