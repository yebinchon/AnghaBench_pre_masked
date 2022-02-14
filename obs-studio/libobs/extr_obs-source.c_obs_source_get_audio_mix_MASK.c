
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct obs_source_audio_mix {TYPE_1__* output; } ;
struct TYPE_6__ {int ** audio_output_buf; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_5__ {int * data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct obs_source_audio_mix*,char*) ;
 int FUNC_1 (TYPE_2__ const*,char*) ;

void FUNC_2(const obs_source_t *VAR_2,
         struct obs_source_audio_mix *VAR_3)
{
 if (!FUNC_1(VAR_2, "obs_source_get_audio_mix"))
  return;
 if (!FUNC_0(VAR_3, "audio"))
  return;

 for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_3->output[VAR_4].data[VAR_5] =
    VAR_2->audio_output_buf[VAR_4][VAR_5];
  }
 }
}
