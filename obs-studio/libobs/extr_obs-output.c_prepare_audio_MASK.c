
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ last_video_ts; int mutex; } ;
struct obs_output {scalar_t__ video_start_ts; size_t planes; int audio_size; scalar_t__ sample_rate; TYPE_1__ pause; } ;
struct audio_data {scalar_t__ timestamp; int* data; scalar_t__ frames; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct obs_output *VAR_0,
     const struct audio_data *VAR_1, struct audio_data *VAR_2)
{
 if (!VAR_0->video_start_ts) {
  FUNC_0(&VAR_0->pause.mutex);
  VAR_0->video_start_ts = VAR_0->pause.last_video_ts;
  FUNC_1(&VAR_0->pause.mutex);
 }

 if (!VAR_0->video_start_ts)
  return 0;



 *VAR_2 = *VAR_1;

 if (VAR_1->timestamp < VAR_0->video_start_ts) {
  uint64_t VAR_3 = (uint64_t)VAR_1->frames * 1000000000 /
        (uint64_t)VAR_0->sample_rate;
  uint64_t VAR_4 = (VAR_1->timestamp + VAR_3);
  uint64_t VAR_5;

  if (VAR_4 <= VAR_0->video_start_ts)
   return 0;

  VAR_5 = VAR_0->video_start_ts - VAR_1->timestamp;
  VAR_2->timestamp += VAR_5;

  VAR_5 = VAR_5 * (uint64_t)VAR_0->sample_rate / 1000000000;

  for (size_t VAR_6 = 0; VAR_6 < VAR_0->planes; VAR_6++)
   VAR_2->data[VAR_6] += VAR_0->audio_size *(uint32_t)VAR_5;
  VAR_2->frames -= (uint32_t)VAR_5;
 }

 return 1;
}
