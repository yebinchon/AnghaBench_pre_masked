
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {struct obs_encoder** audio_encoders; } ;
struct obs_encoder {int dummy; } ;
struct encoder_packet {struct obs_encoder* encoder; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(const struct obs_output *VAR_1,
         struct encoder_packet *VAR_2)
{
 for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct obs_encoder *VAR_4 = VAR_1->audio_encoders[VAR_3];

  if (VAR_2->encoder == VAR_4)
   return VAR_3;
 }

 FUNC_0(0);
 return 0;
}
