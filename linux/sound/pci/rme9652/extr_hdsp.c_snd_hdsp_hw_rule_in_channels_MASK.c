
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct hdsp* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int dummy; } ;
struct hdsp {scalar_t__ io_type; unsigned int qs_in_channels; unsigned int ds_in_channels; unsigned int ss_in_channels; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_2,
     struct snd_pcm_hw_rule *VAR_3)
{
 struct hdsp *VAR_4 = VAR_3->private;
 struct snd_interval *VAR_5 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4->io_type == VAR_0) {
  unsigned int VAR_6[3];
  VAR_6[0] = VAR_4->qs_in_channels;
  VAR_6[1] = VAR_4->ds_in_channels;
  VAR_6[2] = VAR_4->ss_in_channels;
  return FUNC_1(VAR_5, 3, VAR_6, 0);
 } else {
  unsigned int VAR_7[2];
  VAR_7[0] = VAR_4->ds_in_channels;
  VAR_7[1] = VAR_4->ss_in_channels;
  return FUNC_1(VAR_5, 2, VAR_7, 0);
 }
}
