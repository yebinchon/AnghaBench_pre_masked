
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int substream; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int FUNC_0 (int ,struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,struct snd_soc_component*) ;
 int FUNC_3 (int ) ;
 struct tlv320dac33_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_0,
  struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_0->dapm);
 struct tlv320dac33_priv *VAR_4 = FUNC_4(VAR_3);

 switch (VAR_2) {
 case 128:
  if (FUNC_3(VAR_4->substream)) {
   FUNC_0(VAR_4->substream, VAR_3);
   FUNC_2(VAR_4->substream, VAR_3);
  }
  break;
 case 129:
  FUNC_1(VAR_3);
  break;
 }
 return 0;
}
