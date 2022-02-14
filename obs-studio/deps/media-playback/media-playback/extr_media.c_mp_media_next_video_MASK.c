
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct obs_source_frame {int* data; int* linesize; int format; int full_range; int height; int flip; int width; scalar_t__ timestamp; int color_range_max; int color_range_min; int color_matrix; } ;
struct mp_decode {int frame_ready; int got_first_keyframe; scalar_t__ frame_pts; TYPE_2__* frame; } ;
struct TYPE_5__ {int* scale_pic; scalar_t__* scale_linesizes; int force_range; int cur_space; int cur_range; int opaque; int (* v_cb ) (int ,struct obs_source_frame*) ;int (* v_preload_cb ) (int ,struct obs_source_frame*) ;int is_local_file; scalar_t__ play_sys_ts; scalar_t__ start_ts; scalar_t__ base_ts; int scale_format; scalar_t__ swscale; struct obs_source_frame obsframe; struct mp_decode v; } ;
typedef TYPE_1__ mp_media_t ;
typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;
typedef enum video_format { ____Placeholder_video_format } video_format ;
typedef enum video_colorspace { ____Placeholder_video_colorspace } video_colorspace ;
struct TYPE_6__ {int* data; scalar_t__* linesize; int height; int key_frame; int width; int color_range; int colorspace; } ;
typedef TYPE_2__ AVFrame ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct mp_decode*) ;
 int FUNC_5 (int ,struct obs_source_frame*) ;
 int FUNC_6 (int ,struct obs_source_frame*) ;
 int FUNC_7 (scalar_t__,int const* const*,scalar_t__*,int ,int,int*,scalar_t__*) ;
 int FUNC_8 (int,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(mp_media_t *VAR_5, bool VAR_6)
{
 struct mp_decode *VAR_7 = &VAR_5->v;
 struct obs_source_frame *VAR_8 = &VAR_5->obsframe;
 enum video_format VAR_9;
 enum video_colorspace VAR_10;
 enum video_range_type VAR_11;
 AVFrame *VAR_12 = VAR_7->frame;

 if (!VAR_6) {
  if (!FUNC_4(VAR_5, VAR_7))
   return;

  VAR_7->frame_ready = 0;

  if (!VAR_5->v_cb)
   return;
 } else if (!VAR_7->frame_ready) {
  return;
 }

 bool VAR_13 = 0;
 if (VAR_5->swscale) {
  int VAR_14 = FUNC_7(VAR_5->swscale, (const uint8_t *const *)VAR_12->data,
        VAR_12->linesize, 0, VAR_12->height, VAR_5->scale_pic,
        VAR_5->scale_linesizes);
  if (VAR_14 < 0)
   return;

  VAR_13 = VAR_5->scale_linesizes[0] < 0 && VAR_5->scale_linesizes[1] == 0;
  for (size_t VAR_15 = 0; VAR_15 < 4; VAR_15++) {
   VAR_8->data[VAR_15] = VAR_5->scale_pic[VAR_15];
   VAR_8->linesize[VAR_15] = FUNC_0(VAR_5->scale_linesizes[VAR_15]);
  }

 } else {
  VAR_13 = VAR_12->linesize[0] < 0 && VAR_12->linesize[1] == 0;

  for (size_t VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   VAR_8->data[VAR_16] = VAR_12->data[VAR_16];
   VAR_8->linesize[VAR_16] = FUNC_0(VAR_12->linesize[VAR_16]);
  }
 }

 if (VAR_13)
  VAR_8->data[0] -= VAR_8->linesize[0] * (VAR_12->height - 1);

 VAR_9 = FUNC_3(VAR_5->scale_format);
 VAR_10 = FUNC_2(VAR_12->colorspace);
 VAR_11 = VAR_5->force_range == VAR_2
       ? FUNC_1(VAR_12->color_range)
       : VAR_5->force_range;

 if (VAR_9 != VAR_8->format || VAR_10 != VAR_5->cur_space ||
     VAR_11 != VAR_5->cur_range) {
  bool VAR_17;

  VAR_8->format = VAR_9;
  VAR_8->full_range = VAR_11 == VAR_3;

  VAR_17 = FUNC_8(VAR_10, VAR_11,
            VAR_8->color_matrix,
            VAR_8->color_range_min,
            VAR_8->color_range_max);

  VAR_8->format = VAR_9;
  VAR_5->cur_space = VAR_10;
  VAR_5->cur_range = VAR_11;

  if (!VAR_17) {
   VAR_8->format = VAR_1;
   return;
  }
 }

 if (VAR_8->format == VAR_1)
  return;

 VAR_8->timestamp = VAR_5->base_ts + VAR_7->frame_pts - VAR_5->start_ts +
      VAR_5->play_sys_ts - VAR_4;
 VAR_8->width = VAR_12->width;
 VAR_8->height = VAR_12->height;
 VAR_8->flip = VAR_13;

 if (!VAR_5->is_local_file && !VAR_7->got_first_keyframe) {
  if (!VAR_12->key_frame)
   return;

  VAR_7->got_first_keyframe = 1;
 }

 if (VAR_6)
  VAR_5->v_preload_cb(VAR_5->opaque, VAR_8);
 else
  VAR_5->v_cb(VAR_5->opaque, VAR_8);
}
