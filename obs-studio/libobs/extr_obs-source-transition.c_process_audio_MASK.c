
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct obs_source_audio_mix {struct audio_output_data* output; } ;
struct audio_output_data {float** data; } ;
typedef int obs_transition_audio_mix_callback_t ;
struct TYPE_6__ {scalar_t__ audio_ts; int audio_pending; } ;
typedef TYPE_1__ obs_source_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,float*,float*,size_t,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,struct obs_source_audio_mix*) ;

__attribute__((used)) static void FUNC_3(obs_source_t *VAR_2, obs_source_t *VAR_3,
     struct obs_source_audio_mix *VAR_4, uint64_t VAR_5,
     uint32_t VAR_6, size_t VAR_7, size_t VAR_8,
     obs_transition_audio_mix_callback_t VAR_9)
{
 bool VAR_10 = VAR_3 && !VAR_3->audio_pending;
 struct obs_source_audio_mix VAR_11;
 uint64_t VAR_12;
 size_t VAR_13;

 if (!VAR_10)
  return;

 VAR_12 = VAR_3->audio_ts;
 FUNC_2(VAR_3, &VAR_11);
 VAR_13 = (size_t)FUNC_1(VAR_8, VAR_12 - VAR_5);

 if (VAR_13 > VAR_0)
  return;

 for (size_t VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  struct audio_output_data *VAR_15 = &VAR_4->output[VAR_14];
  struct audio_output_data *VAR_16 = &VAR_11.output[VAR_14];

  if ((VAR_6 & (1 << VAR_14)) == 0)
   continue;

  for (size_t VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
   float *VAR_18 = VAR_15->data[VAR_17];
   float *VAR_19 = VAR_16->data[VAR_17];

   FUNC_0(VAR_2, VAR_18 + VAR_13, VAR_19,
      VAR_0 - VAR_13, VAR_8, VAR_12,
      VAR_9);
  }
 }
}
