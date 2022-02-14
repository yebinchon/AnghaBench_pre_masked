
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct aic23 {scalar_t__ requested_adc; scalar_t__ requested_dac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct aic23* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_2,
     struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct aic23 *VAR_5 = FUNC_0(VAR_4);


 if (!FUNC_1(VAR_4)) {
  FUNC_3(50);
  FUNC_2(VAR_4, VAR_1, 0x0);
 }
 if (VAR_2->stream == VAR_0)
  VAR_5->requested_dac = 0;
 else
  VAR_5->requested_adc = 0;
}
