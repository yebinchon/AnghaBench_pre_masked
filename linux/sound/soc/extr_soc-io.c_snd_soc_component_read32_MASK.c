
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,unsigned int,unsigned int*) ;

unsigned int FUNC_1(struct snd_soc_component *VAR_0,
          unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);
 if (VAR_3 < 0)
  return -1;

 return VAR_2;
}
