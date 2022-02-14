
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8988_priv {int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int sr; int usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct wm8988_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct wm8988_priv *VAR_7 = FUNC_4(VAR_6);
 u16 VAR_8 = FUNC_5(VAR_6, VAR_0) & 0x1f3;
 u16 VAR_9 = FUNC_5(VAR_6, VAR_1) & 0x180;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->sysclk, FUNC_2(VAR_4));
 if (VAR_10 < 0) {
  VAR_10 = FUNC_1(VAR_7->sysclk / 2, FUNC_2(VAR_4));
  VAR_9 |= 0x40;
 }
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev,
   "Unable to configure sample rate %dHz with %dHz MCLK\n",
   FUNC_2(VAR_4), VAR_7->sysclk);
  return VAR_10;
 }


 switch (FUNC_3(VAR_4)) {
 case 16:
  break;
 case 20:
  VAR_8 |= 0x0004;
  break;
 case 24:
  VAR_8 |= 0x0008;
  break;
 case 32:
  VAR_8 |= 0x000c;
  break;
 }


 FUNC_6(VAR_6, VAR_0, VAR_8);
 if (VAR_10 >= 0)
  FUNC_6(VAR_6, VAR_1, VAR_9 |
   (VAR_2[VAR_10].sr << 1) | VAR_2[VAR_10].usb);

 return 0;
}
