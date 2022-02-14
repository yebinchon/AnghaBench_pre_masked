
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {int regmap; } ;
struct i2c_client {int dummy; } ;


 struct wm2000_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2)
{
 struct wm2000_priv *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_3->regmap, VAR_1, VAR_2);
}
