
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct rk_i2s_dev {int dev; int mclk; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rk_i2s_dev* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0, int VAR_1,
       unsigned int VAR_2, int VAR_3)
{
 struct rk_i2s_dev *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 if (VAR_2 == 0)
  return 0;

 VAR_5 = FUNC_0(VAR_4->mclk, VAR_2);
 if (VAR_5)
  FUNC_1(VAR_4->dev, "Fail to set mclk %d\n", VAR_5);

 return VAR_5;
}
