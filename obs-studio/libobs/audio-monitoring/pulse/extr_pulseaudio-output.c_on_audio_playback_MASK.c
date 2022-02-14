
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
struct audio_monitor {size_t bytes_per_frame; size_t frames; int playback_mutex; int packets; int new_data; int resampler; } ;
struct audio_data {scalar_t__ frames; scalar_t__ data; } ;
struct TYPE_3__ {float user_volume; int activate_refs; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int **,size_t*,int *,int const* const*,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (float,float,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int ,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct audio_monitor*,float,int **,size_t) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, obs_source_t *VAR_3,
         const struct audio_data *VAR_4, bool VAR_5)
{
 struct audio_monitor *VAR_6 = VAR_2;
 float VAR_7 = VAR_3->user_volume;
 size_t VAR_8;

 uint8_t *VAR_9[VAR_1];
 uint32_t VAR_10;
 uint64_t VAR_11;
 bool VAR_12;

 if (FUNC_7(&VAR_6->playback_mutex) != 0)
  return;

 if (FUNC_5(&VAR_3->activate_refs) == 0)
  goto unlock;

 VAR_12 = FUNC_0(
  VAR_6->resampler, VAR_9, &VAR_10, &VAR_11,
  (const uint8_t *const *)VAR_4->data,
  (uint32_t)VAR_4->frames);

 if (!VAR_12)
  goto unlock;

 VAR_8 = VAR_6->bytes_per_frame * VAR_10;

 if (VAR_5) {
  FUNC_4(VAR_9[0], 0, VAR_8);
 } else {
  if (!FUNC_2(VAR_7, 1.0f, VAR_0)) {
   FUNC_6(VAR_6, VAR_7, VAR_9,
           VAR_10);
  }
 }

 FUNC_1(&VAR_6->new_data, VAR_9[0], VAR_8);
 VAR_6->packets++;
 VAR_6->frames += VAR_10;

unlock:
 FUNC_8(&VAR_6->playback_mutex);
 FUNC_3(VAR_2);
}
