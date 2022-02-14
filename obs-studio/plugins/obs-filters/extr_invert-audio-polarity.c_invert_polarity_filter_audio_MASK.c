
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_audio_data {int frames; scalar_t__ data; } ;


 size_t VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static struct obs_audio_data *
FUNC_1(void *VAR_1, struct obs_audio_data *VAR_2)
{
 float **VAR_3 = (float **)VAR_2->data;

 for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  register float *VAR_5 = VAR_3[VAR_4];
  register float *VAR_6 = VAR_5 + VAR_2->frames;

  if (!VAR_5)
   break;

  while (VAR_5 < VAR_6) {
   *(VAR_5++) *= -1.0f;
  }
 }

 FUNC_0(VAR_1);
 return VAR_2;
}
