
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_params {int channels; int sample_rate; int abitrate; int name; } ;


 int FUNC_0 (int*,char***,int *,char*) ;
 int FUNC_1 (int*,char***,int *,char*) ;

__attribute__((used)) static bool FUNC_2(struct audio_params *VAR_0, int *VAR_1,
        char ***VAR_2)
{
 if (!FUNC_1(VAR_1, VAR_2, &VAR_0->name, "audio track name"))
  return 0;
 if (!FUNC_0(VAR_1, VAR_2, &VAR_0->abitrate, "audio bitrate"))
  return 0;
 if (!FUNC_0(VAR_1, VAR_2, &VAR_0->sample_rate, "audio sample rate"))
  return 0;
 if (!FUNC_0(VAR_1, VAR_2, &VAR_0->channels, "audio channels"))
  return 0;
 return 1;
}
