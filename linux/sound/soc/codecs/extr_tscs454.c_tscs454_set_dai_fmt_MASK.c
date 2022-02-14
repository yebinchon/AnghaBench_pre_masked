
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {struct aif* aifs; } ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct aif {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,size_t,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,size_t,unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,struct aif*,unsigned int) ;
 struct tscs454* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_0, unsigned int VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_0->component;
 struct tscs454 *VAR_3 = FUNC_3(VAR_2);
 struct aif *VAR_4 = &VAR_3->aifs[VAR_0->id];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0->id, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0->id, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
