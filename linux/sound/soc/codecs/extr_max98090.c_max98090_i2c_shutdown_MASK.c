
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max98090_priv {int regmap; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct max98090_priv* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_3)
{
 struct max98090_priv *VAR_4 = FUNC_0(&VAR_3->dev);





 FUNC_2(VAR_4->regmap,
  VAR_1, VAR_2);
 FUNC_2(VAR_4->regmap,
  VAR_0, 0x00);
 FUNC_1(40);
}
