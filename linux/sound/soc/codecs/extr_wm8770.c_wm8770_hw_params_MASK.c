
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8770_priv {int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int* VAR_3 ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct wm8770_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_4,
       struct snd_pcm_hw_params *VAR_5,
       struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7;
 struct wm8770_priv *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = VAR_6->component;
 VAR_8 = FUNC_5(VAR_7);

 VAR_10 = 0;
 switch (FUNC_4(VAR_5)) {
 case 16:
  break;
 case 20:
  VAR_10 |= 0x10;
  break;
 case 24:
  VAR_10 |= 0x20;
  break;
 case 32:
  VAR_10 |= 0x30;
  break;
 }

 switch (VAR_4->stream) {
 case 128:
  VAR_9 = 0;
  VAR_11 = 4;
  break;
 case 129:
  VAR_9 = 2;
  VAR_11 = 0;
  break;
 default:
  return -VAR_0;
 }


 if (FUNC_6(VAR_7, VAR_2) & 0x100) {
  for (; VAR_9 < FUNC_0(VAR_3); ++VAR_9) {
   VAR_12 = VAR_8->sysclk / FUNC_3(VAR_5);
   if (VAR_12 == VAR_3[VAR_9])
    break;
  }

  if (VAR_9 == FUNC_0(VAR_3)) {
   FUNC_2(VAR_7->dev,
    "Unable to configure MCLK ratio %d/%d\n",
    VAR_8->sysclk, FUNC_3(VAR_5));
   return -VAR_0;
  }

  FUNC_1(VAR_7->dev, "MCLK is %dfs\n", VAR_3[VAR_9]);

  FUNC_7(VAR_7, VAR_2, 0x7 << VAR_11,
        VAR_9 << VAR_11);
 }

 FUNC_7(VAR_7, VAR_1, 0x30, VAR_10);

 return 0;
}
