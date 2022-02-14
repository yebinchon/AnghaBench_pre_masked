
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct es8328_priv {scalar_t__ sysclk_constraints; scalar_t__ master; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 struct es8328_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
     struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct es8328_priv *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->master && VAR_4->sysclk_constraints)
  FUNC_0(VAR_1->runtime, 0,
    VAR_0,
    VAR_4->sysclk_constraints);

 return 0;
}
