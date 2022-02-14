
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040 {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct twl6040* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (struct snd_soc_component*,unsigned int) ;
 int FUNC_2 (struct twl6040*,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 struct twl6040 *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 FUNC_3(VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_2, VAR_3))
  return FUNC_2(VAR_5, VAR_3, VAR_4);
 else
  return 0;
}
