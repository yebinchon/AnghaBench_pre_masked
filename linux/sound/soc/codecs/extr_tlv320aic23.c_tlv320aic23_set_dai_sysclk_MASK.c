
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct aic23 {unsigned int mclk; } ;


 struct aic23* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0,
          int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct aic23 *VAR_4 = FUNC_0(VAR_0);
 VAR_4->mclk = VAR_2;
 return 0;
}
