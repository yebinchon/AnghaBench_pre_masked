
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1305_priv {int regmap; } ;
struct i2c_client {int dummy; } ;


 struct rt1305_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct rt1305_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->regmap);
}
