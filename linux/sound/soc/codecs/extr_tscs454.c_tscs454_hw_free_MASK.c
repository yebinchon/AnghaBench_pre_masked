
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {struct aif* aifs; } ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct aif {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,struct aif*,int) ;
 struct tscs454* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
  struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct tscs454 *VAR_4 = FUNC_1(VAR_3);
 struct aif *VAR_5 = &VAR_4->aifs[VAR_2->id];

 return FUNC_0(VAR_3, VAR_5,
   VAR_1->stream == VAR_0);
}
