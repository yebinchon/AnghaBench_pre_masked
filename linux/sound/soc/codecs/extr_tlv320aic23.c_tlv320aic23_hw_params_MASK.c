
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aic23 {int mclk; void* requested_adc; void* requested_dac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,void*,void*) ;
 struct aic23* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 u16 VAR_6;
 int VAR_7;
 struct aic23 *VAR_8 = FUNC_3(VAR_5);
 u32 VAR_9 = VAR_8->requested_adc;
 u32 VAR_10 = VAR_8->requested_dac;
 u32 VAR_11 = FUNC_0(VAR_3);

 if (VAR_2->stream == VAR_0) {
  VAR_8->requested_dac = VAR_10 = VAR_11;
  if (!VAR_9)
   VAR_9 = VAR_11;
 } else {
  VAR_8->requested_adc = VAR_9 = VAR_11;
  if (!VAR_10)
   VAR_10 = VAR_11;
 }
 VAR_7 = FUNC_2(VAR_5, VAR_8->mclk, VAR_9,
   VAR_10);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_4(VAR_5, VAR_1) & ~(0x03 << 2);

 switch (FUNC_1(VAR_3)) {
 case 16:
  break;
 case 20:
  VAR_6 |= (0x01 << 2);
  break;
 case 24:
  VAR_6 |= (0x02 << 2);
  break;
 case 32:
  VAR_6 |= (0x03 << 2);
  break;
 }
 FUNC_5(VAR_5, VAR_1, VAR_6);

 return 0;
}
