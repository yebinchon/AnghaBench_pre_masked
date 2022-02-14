
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num; struct audio_input* array; } ;
struct audio_mix {TYPE_1__ inputs; } ;
struct audio_input {scalar_t__ callback; void* param; } ;
struct TYPE_5__ {struct audio_mix* mixes; } ;
typedef TYPE_2__ audio_t ;
typedef scalar_t__ audio_output_callback_t ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const audio_t *VAR_1, size_t VAR_2,
      audio_output_callback_t VAR_3, void *VAR_4)
{
 const struct audio_mix *VAR_5 = &VAR_1->mixes[VAR_2];

 for (size_t VAR_6 = 0; VAR_6 < VAR_5->inputs.num; VAR_6++) {
  struct audio_input *VAR_7 = VAR_5->inputs.array + VAR_6;

  if (VAR_7->callback == VAR_3 && VAR_7->param == VAR_4)
   return VAR_6;
 }

 return VAR_0;
}
