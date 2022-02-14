
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio {int chip; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int ,int) ;
 struct uniphier_aio* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, int VAR_2,
    int VAR_3, unsigned int VAR_4,
    unsigned int VAR_5)
{
 struct uniphier_aio *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 if (!FUNC_1(VAR_6->chip, VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->chip, VAR_2, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
