
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_output {size_t planes; struct audio_mix* mixes; } ;
struct TYPE_2__ {int num; } ;
struct audio_mix {float** buffer; TYPE_1__ inputs; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct audio_output *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2 / sizeof(float);

 for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct audio_mix *VAR_5 = &VAR_1->mixes[VAR_4];


  if (!VAR_5->inputs.num)
   continue;

  for (size_t VAR_6 = 0; VAR_6 < VAR_1->planes; VAR_6++) {
   float *VAR_7 = VAR_5->buffer[VAR_6];
   float *VAR_8 = &VAR_7[VAR_3];

   while (VAR_7 < VAR_8) {
    float VAR_9 = *VAR_7;
    VAR_9 = (VAR_9 > 1.0f) ? 1.0f : VAR_9;
    VAR_9 = (VAR_9 < -1.0f) ? -1.0f : VAR_9;
    *(VAR_7++) = VAR_9;
   }
  }
 }
}
