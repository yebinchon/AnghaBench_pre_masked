
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

int FUNC_1(struct snd_soc_component *VAR_4, int VAR_5,
      bool VAR_6)
{
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 if (VAR_5 < 1 || VAR_5 > VAR_1)
  return -VAR_0;

 VAR_7 = VAR_3 + (VAR_5 - 1) * 8;

 if (VAR_6)
  VAR_8 = VAR_2;
 else
  VAR_8 = 0;

 VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_2,
         VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 else
  return 0;
}
