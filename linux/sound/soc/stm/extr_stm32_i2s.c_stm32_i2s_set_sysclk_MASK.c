
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_i2s_data {unsigned int mclk_rate; int regmap; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct stm32_i2s_data*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct stm32_i2s_data* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_3,
    int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct stm32_i2s_data *VAR_7 = FUNC_3(VAR_3);

 FUNC_1(VAR_3->dev, "I2S MCLK frequency is %uHz\n", VAR_5);

 if ((VAR_6 == VAR_1) && FUNC_0(VAR_7)) {
  VAR_7->mclk_rate = VAR_5;


  return FUNC_2(VAR_7->regmap, VAR_2,
       VAR_0, VAR_0);
 }

 return 0;
}
