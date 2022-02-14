
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spdifrx_data {int regmap; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct stm32_spdifrx_data* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct stm32_spdifrx_data*) ;
 int FUNC_3 (struct stm32_spdifrx_data*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5, int VAR_6,
     struct snd_soc_dai *VAR_7)
{
 struct stm32_spdifrx_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = 0;

 switch (VAR_6) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_8->regmap, VAR_4,
       VAR_2, VAR_2);

  FUNC_0(VAR_8->regmap, VAR_3,
       VAR_1, VAR_1);

  VAR_9 = FUNC_2(VAR_8);
  break;
 case 128:
 case 133:
 case 129:
  FUNC_3(VAR_8);
  break;
 default:
  return -VAR_0;
 }

 return VAR_9;
}
