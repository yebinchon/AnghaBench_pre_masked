
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_i2s_dev {int mclk; int regmap; int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct rk_i2s_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct rk_i2s_dev *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->mclk);
 if (VAR_2) {
  FUNC_2(VAR_1->dev, "clock enable failed %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_4(VAR_1->regmap, 0);
 FUNC_5(VAR_1->regmap);

 VAR_2 = FUNC_6(VAR_1->regmap);
 if (VAR_2)
  FUNC_0(VAR_1->mclk);

 return VAR_2;
}
