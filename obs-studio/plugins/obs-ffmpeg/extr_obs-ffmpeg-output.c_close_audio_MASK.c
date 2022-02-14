
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffmpeg_data {int num_audio_streams; scalar_t__* aframe; TYPE_1__** audio_streams; scalar_t__** samples; int ** excess_frames; } ;
struct TYPE_2__ {int codec; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ffmpeg_data *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_1->num_audio_streams; VAR_2++) {
  for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_3(&VAR_1->excess_frames[VAR_2][VAR_3]);

  if (VAR_1->samples[VAR_2][0])
   FUNC_1(&VAR_1->samples[VAR_2][0]);
  if (VAR_1->audio_streams[VAR_2])
   FUNC_2(VAR_1->audio_streams[VAR_2]->codec);
  if (VAR_1->aframe[VAR_2])
   FUNC_0(&VAR_1->aframe[VAR_2]);
 }
}
