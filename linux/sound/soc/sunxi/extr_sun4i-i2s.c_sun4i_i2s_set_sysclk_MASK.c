
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {unsigned int mclk_freq; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 struct sun4i_i2s* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1, int VAR_2,
    unsigned int VAR_3, int VAR_4)
{
 struct sun4i_i2s *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 != 0)
  return -VAR_0;

 VAR_5->mclk_freq = VAR_3;

 return 0;
}
