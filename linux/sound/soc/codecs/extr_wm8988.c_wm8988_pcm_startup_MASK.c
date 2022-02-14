
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8988_priv {int sysclk_constraints; int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct wm8988_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct wm8988_priv *VAR_5 = FUNC_2(VAR_4);




 if (!VAR_5->sysclk) {
  FUNC_0(VAR_4->dev,
   "No MCLK configured, call set_sysclk() on init\n");
  return -VAR_0;
 }

 FUNC_1(VAR_2->runtime, 0,
       VAR_1,
       VAR_5->sysclk_constraints);

 return 0;
}
