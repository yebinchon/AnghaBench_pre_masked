
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct jz4740_i2s {scalar_t__ version; int clk_i2s; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct jz4740_i2s*,int ) ;
 int FUNC_2 (struct jz4740_i2s*,int ,unsigned int) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct jz4740_i2s* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_14,
 struct snd_pcm_hw_params *VAR_15, struct snd_soc_dai *VAR_16)
{
 struct jz4740_i2s *VAR_17 = FUNC_6(VAR_16);
 unsigned int VAR_18;
 uint32_t VAR_19, VAR_20;
 int VAR_21;

 VAR_19 = FUNC_1(VAR_17, VAR_12);

 VAR_20 = FUNC_1(VAR_17, VAR_11);
 VAR_21 = FUNC_0(VAR_17->clk_i2s) / (64 * FUNC_5(VAR_15));

 switch (FUNC_4(VAR_15)) {
 case 128:
  VAR_18 = 0;
  break;
 case 129:
  VAR_18 = 1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_14->stream == VAR_13) {
  VAR_19 &= ~VAR_8;
  VAR_19 |= VAR_18 << VAR_9;
  if (FUNC_3(VAR_15) == 1)
   VAR_19 |= VAR_7;
  else
   VAR_19 &= ~VAR_7;

  VAR_20 &= ~VAR_1;
  VAR_20 |= (VAR_21 - 1) << VAR_2;
 } else {
  VAR_19 &= ~VAR_5;
  VAR_19 |= VAR_18 << VAR_6;

  if (VAR_17->version >= VAR_10) {
   VAR_20 &= ~VAR_3;
   VAR_20 |= (VAR_21 - 1) << VAR_4;
  } else {
   VAR_20 &= ~VAR_1;
   VAR_20 |= (VAR_21 - 1) << VAR_2;
  }
 }

 FUNC_2(VAR_17, VAR_12, VAR_19);
 FUNC_2(VAR_17, VAR_11, VAR_20);

 return 0;
}
