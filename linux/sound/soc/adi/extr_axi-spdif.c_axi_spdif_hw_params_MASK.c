
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axi_spdif {int regmap; int clk_ref; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 struct axi_spdif* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_8,
 struct snd_pcm_hw_params *VAR_9, struct snd_soc_dai *VAR_10)
{
 struct axi_spdif *VAR_11 = FUNC_5(VAR_10);
 unsigned int VAR_12 = FUNC_2(VAR_9);
 unsigned int VAR_13, VAR_14;

 switch (FUNC_2(VAR_9)) {
 case 32000:
  VAR_14 = VAR_2;
  break;
 case 44100:
  VAR_14 = VAR_3;
  break;
 case 48000:
  VAR_14 = VAR_4;
  break;
 default:
  VAR_14 = VAR_5;
  break;
 }

 VAR_13 = FUNC_0(FUNC_1(VAR_11->clk_ref),
   VAR_12 * 64 * 2) - 1;
 VAR_13 <<= VAR_1;

 FUNC_4(VAR_11->regmap, VAR_7, VAR_14);
 FUNC_3(VAR_11->regmap, VAR_6,
  VAR_0, VAR_13);

 return 0;
}
