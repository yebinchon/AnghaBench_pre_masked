
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct compressor_data {int max_sidechain_frames; size_t num_channels; int sidechain_mutex; TYPE_1__* sidechain_data; } ;
struct audio_data {int frames; int * data; } ;
typedef int obs_source_t ;
struct TYPE_4__ {size_t size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, obs_source_t *VAR_1,
         const struct audio_data *VAR_2, bool VAR_3)
{
 struct compressor_data *VAR_4 = VAR_0;

 FUNC_0(VAR_1);

 FUNC_4(&VAR_4->sidechain_mutex);

 if (VAR_4->max_sidechain_frames < VAR_2->frames)
  VAR_4->max_sidechain_frames = VAR_2->frames;

 size_t VAR_5 = VAR_4->max_sidechain_frames * sizeof(float);

 if (!VAR_5)
  goto unlock;

 if (VAR_4->sidechain_data[0].size > VAR_5 * 2) {
  for (size_t VAR_6 = 0; VAR_6 < VAR_4->num_channels; VAR_6++) {
   FUNC_1(&VAR_4->sidechain_data[VAR_6], ((void*)0),
         VAR_5);
  }
 }

 if (VAR_3) {
  for (size_t VAR_7 = 0; VAR_7 < VAR_4->num_channels; VAR_7++) {
   FUNC_3(&VAR_4->sidechain_data[VAR_7],
       VAR_2->frames *
        sizeof(float));
  }
 } else {
  for (size_t VAR_8 = 0; VAR_8 < VAR_4->num_channels; VAR_8++) {
   FUNC_2(&VAR_4->sidechain_data[VAR_8],
         VAR_2->data[VAR_8],
         VAR_2->frames * sizeof(float));
  }
 }

unlock:
 FUNC_5(&VAR_4->sidechain_mutex);
}
