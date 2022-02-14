
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum twl6040_trim { ____Placeholder_twl6040_trim } twl6040_trim ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct snd_soc_component *VAR_3, enum twl6040_trim VAR_4)
{
 if (FUNC_1(VAR_4 >= VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_1 + VAR_4);
}
