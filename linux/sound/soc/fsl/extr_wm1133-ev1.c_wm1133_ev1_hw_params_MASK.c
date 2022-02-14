
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef scalar_t__ snd_pcm_format_t ;
struct TYPE_3__ {unsigned int rate; scalar_t__ format; unsigned int channels; int clkdiv; int lr_rate; int bclkdiv; int sysclk; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int ,int,int ) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int ,int ) ;
 int FUNC_7 (struct snd_soc_dai*,int,int,int,int ) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_9,
    struct snd_pcm_hw_params *VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11 = VAR_9->private_data;
 struct snd_soc_dai *VAR_12 = VAR_11->codec_dai;
 struct snd_soc_dai *VAR_13 = VAR_11->cpu_dai;
 int VAR_14, VAR_15 = 0;
 snd_pcm_format_t VAR_16 = FUNC_2(VAR_10);
 unsigned int VAR_17 = FUNC_3(VAR_10);
 unsigned int VAR_18 = FUNC_1(VAR_10);


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++) {
  if (VAR_17 == VAR_8[VAR_14].rate &&
      VAR_16 == VAR_8[VAR_14].format &&
      VAR_18 == VAR_8[VAR_14].channels) {
   VAR_15 = 1;
   break;
  }
 }
 if (!VAR_15)
  return -VAR_0;


 FUNC_5(VAR_12, 0, 0, 14750000, VAR_8[VAR_14].sysclk);


 switch (VAR_18) {
 case 2:
  FUNC_7(VAR_13, 0x3, 0x3, 2, 0);
  break;
 case 1:
  FUNC_7(VAR_13, 0x1, 0x1, 1, 0);
  break;
 default:
  return -VAR_0;
 }


 FUNC_6(VAR_12, VAR_7,
          VAR_8[VAR_14].sysclk, VAR_1);


 FUNC_4(VAR_12, VAR_4,
          VAR_8[VAR_14].bclkdiv);


 FUNC_4(VAR_12,
          VAR_5, VAR_8[VAR_14].lr_rate);
 FUNC_4(VAR_12,
          VAR_2, VAR_8[VAR_14].lr_rate);


 FUNC_4(VAR_12,
          VAR_6, VAR_8[VAR_14].clkdiv);

 FUNC_4(VAR_12,
          VAR_3, VAR_8[VAR_14].clkdiv);

 return 0;
}
