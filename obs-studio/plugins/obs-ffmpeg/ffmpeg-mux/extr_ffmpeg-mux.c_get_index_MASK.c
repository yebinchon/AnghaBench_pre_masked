
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ffmpeg_mux {int num_audio_streams; TYPE_2__** audio_streams; TYPE_1__* video_stream; } ;
struct ffm_packet_info {scalar_t__ type; size_t index; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ffmpeg_mux *VAR_1,
       struct ffm_packet_info *VAR_2)
{
 if (VAR_2->type == VAR_0) {
  if (VAR_1->video_stream) {
   return VAR_1->video_stream->id;
  }
 } else {
  if ((int)VAR_2->index < VAR_1->num_audio_streams) {
   return VAR_1->audio_streams[VAR_2->index]->id;
  }
 }

 return -1;
}
