
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct max98090_priv {int pll_det_disable_work; int master; int pll_det_enable_work; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 struct max98090_priv* FUNC_3 (struct snd_soc_component*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct max98090_priv *VAR_5 = FUNC_3(VAR_4);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  if (!VAR_5->master && VAR_3->active == 1)
   FUNC_1(VAR_0,
        &VAR_5->pll_det_enable_work,
        FUNC_0(10));
  break;
 case 129:
 case 128:
 case 133:
  if (!VAR_5->master && VAR_3->active == 1)
   FUNC_2(&VAR_5->pll_det_disable_work);
  break;
 default:
  break;
 }

 return 0;
}
