
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ml26124_priv {int mclk; int rate; scalar_t__ clk_in; struct snd_pcm_substream* substream; } ;
struct TYPE_2__ {int pllnl; int pllnh; int pllml; int pllmh; int plldiv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct ml26124_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 struct ml26124_priv *VAR_12 = FUNC_5(VAR_11);
 int VAR_13 = FUNC_2(VAR_12->mclk, FUNC_4(VAR_9));
 int VAR_14;

 if (VAR_13 < 0)
  return VAR_13;
 VAR_12->substream = VAR_8;
 VAR_12->rate = FUNC_4(VAR_9);

 if (VAR_12->clk_in) {
  switch (VAR_12->mclk / FUNC_4(VAR_9)) {
  case 256:
   FUNC_6(VAR_11, VAR_0,
         FUNC_0(0) | FUNC_0(1), 1);
   break;
  case 512:
   FUNC_6(VAR_11, VAR_0,
         FUNC_0(0) | FUNC_0(1), 2);
   break;
  case 1024:
   FUNC_6(VAR_11, VAR_0,
         FUNC_0(0) | FUNC_0(1), 3);
   break;
  default:
   FUNC_1(VAR_11->dev, "Unsupported MCLKI\n");
   break;
  }
 } else {
  FUNC_6(VAR_11, VAR_0,
        FUNC_0(0) | FUNC_0(1), 0);
 }

 VAR_14 = FUNC_3(FUNC_4(VAR_9));
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_6(VAR_11, VAR_6, 0xf, VAR_14);
 FUNC_6(VAR_11, VAR_5, 0xff, VAR_7[VAR_13].pllnl);
 FUNC_6(VAR_11, VAR_4, 0x1, VAR_7[VAR_13].pllnh);
 FUNC_6(VAR_11, VAR_3, 0xff, VAR_7[VAR_13].pllml);
 FUNC_6(VAR_11, VAR_2, 0x3f, VAR_7[VAR_13].pllmh);
 FUNC_6(VAR_11, VAR_1, 0x1f, VAR_7[VAR_13].plldiv);

 return 0;
}
