
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dev; int id; } ;
struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_afe_private {TYPE_1__* i2s_path; TYPE_2__* soc; } ;
struct TYPE_4__ {int has_one_heart_mode; } ;
struct TYPE_3__ {unsigned int mclk_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_base_afe*,int ) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2, int VAR_3,
         unsigned int VAR_4, int VAR_5)
{
 struct mtk_base_afe *VAR_6 = FUNC_2(VAR_2);
 struct mt2701_afe_private *VAR_7 = VAR_6->platform_priv;
 int VAR_8 = FUNC_1(VAR_6, VAR_2->id);
 bool VAR_9 = VAR_7->soc->has_one_heart_mode;

 if (VAR_8 < 0)
  return VAR_8;


 if (VAR_5 == VAR_1) {
  FUNC_0(VAR_2->dev, "The SoCs doesn't support mclk input\n");
  return -VAR_0;
 }

 VAR_7->i2s_path[VAR_9 ? 1 : VAR_8].mclk_rate = VAR_4;

 return 0;
}
