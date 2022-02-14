
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs42l52_private {int sysclk; } ;
struct TYPE_2__ {int speed; int group; int videoclk; int ratio; int mclkdiv2; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct cs42l52_private* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7,
         struct snd_pcm_hw_params *VAR_8,
         struct snd_soc_dai *VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_9->component;
 struct cs42l52_private *VAR_11 = FUNC_3(VAR_10);
 u32 VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_11->sysclk, FUNC_2(VAR_8));
 if (VAR_13 >= 0) {
  VAR_11->sysclk = VAR_6[VAR_13].mclk;

  VAR_12 |= (VAR_6[VAR_13].speed << VAR_3) |
  (VAR_6[VAR_13].group << VAR_1) |
  (VAR_6[VAR_13].videoclk << VAR_0) |
  (VAR_6[VAR_13].ratio << VAR_2) |
  VAR_6[VAR_13].mclkdiv2;

  FUNC_4(VAR_10, VAR_4, VAR_12);
 } else {
  FUNC_1(VAR_10->dev, "can't get correct mclk\n");
  return -VAR_5;
 }

 return 0;
}
