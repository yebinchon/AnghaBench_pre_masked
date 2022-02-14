
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0);

 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_4, VAR_0, VAR_5);

 return 0;
}
