
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mtk_base_afe* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_14)
{
 struct mtk_base_afe *VAR_15 = FUNC_2(VAR_14);
 struct mt8173_afe_private *VAR_16 = VAR_15->platform_priv;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_16->clocks[VAR_11]);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_16->clocks[VAR_13]);
 if (VAR_17)
  goto err_infra;

 VAR_17 = FUNC_1(VAR_16->clocks[VAR_12]);
 if (VAR_17)
  goto err_top_aud_bus;

 VAR_17 = FUNC_1(VAR_16->clocks[VAR_7]);
 if (VAR_17)
  goto err_top_aud;

 VAR_17 = FUNC_1(VAR_16->clocks[VAR_8]);
 if (VAR_17)
  goto err_bck0;
 VAR_17 = FUNC_1(VAR_16->clocks[VAR_9]);
 if (VAR_17)
  goto err_i2s1_m;
 VAR_17 = FUNC_1(VAR_16->clocks[VAR_10]);
 if (VAR_17)
  goto err_i2s2_m;


 FUNC_3(VAR_15->regmap, VAR_5, VAR_6, 0);


 FUNC_3(VAR_15->regmap, VAR_0,
      VAR_1 | VAR_2, 0);


 FUNC_3(VAR_15->regmap, VAR_4, 0xff, 0xff);


 FUNC_3(VAR_15->regmap, VAR_3, 0x1, 0x1);
 return 0;

err_i2s1_m:
 FUNC_0(VAR_16->clocks[VAR_9]);
err_i2s2_m:
 FUNC_0(VAR_16->clocks[VAR_10]);
err_bck0:
 FUNC_0(VAR_16->clocks[VAR_7]);
err_top_aud:
 FUNC_0(VAR_16->clocks[VAR_12]);
err_top_aud_bus:
 FUNC_0(VAR_16->clocks[VAR_13]);
err_infra:
 FUNC_0(VAR_16->clocks[VAR_11]);
 return VAR_17;
}
