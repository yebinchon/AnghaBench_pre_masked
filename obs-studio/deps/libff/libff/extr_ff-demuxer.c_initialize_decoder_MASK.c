
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int frame_drop; int video_frame_queue_size; int video_packet_queue_size; int audio_frame_queue_size; int audio_packet_queue_size; } ;
struct ff_demuxer {TYPE_5__* video_decoder; int video_callbacks; TYPE_1__ options; TYPE_5__* audio_decoder; int audio_callbacks; } ;
struct TYPE_9__ {int hwaccel_decoder; int * callbacks; int natural_sync_clock; int frame_drop; } ;
struct TYPE_8__ {int codec_type; } ;
typedef int AVStream ;
typedef TYPE_2__ AVCodecContext ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 void* FUNC_2 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct ff_demuxer *VAR_2,
                               AVCodecContext *VAR_3, AVStream *VAR_4,
                               bool VAR_5)
{
 switch (VAR_3->codec_type) {
 case 129:
  VAR_2->audio_decoder = FUNC_2(
          VAR_3, VAR_4,
          VAR_2->options.audio_packet_queue_size,
          VAR_2->options.audio_frame_queue_size);

  VAR_2->audio_decoder->hwaccel_decoder = VAR_5;
  VAR_2->audio_decoder->frame_drop =
          VAR_2->options.frame_drop;
  VAR_2->audio_decoder->natural_sync_clock =
          VAR_0;
  VAR_2->audio_decoder->callbacks = &VAR_2->audio_callbacks;

  if (!FUNC_0(&VAR_2->audio_callbacks,
                           VAR_3)) {
   FUNC_1(VAR_2->audio_decoder);
   VAR_2->audio_decoder = ((void*)0);
   return 0;
  }

  VAR_2->audio_decoder = VAR_2->audio_decoder;
  return 1;

 case 128:
  VAR_2->video_decoder = FUNC_2(
          VAR_3, VAR_4,
          VAR_2->options.video_packet_queue_size,
          VAR_2->options.video_frame_queue_size);

  VAR_2->video_decoder->hwaccel_decoder = VAR_5;
  VAR_2->video_decoder->frame_drop =
          VAR_2->options.frame_drop;
  VAR_2->video_decoder->natural_sync_clock =
          VAR_1;
  VAR_2->video_decoder->callbacks = &VAR_2->video_callbacks;

  if (!FUNC_0(&VAR_2->video_callbacks,
                           VAR_3)) {
   FUNC_1(VAR_2->video_decoder);
   VAR_2->video_decoder = ((void*)0);
   return 0;
  }

  return 1;
 default:
  return 0;
 }
}
