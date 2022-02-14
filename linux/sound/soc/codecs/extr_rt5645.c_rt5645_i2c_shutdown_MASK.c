
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5645_priv {int regmap; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rt5645_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_7)
{
 struct rt5645_priv *VAR_8 = FUNC_0(VAR_7);

 FUNC_2(VAR_8->regmap, VAR_2,
  VAR_6, VAR_6);
 FUNC_2(VAR_8->regmap, VAR_4, VAR_1,
  VAR_1);
 FUNC_2(VAR_8->regmap, VAR_3, VAR_0,
  0);
 FUNC_1(20);
 FUNC_3(VAR_8->regmap, VAR_5, 0);
}
