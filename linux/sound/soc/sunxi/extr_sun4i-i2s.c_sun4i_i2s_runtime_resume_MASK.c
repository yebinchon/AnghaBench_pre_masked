
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int bus_clk; int mod_clk; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct sun4i_i2s* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3)
{
 struct sun4i_i2s *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->bus_clk);
 if (VAR_5) {
  FUNC_3(VAR_3, "Failed to enable bus clock\n");
  return VAR_5;
 }

 FUNC_5(VAR_4->regmap, 0);
 FUNC_6(VAR_4->regmap);

 VAR_5 = FUNC_7(VAR_4->regmap);
 if (VAR_5) {
  FUNC_3(VAR_3, "Failed to sync regmap cache\n");
  goto err_disable_clk;
 }


 FUNC_8(VAR_4->regmap, VAR_1,
      VAR_0, VAR_0);


 FUNC_8(VAR_4->regmap, VAR_1,
      VAR_2,
      FUNC_0(0));

 VAR_5 = FUNC_2(VAR_4->mod_clk);
 if (VAR_5) {
  FUNC_3(VAR_3, "Failed to enable module clock\n");
  goto err_disable_clk;
 }

 return 0;

err_disable_clk:
 FUNC_1(VAR_4->bus_clk);
 return VAR_5;
}
