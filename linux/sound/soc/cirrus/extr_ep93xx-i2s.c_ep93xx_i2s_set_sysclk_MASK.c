
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct ep93xx_i2s_info {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 struct ep93xx_i2s_info* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct ep93xx_i2s_info *VAR_6 = FUNC_1(VAR_2);

 if (VAR_5 == VAR_1 || VAR_3 != 0)
  return -VAR_0;

 return FUNC_0(VAR_6->mclk, VAR_4);
}
