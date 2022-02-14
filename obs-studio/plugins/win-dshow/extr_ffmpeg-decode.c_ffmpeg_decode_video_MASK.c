
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct obs_source_frame2 {scalar_t__ format; int range; int flip; int height; int width; int color_range_max; int color_range_min; int color_matrix; int * linesize; int * data; } ;
struct ffmpeg_decode {TYPE_3__* frame; scalar_t__ hw; int decoder; TYPE_3__* hw_frame; TYPE_1__* codec; int packet_buffer; } ;
typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;
struct TYPE_11__ {scalar_t__ color_range; long long pkt_pts; int height; int width; int format; int * linesize; int * data; } ;
struct TYPE_10__ {int size; long long pts; int flags; int data; int member_0; } ;
struct TYPE_9__ {scalar_t__ id; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ffmpeg_decode*,int *,size_t) ;
 scalar_t__ FUNC_9 (int *,size_t) ;
 int FUNC_10 (int ,int,int ,int ,int ) ;

bool FUNC_11(struct ffmpeg_decode *VAR_12, uint8_t *VAR_13,
    size_t VAR_14, long long *VAR_15,
    enum video_range_type VAR_16,
    struct obs_source_frame2 *VAR_17, bool *VAR_18)
{
 AVPacket VAR_19 = {0};
 int VAR_20 = 0;
 AVFrame *VAR_21;
 int VAR_22;

 *VAR_18 = 0;

 FUNC_8(VAR_12, VAR_13, VAR_14);

 FUNC_3(&VAR_19);
 VAR_19.data = VAR_12->packet_buffer;
 VAR_19.size = (int)VAR_14;
 VAR_19.pts = *VAR_15;

 if (VAR_12->codec->id == VAR_2 &&
     FUNC_9(VAR_13, VAR_14))
  VAR_19.flags |= VAR_3;

 if (!VAR_12->frame) {
  VAR_12->frame = FUNC_1();
  if (!VAR_12->frame)
   return 0;

  if (VAR_12->hw && !VAR_12->hw_frame) {
   VAR_12->hw_frame = FUNC_1();
   if (!VAR_12->hw_frame)
    return 0;
  }
 }

 VAR_21 = VAR_12->hw ? VAR_12->hw_frame : VAR_12->frame;

 VAR_22 = FUNC_5(VAR_12->decoder, &VAR_19);
 if (VAR_22 == 0) {
  VAR_22 = FUNC_4(VAR_12->decoder, VAR_21);
 }

 VAR_20 = (VAR_22 == 0);

 if (VAR_22 == VAR_1 || VAR_22 == FUNC_0(VAR_4))
  VAR_22 = 0;

 if (VAR_22 < 0)
  return 0;
 else if (!VAR_20)
  return 1;
 for (size_t VAR_23 = 0; VAR_23 < VAR_6; VAR_23++) {
  VAR_17->data[VAR_23] = VAR_12->frame->data[VAR_23];
  VAR_17->linesize[VAR_23] = VAR_12->frame->linesize[VAR_23];
 }

 VAR_17->format = FUNC_7(VAR_12->frame->format);

 if (VAR_16 == VAR_9) {
  VAR_16 = (VAR_12->frame->color_range == VAR_0)
    ? VAR_10
    : VAR_11;
 }

 if (VAR_16 != VAR_17->range) {
  const bool VAR_24 = FUNC_10(
   VAR_7, VAR_16, VAR_17->color_matrix,
   VAR_17->color_range_min, VAR_17->color_range_max);
  if (!VAR_24) {
   FUNC_6(VAR_5,
        "Failed to get video format "
        "parameters for video format %u",
        VAR_7);
   return 0;
  }

  VAR_17->range = VAR_16;
 }

 *VAR_15 = VAR_12->frame->pkt_pts;

 VAR_17->width = VAR_12->frame->width;
 VAR_17->height = VAR_12->frame->height;
 VAR_17->flip = 0;

 if (VAR_17->format == VAR_8)
  return 0;

 *VAR_18 = 1;
 return 1;
}
