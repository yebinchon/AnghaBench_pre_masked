
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8753_priv {int pcmclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct wm8753_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct wm8753_priv *VAR_6 = FUNC_2(VAR_5);
 u16 VAR_7 = FUNC_3(VAR_5, VAR_0) & 0x01f3;
 u16 VAR_8 = FUNC_3(VAR_5, VAR_1) & 0x017f;


 switch (FUNC_1(VAR_3)) {
 case 16:
  break;
 case 20:
  VAR_7 |= 0x0004;
  break;
 case 24:
  VAR_7 |= 0x0008;
  break;
 case 32:
  VAR_7 |= 0x000c;
  break;
 }


 if (FUNC_0(VAR_3) * 384 == VAR_6->pcmclk)
  VAR_8 |= 0x80;
 FUNC_4(VAR_5, VAR_1, VAR_8);

 FUNC_4(VAR_5, VAR_0, VAR_7);
 return 0;
}
