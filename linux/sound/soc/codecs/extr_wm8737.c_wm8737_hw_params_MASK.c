
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8737_priv {int mclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {scalar_t__ rate; int mclk; int usb; int sr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct wm8737_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_9,
       struct snd_pcm_hw_params *VAR_10,
       struct snd_soc_dai *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->component;
 struct wm8737_priv *VAR_13 = FUNC_4(VAR_12);
 int VAR_14;
 u16 VAR_15 = 0;
 u16 VAR_16 = 0;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++) {
  if (VAR_8[VAR_14].rate != FUNC_2(VAR_10))
   continue;

  if (VAR_8[VAR_14].mclk == VAR_13->mclk)
   break;

  if (VAR_8[VAR_14].mclk == VAR_13->mclk * 2) {
   VAR_15 |= VAR_2;
   break;
  }
 }

 if (VAR_14 == FUNC_0(VAR_8)) {
  FUNC_1(VAR_12->dev, "%dHz MCLK can't support %dHz\n",
   VAR_13->mclk, FUNC_2(VAR_10));
  return -VAR_0;
 }

 VAR_15 |= VAR_8[VAR_14].usb | (VAR_8[VAR_14].sr << VAR_5);

 switch (FUNC_3(VAR_10)) {
 case 16:
  break;
 case 20:
  VAR_16 |= 0x8;
  break;
 case 24:
  VAR_16 |= 0x10;
  break;
 case 32:
  VAR_16 |= 0x18;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(VAR_12, VAR_1, VAR_7, VAR_16);
 FUNC_5(VAR_12, VAR_3,
       VAR_6 | VAR_2 | VAR_4,
       VAR_15);

 return 0;
}
