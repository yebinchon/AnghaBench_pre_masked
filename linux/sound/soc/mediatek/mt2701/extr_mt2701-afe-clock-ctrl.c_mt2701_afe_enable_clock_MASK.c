
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mtk_base_afe*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(struct mtk_base_afe *VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_8->dev, "failed to enable audio system %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_2(VAR_8->regmap, VAR_2,
      VAR_3,
      VAR_3);
 FUNC_2(VAR_8->regmap, VAR_0,
      VAR_1,
      VAR_1);


 FUNC_3(VAR_8->regmap, VAR_4, VAR_5);
 FUNC_3(VAR_8->regmap, VAR_6, VAR_7);

 return 0;
}
