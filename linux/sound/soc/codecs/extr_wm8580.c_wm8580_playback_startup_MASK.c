
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8580_priv {TYPE_1__* drvdata; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int num_dacs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct wm8580_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct wm8580_priv *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_1->runtime,
  VAR_0, 1, VAR_4->drvdata->num_dacs * 2);
}
