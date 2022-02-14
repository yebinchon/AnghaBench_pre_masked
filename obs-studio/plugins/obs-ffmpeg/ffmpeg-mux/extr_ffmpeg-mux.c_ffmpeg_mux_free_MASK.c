
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tracks; } ;
struct ffmpeg_mux {int * audio; int * audio_header; TYPE_1__ params; int video_header; int output; scalar_t__ initialized; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ffmpeg_mux*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ffmpeg_mux*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ffmpeg_mux *VAR_0)
{
 if (VAR_0->initialized) {
  FUNC_0(VAR_0->output);
 }

 FUNC_2(VAR_0);

 FUNC_3(&VAR_0->video_header);

 if (VAR_0->audio_header) {
  for (int VAR_1 = 0; VAR_1 < VAR_0->params.tracks; VAR_1++) {
   FUNC_3(&VAR_0->audio_header[VAR_1]);
  }

  FUNC_1(VAR_0->audio_header);
 }

 if (VAR_0->audio) {
  FUNC_1(VAR_0->audio);
 }

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
}
