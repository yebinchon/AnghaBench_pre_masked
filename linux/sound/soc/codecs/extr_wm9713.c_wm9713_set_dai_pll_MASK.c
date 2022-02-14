
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0, int VAR_1,
  int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_0->component;
 return FUNC_0(VAR_5, VAR_1, VAR_3, VAR_4);
}
