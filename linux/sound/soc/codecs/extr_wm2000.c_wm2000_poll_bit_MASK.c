
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct wm2000_priv {int regmap; } ;
struct i2c_client {int dummy; } ;


 struct wm2000_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0,
      unsigned int VAR_1, u8 VAR_2)
{
 struct wm2000_priv *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 4000;
 unsigned int VAR_5;

 FUNC_2(VAR_3->regmap, VAR_1, &VAR_5);

 while (!(VAR_5 & VAR_2) && --VAR_4) {
  FUNC_1(1);
  FUNC_2(VAR_3->regmap, VAR_1, &VAR_5);
 }

 if (VAR_4 == 0)
  return 0;
 else
  return 1;
}
