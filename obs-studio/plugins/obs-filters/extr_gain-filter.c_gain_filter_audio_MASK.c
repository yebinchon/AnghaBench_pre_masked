
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_audio_data {size_t frames; scalar_t__* data; } ;
struct gain_data {size_t channels; float multiple; } ;



__attribute__((used)) static struct obs_audio_data *FUNC_0(void *VAR_0,
      struct obs_audio_data *VAR_1)
{
 struct gain_data *VAR_2 = VAR_0;
 const size_t VAR_3 = VAR_2->channels;
 float **VAR_4 = (float **)VAR_1->data;
 const float VAR_5 = VAR_2->multiple;

 for (size_t VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_1->data[VAR_6]) {
   for (size_t VAR_7 = 0; VAR_7 < VAR_1->frames; VAR_7++) {
    VAR_4[VAR_6][VAR_7] *= VAR_5;
   }
  }
 }

 return VAR_1;
}
