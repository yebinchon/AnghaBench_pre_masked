
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5514_priv {int i2c_regmap; } ;
struct i2c_client {int dummy; } ;


 unsigned int VAR_0 ;
 struct rt5514_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned int VAR_2, unsigned int *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1;
 struct rt5514_priv *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_5->i2c_regmap, VAR_2 | VAR_0, VAR_3);

 return 0;
}
