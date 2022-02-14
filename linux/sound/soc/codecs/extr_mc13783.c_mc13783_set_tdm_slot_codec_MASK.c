
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4, int VAR_5,
 int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_2->component;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0x3f;

 if (VAR_5 != 4)
  return -VAR_0;

 if (VAR_3 != 0x3)
  return -VAR_0;

 VAR_8 |= (0x00 << 2);
 VAR_8 |= (0x01 << 4);

 FUNC_0(VAR_7, VAR_1, VAR_9, VAR_8);

 return 0;
}
