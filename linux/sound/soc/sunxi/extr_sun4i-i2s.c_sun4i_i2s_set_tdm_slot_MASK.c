
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int slots; int slot_width; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 struct sun4i_i2s* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3,
      int VAR_4, int VAR_5)
{
 struct sun4i_i2s *VAR_6 = FUNC_0(VAR_1);

 if (VAR_4 > 8)
  return -VAR_0;

 VAR_6->slots = VAR_4;
 VAR_6->slot_width = VAR_5;

 return 0;
}
