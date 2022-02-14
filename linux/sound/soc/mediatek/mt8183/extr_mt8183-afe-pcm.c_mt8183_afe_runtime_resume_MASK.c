
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; struct mt8183_afe_private* platform_priv; } ;
struct mt8183_afe_private {scalar_t__ pm_runtime_bypass_reg_ctl; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mtk_base_afe* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_base_afe*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7)
{
 struct mtk_base_afe *VAR_8 = FUNC_0(VAR_7);
 struct mt8183_afe_private *VAR_9 = VAR_8->platform_priv;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10)
  return VAR_10;

 if (!VAR_8->regmap || VAR_9->pm_runtime_bypass_reg_ctl)
  goto skip_regmap;

 FUNC_2(VAR_8->regmap, 0);
 FUNC_3(VAR_8->regmap);


 FUNC_4(VAR_8->regmap, VAR_4, 0x1 << 29, 0x1 << 29);


 FUNC_4(VAR_8->regmap, VAR_3,
      VAR_5, 0 << VAR_6);


 FUNC_5(VAR_8->regmap, VAR_0, 0xffffffff);
 FUNC_5(VAR_8->regmap, VAR_1, 0xffffffff);


 FUNC_4(VAR_8->regmap, VAR_2, 0x1, 0x1);

skip_regmap:
 return 0;
}
