
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_1, int VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_1->component;
 int VAR_5;

 if (VAR_2)
  if (VAR_3 == VAR_0)
   VAR_5 = FUNC_2(VAR_4);
  else
   VAR_5 = FUNC_0(VAR_4);
 else
  if (VAR_3 == VAR_0)
   VAR_5 = FUNC_3(VAR_4);
  else
   VAR_5 = FUNC_1(VAR_4);

 return VAR_5;
}
