
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obs_encoder {int paired_encoder; int active; } ;
struct TYPE_3__ {struct obs_encoder** audio_encoders; } ;
typedef TYPE_1__ obs_output_t ;
typedef struct obs_encoder obs_encoder_t ;



__attribute__((used)) static inline obs_encoder_t *FUNC_0(obs_output_t *VAR_0,
        size_t VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct obs_encoder *VAR_3 = VAR_0->audio_encoders[VAR_2];

  if (VAR_3 && !VAR_3->active && !VAR_3->paired_encoder)
   return VAR_3;
 }

 return ((void*)0);
}
