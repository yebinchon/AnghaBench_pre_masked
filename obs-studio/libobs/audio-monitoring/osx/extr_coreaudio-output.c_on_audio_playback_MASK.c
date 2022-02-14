
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct audio_monitor {int channels; scalar_t__ wait_size; int paused; int mutex; int queue; TYPE_1__ empty_buffers; TYPE_4__ new_data; int resampler; int active; } ;
struct audio_data {scalar_t__ frames; scalar_t__ data; } ;
struct TYPE_7__ {float user_volume; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int **,int*,int *,int const* const*,int) ;
 int FUNC_3 (TYPE_4__*,int *,int) ;
 int FUNC_4 (float,float,int ) ;
 int FUNC_5 (struct audio_monitor*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, obs_source_t *VAR_3,
         const struct audio_data *VAR_4, bool VAR_5)
{
 struct audio_monitor *VAR_6 = VAR_2;
 float VAR_7 = VAR_3->user_volume;
 uint32_t VAR_8;

 FUNC_1(VAR_3);

 if (!FUNC_7(&VAR_6->active)) {
  return;
 }

 uint8_t *VAR_9[VAR_1];
 uint32_t VAR_10;
 uint64_t VAR_11;
 bool VAR_12;

 VAR_12 = FUNC_2(
  VAR_6->resampler, VAR_9, &VAR_10, &VAR_11,
  (const uint8_t *const *)VAR_4->data,
  (uint32_t)VAR_4->frames);
 if (!VAR_12) {
  return;
 }

 VAR_8 = sizeof(float) * VAR_6->channels * VAR_10;

 if (VAR_5) {
  FUNC_6(VAR_9[0], 0, VAR_8);
 } else {

  if (!FUNC_4(VAR_7, 1.0f, VAR_0)) {
   register float *VAR_13 = (float *)VAR_9[0];
   register float *VAR_14 =
    VAR_13 + VAR_10 * VAR_6->channels;

   while (VAR_13 < VAR_14)
    *(VAR_13++) *= VAR_7;
  }
 }

 FUNC_8(&VAR_6->mutex);
 FUNC_3(&VAR_6->new_data, VAR_9[0], VAR_8);

 if (VAR_6->new_data.size >= VAR_6->wait_size) {
  VAR_6->wait_size = 0;

  while (VAR_6->empty_buffers.size > 0) {
   if (!FUNC_5(VAR_6)) {
    break;
   }
  }

  if (VAR_6->paused) {
   FUNC_0(VAR_6->queue, ((void*)0));
   VAR_6->paused = 0;
  }
 }

 FUNC_9(&VAR_6->mutex);
}
