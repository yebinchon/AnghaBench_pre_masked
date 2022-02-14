
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8741_priv {int sysclk; TYPE_1__* sysclk_constraints; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int count; int* list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct wm8741_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5,
       struct snd_pcm_hw_params *VAR_6,
       struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct wm8741_priv *VAR_9 = FUNC_4(VAR_8);
 unsigned int VAR_10, VAR_11;
 int VAR_12;




 if (!VAR_9->sysclk) {
  FUNC_1(VAR_8->dev,
   "No MCLK configured, call set_sysclk() on init or in hw_params\n");
  return -VAR_0;
 }


 for (VAR_12 = 0; VAR_12 < VAR_9->sysclk_constraints->count; VAR_12++) {
  if (VAR_9->sysclk_constraints->list[VAR_12] == FUNC_2(VAR_6))
   break;
 }

 if (VAR_12 == VAR_9->sysclk_constraints->count) {
  FUNC_1(VAR_8->dev, "LRCLK %d unsupported with MCLK %d\n",
   FUNC_2(VAR_6), VAR_9->sysclk);
  return -VAR_0;
 }


 switch (FUNC_3(VAR_6)) {
 case 16:
  VAR_10 = 0x0;
  break;
 case 20:
  VAR_10 = 0x1;
  break;
 case 24:
  VAR_10 = 0x2;
  break;
 case 32:
  VAR_10 = 0x3;
  break;
 default:
  FUNC_0(VAR_8->dev, "wm8741_hw_params:    Unsupported bit size param = %d",
   FUNC_3(VAR_6));
  return -VAR_0;
 }


 if (FUNC_2(VAR_6) > 96000)
  VAR_11 = 0x40;
 else if (FUNC_2(VAR_6) > 48000)
  VAR_11 = 0x20;
 else
  VAR_11 = 0x00;

 FUNC_0(VAR_8->dev, "wm8741_hw_params:    bit size param = %d, rate param = %d",
  FUNC_3(VAR_6), FUNC_2(VAR_6));

 FUNC_5(VAR_8, VAR_1, VAR_2,
       VAR_10);
 FUNC_5(VAR_8, VAR_3, VAR_4,
       VAR_11);

 return 0;
}
