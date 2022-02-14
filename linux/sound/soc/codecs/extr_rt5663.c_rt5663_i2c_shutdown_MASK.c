
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5663_priv {int regmap; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct rt5663_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_1)
{
 struct rt5663_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->regmap, VAR_0, 0);
}
