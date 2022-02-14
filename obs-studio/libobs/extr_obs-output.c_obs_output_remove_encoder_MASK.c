
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {struct obs_encoder** audio_encoders; struct obs_encoder* video_encoder; } ;
struct obs_encoder {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct obs_output*,char*) ;

void FUNC_1(struct obs_output *VAR_1,
          struct obs_encoder *VAR_2)
{
 if (!FUNC_0(VAR_1, "obs_output_remove_encoder"))
  return;

 if (VAR_1->video_encoder == VAR_2) {
  VAR_1->video_encoder = ((void*)0);
 } else {
  for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_1->audio_encoders[VAR_3] == VAR_2)
    VAR_1->audio_encoders[VAR_3] = ((void*)0);
  }
 }
}
