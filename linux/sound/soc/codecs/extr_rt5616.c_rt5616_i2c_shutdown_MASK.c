
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5616_priv {int regmap; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rt5616_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_2)
{
 struct rt5616_priv *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->regmap, VAR_0, 0xc8c8);
 FUNC_1(VAR_3->regmap, VAR_1, 0xc8c8);
}
