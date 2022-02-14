
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct hdsp* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {scalar_t__ min; int max; int integer; } ;
struct hdsp {scalar_t__ ss_in_channels; scalar_t__ qs_in_channels; scalar_t__ io_type; scalar_t__ ds_in_channels; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_3,
          struct snd_pcm_hw_rule *VAR_4)
{
 struct hdsp *VAR_5 = VAR_4->private;
 struct snd_interval *VAR_6 = FUNC_0(VAR_3, VAR_1);
 struct snd_interval *VAR_7 = FUNC_0(VAR_3, VAR_2);
 if (VAR_6->min >= VAR_5->ss_in_channels) {
  struct snd_interval VAR_8 = {
   .min = 32000,
   .max = 48000,
   .integer = 1,
  };
  return FUNC_1(VAR_7, &VAR_8);
 } else if (VAR_6->max <= VAR_5->qs_in_channels && VAR_5->io_type == VAR_0) {
  struct snd_interval VAR_9 = {
   .min = 128000,
   .max = 192000,
   .integer = 1,
  };
  return FUNC_1(VAR_7, &VAR_9);
 } else if (VAR_6->max <= VAR_5->ds_in_channels) {
  struct snd_interval VAR_10 = {
   .min = 64000,
   .max = 96000,
   .integer = 1,
  };
  return FUNC_1(VAR_7, &VAR_10);
 }
 return 0;
}
