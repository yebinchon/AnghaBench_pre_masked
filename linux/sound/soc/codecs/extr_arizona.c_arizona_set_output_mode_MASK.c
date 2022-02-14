
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

int FUNC_1(struct snd_soc_component *VAR_3, int VAR_4,
       bool VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (VAR_4 < 1 || VAR_4 > 6)
  return -VAR_2;

 VAR_6 = VAR_1 + (VAR_4 - 1) * 8;

 if (VAR_5)
  VAR_7 = VAR_0;
 else
  VAR_7 = 0;

 return FUNC_0(VAR_3, VAR_6,
          VAR_0, VAR_7);
}
