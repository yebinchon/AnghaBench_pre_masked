
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct audio_convert_info {int dummy; } ;
struct TYPE_4__ {int audio_conversion_set; struct audio_convert_info audio_conversion; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct audio_convert_info const*,char*) ;

void FUNC_2(
 obs_output_t *VAR_0, const struct audio_convert_info *VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_output_set_audio_conversion"))
  return;
 if (!FUNC_1(VAR_1, "obs_output_set_audio_conversion"))
  return;

 VAR_0->audio_conversion = *VAR_1;
 VAR_0->audio_conversion_set = 1;
}
