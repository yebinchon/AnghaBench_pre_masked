
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uda1334_priv {int mute; int rate_constraint; int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct uda1334_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct uda1334_priv *VAR_5 = FUNC_3(VAR_4);





 if (!VAR_5->sysclk) {
  FUNC_0(VAR_4->dev,
   "No MCLK configured, call set_sysclk() on init\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2->runtime, 0,
       VAR_1,
       &VAR_5->rate_constraint);

 FUNC_1(VAR_5->mute, 1);

 return 0;
}
