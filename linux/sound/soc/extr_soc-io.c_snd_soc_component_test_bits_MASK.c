
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,unsigned int,unsigned int*) ;

int FUNC_1(struct snd_soc_component *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5 = (VAR_4 & ~VAR_2) | VAR_3;
 return VAR_4 != VAR_5;
}
