
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm8962_priv {int bclk; int lrclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {int rate; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_6 (struct snd_soc_component*) ;
 struct wm8962_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_10 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 struct wm8962_priv *VAR_12 = FUNC_7(VAR_11);
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;

 VAR_12->bclk = FUNC_9(VAR_9);
 if (FUNC_3(VAR_9) == 1)
  VAR_12->bclk *= 2;

 VAR_12->lrclk = FUNC_4(VAR_9);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {
  if (VAR_7[VAR_13].rate == VAR_12->lrclk) {
   VAR_15 |= VAR_7[VAR_13].reg;
   break;
  }
 }
 if (VAR_13 == FUNC_0(VAR_7)) {
  FUNC_2(VAR_11->dev, "Unsupported rate %dHz\n", VAR_12->lrclk);
  return -VAR_0;
 }

 if (VAR_12->lrclk % 8000 == 0)
  VAR_15 |= VAR_4;

 switch (FUNC_5(VAR_9)) {
 case 16:
  break;
 case 20:
  VAR_14 |= 0x4;
  break;
 case 24:
  VAR_14 |= 0x8;
  break;
 case 32:
  VAR_14 |= 0xc;
  break;
 default:
  return -VAR_0;
 }

 FUNC_8(VAR_11, VAR_3,
       VAR_6, VAR_14);
 FUNC_8(VAR_11, VAR_2,
       VAR_4 |
       VAR_5, VAR_15);

 FUNC_1(VAR_11->dev, "hw_params set BCLK %dHz LRCLK %dHz\n",
  VAR_12->bclk, VAR_12->lrclk);

 if (FUNC_6(VAR_11) == VAR_1)
  FUNC_10(VAR_11);

 return 0;
}
