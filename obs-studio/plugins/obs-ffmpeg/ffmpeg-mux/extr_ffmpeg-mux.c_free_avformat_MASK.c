
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ffmpeg_mux {scalar_t__ num_audio_streams; int * audio_streams; int * video_stream; TYPE_2__* output; } ;
struct TYPE_4__ {int pb; TYPE_1__* oformat; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ffmpeg_mux *VAR_1)
{
 if (VAR_1->output) {
  if ((VAR_1->output->oformat->flags & VAR_0) == 0)
   FUNC_1(VAR_1->output->pb);

  FUNC_0(VAR_1->output);
  VAR_1->output = ((void*)0);
 }

 if (VAR_1->audio_streams) {
  FUNC_2(VAR_1->audio_streams);
 }

 VAR_1->video_stream = ((void*)0);
 VAR_1->audio_streams = ((void*)0);
 VAR_1->num_audio_streams = 0;
}
