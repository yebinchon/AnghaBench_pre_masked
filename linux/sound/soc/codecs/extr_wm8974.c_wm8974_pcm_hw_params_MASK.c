
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8974_priv {int fs; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct wm8974_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct wm8974_priv *VAR_6 = FUNC_2(VAR_5);
 u16 VAR_7 = FUNC_3(VAR_5, VAR_1) & 0x19f;
 u16 VAR_8 = FUNC_3(VAR_5, VAR_0) & 0x1f1;
 int VAR_9;

 VAR_6->fs = FUNC_0(VAR_3);
 VAR_9 = FUNC_5(VAR_4);
 if (VAR_9)
  return VAR_9;


 switch (FUNC_1(VAR_3)) {
 case 16:
  break;
 case 20:
  VAR_7 |= 0x0020;
  break;
 case 24:
  VAR_7 |= 0x0040;
  break;
 case 32:
  VAR_7 |= 0x0060;
  break;
 }


 switch (FUNC_0(VAR_3)) {
 case 8000:
  VAR_8 |= 0x5 << 1;
  break;
 case 11025:
  VAR_8 |= 0x4 << 1;
  break;
 case 16000:
  VAR_8 |= 0x3 << 1;
  break;
 case 22050:
  VAR_8 |= 0x2 << 1;
  break;
 case 32000:
  VAR_8 |= 0x1 << 1;
  break;
 case 44100:
 case 48000:
  break;
 }

 FUNC_4(VAR_5, VAR_1, VAR_7);
 FUNC_4(VAR_5, VAR_0, VAR_8);
 return 0;
}
