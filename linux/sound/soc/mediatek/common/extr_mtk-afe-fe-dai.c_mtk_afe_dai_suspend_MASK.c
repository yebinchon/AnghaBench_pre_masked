
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct regmap {int dummy; } ;
struct mtk_base_afe {int suspended; int reg_back_up_list_num; int (* runtime_suspend ) (struct device*) ;int * reg_back_up; int * reg_back_up_list; struct regmap* regmap; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct device*,int,int,int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct regmap*,int ,int *) ;
 struct mtk_base_afe* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct device*) ;

int FUNC_5(struct snd_soc_dai *VAR_1)
{
 struct mtk_base_afe *VAR_2 = FUNC_3(VAR_1);
 struct device *VAR_3 = VAR_2->dev;
 struct regmap *VAR_4 = VAR_2->regmap;
 int VAR_5;

 if (FUNC_1(VAR_3) || VAR_2->suspended)
  return 0;

 if (!VAR_2->reg_back_up)
  VAR_2->reg_back_up =
   FUNC_0(VAR_3, VAR_2->reg_back_up_list_num,
         sizeof(unsigned int), VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2->reg_back_up_list_num; VAR_5++)
  FUNC_2(VAR_4, VAR_2->reg_back_up_list[VAR_5],
       &VAR_2->reg_back_up[VAR_5]);

 VAR_2->suspended = 1;
 VAR_2->runtime_suspend(VAR_3);
 return 0;
}
