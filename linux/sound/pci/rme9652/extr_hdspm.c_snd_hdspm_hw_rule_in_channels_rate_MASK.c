
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct hdspm* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; int integer; } ;
struct hdspm {int qs_in_channels; int ds_in_channels; int ss_in_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_2,
        struct snd_pcm_hw_rule *VAR_3)
{
 struct hdspm *VAR_4 = VAR_3->private;
 struct snd_interval *VAR_5 =
     FUNC_0(VAR_2, VAR_0);
 struct snd_interval *VAR_6 =
     FUNC_0(VAR_2, VAR_1);

 if (VAR_6->min > 96000 && VAR_6->max <= 192000) {
  struct snd_interval VAR_7 = {
   .min = VAR_4->qs_in_channels,
   .max = VAR_4->qs_in_channels,
   .integer = 1,
  };
  return FUNC_1(VAR_5, &VAR_7);
 } else if (VAR_6->min > 48000 && VAR_6->max <= 96000) {
  struct snd_interval VAR_8 = {
   .min = VAR_4->ds_in_channels,
   .max = VAR_4->ds_in_channels,
   .integer = 1,
  };
  return FUNC_1(VAR_5, &VAR_8);
 } else if (VAR_6->max < 64000) {
  struct snd_interval VAR_9 = {
   .min = VAR_4->ss_in_channels,
   .max = VAR_4->ss_in_channels,
   .integer = 1,
  };
  return FUNC_1(VAR_5, &VAR_9);
 }

 return 0;
}
