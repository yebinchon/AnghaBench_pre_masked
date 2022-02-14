
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int mclk_rate; scalar_t__ sai_mclk; int regmap; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct stm32_sai_sub_data* FUNC_5 (struct snd_soc_dai*) ;
 int FUNC_6 (struct stm32_sai_sub_data*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_4,
    int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct stm32_sai_sub_data *VAR_8 = FUNC_5(VAR_4);
 int VAR_9;

 if (VAR_7 == VAR_2 && VAR_8->sai_mclk) {
  VAR_9 = FUNC_4(VAR_8->regmap, VAR_3,
      VAR_1,
      VAR_6 ? 0 : VAR_1);
  if (VAR_9 < 0)
   return VAR_9;


  if (!VAR_6) {

   if (VAR_8->mclk_rate) {
    FUNC_0(VAR_8->sai_mclk);
    VAR_8->mclk_rate = 0;
   }
   return 0;
  }


  VAR_9 = FUNC_6(VAR_8, VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_1(VAR_8->sai_mclk, VAR_6);
  if (VAR_9) {
   FUNC_3(VAR_4->dev,
    VAR_9 == -VAR_0 ?
    "Active streams have incompatible rates" :
    "Could not set mclk rate\n");
   return VAR_9;
  }

  FUNC_2(VAR_4->dev, "SAI MCLK frequency is %uHz\n", VAR_6);
  VAR_8->mclk_rate = VAR_6;
 }

 return 0;
}
