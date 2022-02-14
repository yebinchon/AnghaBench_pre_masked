
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {struct aif* aifs; } ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct aif {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,struct aif*) ;
 struct tscs454* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
  struct snd_soc_dai *VAR_1)
{
 int VAR_2;
 struct snd_soc_component *VAR_3 = VAR_1->component;
 struct tscs454 *VAR_4 = FUNC_1(VAR_3);
 struct aif *VAR_5 = &VAR_4->aifs[VAR_1->id];

 VAR_2 = FUNC_0(VAR_3, VAR_5);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
