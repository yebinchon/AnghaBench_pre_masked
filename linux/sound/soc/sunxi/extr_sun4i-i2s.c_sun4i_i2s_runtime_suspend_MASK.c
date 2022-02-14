
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int bus_clk; int regmap; int mod_clk; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct sun4i_i2s* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct sun4i_i2s *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->mod_clk);


 FUNC_3(VAR_4->regmap, VAR_1,
      VAR_2, 0);


 FUNC_3(VAR_4->regmap, VAR_1,
      VAR_0, 0);

 FUNC_2(VAR_4->regmap, 1);

 FUNC_0(VAR_4->bus_clk);

 return 0;
}
