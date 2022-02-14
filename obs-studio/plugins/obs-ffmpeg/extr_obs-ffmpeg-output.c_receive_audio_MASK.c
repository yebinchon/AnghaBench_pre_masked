
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ffmpeg_data {int audio_tracks; size_t audio_size; size_t audio_planes; int ** samples; TYPE_2__** excess_frames; scalar_t__ frame_size; int start_timestamp; TYPE_1__** audio_streams; } ;
struct ffmpeg_output {scalar_t__ audio_start_ts; struct ffmpeg_data ff_data; } ;
struct audio_data {int frames; int * data; scalar_t__ timestamp; } ;
struct TYPE_5__ {size_t size; } ;
struct TYPE_4__ {int * codec; } ;
typedef int AVCodecContext ;


 int FUNC_0 (TYPE_2__*,int ,size_t) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct ffmpeg_output*,int,int *,int) ;
 int FUNC_3 (int,size_t) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, size_t VAR_1, struct audio_data *VAR_2)
{
 struct ffmpeg_output *VAR_3 = VAR_0;
 struct ffmpeg_data *VAR_4 = &VAR_3->ff_data;
 size_t VAR_5;
 struct audio_data VAR_6 = *VAR_2;
 int VAR_7;


 if (!VAR_4->audio_streams)
  return;


 if ((VAR_4->audio_tracks & (1 << VAR_1)) == 0)
  return;


 VAR_7 = FUNC_3(VAR_4->audio_tracks, VAR_1);

 AVCodecContext *VAR_8 = VAR_4->audio_streams[VAR_7]->codec;

 if (!VAR_4->start_timestamp)
  return;

 if (!VAR_3->audio_start_ts)
  VAR_3->audio_start_ts = VAR_6.timestamp;

 VAR_5 = (size_t)VAR_4->frame_size * VAR_4->audio_size;

 for (size_t VAR_9 = 0; VAR_9 < VAR_4->audio_planes; VAR_9++)
  FUNC_1(&VAR_4->excess_frames[VAR_7][VAR_9],
        VAR_6.data[VAR_9], VAR_6.frames * VAR_4->audio_size);

 while (VAR_4->excess_frames[VAR_7][0].size >= VAR_5) {
  for (size_t VAR_10 = 0; VAR_10 < VAR_4->audio_planes; VAR_10++)
   FUNC_0(
    &VAR_4->excess_frames[VAR_7][VAR_10],
    VAR_4->samples[VAR_7][VAR_10],
    VAR_5);

  FUNC_2(VAR_3, VAR_7, VAR_8, VAR_4->audio_size);
 }
}
