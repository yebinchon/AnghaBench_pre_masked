
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_i2s_dev {int mclk; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rk_i2s_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct rk_i2s_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->regmap, 1);
 FUNC_0(VAR_1->mclk);

 return 0;
}
