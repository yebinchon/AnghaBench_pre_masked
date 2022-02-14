
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ff_demuxer {TYPE_1__* audio_decoder; TYPE_2__* video_decoder; } ;
struct TYPE_4__ {int packet_queue; int * stream; } ;
struct TYPE_3__ {int packet_queue; int * stream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ff_demuxer *VAR_0)
{
 if (VAR_0->video_decoder != ((void*)0) &&
     VAR_0->video_decoder->stream != ((void*)0)) {
  FUNC_0(&VAR_0->video_decoder->packet_queue);
  FUNC_1(
          &VAR_0->video_decoder->packet_queue);
 }

 if (VAR_0->audio_decoder != ((void*)0) &&
     VAR_0->audio_decoder->stream != ((void*)0)) {
  FUNC_0(&VAR_0->audio_decoder->packet_queue);
  FUNC_1(
          &VAR_0->audio_decoder->packet_queue);
 }
}
