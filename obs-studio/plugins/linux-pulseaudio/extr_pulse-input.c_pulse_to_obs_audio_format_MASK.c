
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_sample_format_t ;
typedef enum audio_format { ____Placeholder_audio_format } audio_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





__attribute__((used)) static enum audio_format FUNC_0(pa_sample_format_t VAR_5)
{
 switch (VAR_5) {
 case 128:
  return VAR_3;
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 case 131:
  return VAR_2;
 default:
  return VAR_4;
 }

 return VAR_4;
}
