
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; struct mt8173_afe_private* platform_priv; } ;
struct mt8173_afe_private {int * clocks; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ) ;
 struct mtk_base_afe* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_10)
{
 struct mtk_base_afe *VAR_11 = FUNC_1(VAR_10);
 struct mt8173_afe_private *VAR_12 = VAR_11->platform_priv;


 FUNC_2(VAR_11->regmap, VAR_0, 0x1, 0);


 FUNC_2(VAR_11->regmap, VAR_1,
      VAR_2, VAR_2);

 FUNC_0(VAR_12->clocks[VAR_5]);
 FUNC_0(VAR_12->clocks[VAR_6]);
 FUNC_0(VAR_12->clocks[VAR_3]);
 FUNC_0(VAR_12->clocks[VAR_4]);
 FUNC_0(VAR_12->clocks[VAR_8]);
 FUNC_0(VAR_12->clocks[VAR_9]);
 FUNC_0(VAR_12->clocks[VAR_7]);
 return 0;
}
