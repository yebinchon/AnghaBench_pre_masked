
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tracks; scalar_t__ has_video; } ;
struct ffmpeg_mux {int num_audio_streams; int video_stream; TYPE_1__ params; int audio_streams; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ffmpeg_mux*,int) ;
 int FUNC_2 (struct ffmpeg_mux*) ;

__attribute__((used)) static bool FUNC_3(struct ffmpeg_mux *VAR_0)
{
 if (VAR_0->params.has_video)
  FUNC_2(VAR_0);

 if (VAR_0->params.tracks) {
  VAR_0->audio_streams =
   FUNC_0(1, VAR_0->params.tracks * sizeof(void *));

  for (int VAR_1 = 0; VAR_1 < VAR_0->params.tracks; VAR_1++)
   FUNC_1(VAR_0, VAR_1);
 }

 if (!VAR_0->video_stream && !VAR_0->num_audio_streams)
  return 0;

 return 1;
}
