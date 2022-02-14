
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{
 VAR_6 |= VAR_2 | VAR_3;

 if ((VAR_5 & ~VAR_1) != VAR_6)
  return -VAR_0;

 return 0;
}
