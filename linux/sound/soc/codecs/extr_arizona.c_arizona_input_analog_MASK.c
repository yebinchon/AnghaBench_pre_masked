
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_soc_component*,unsigned int) ;

bool FUNC_1(struct snd_soc_component *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_0 + ((VAR_3 / 2) * 8);
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_4);

 return !(VAR_5 & VAR_1);
}
