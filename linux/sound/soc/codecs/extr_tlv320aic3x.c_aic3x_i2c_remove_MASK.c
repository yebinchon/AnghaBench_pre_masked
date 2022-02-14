
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct aic3x_priv {int gpio_reset; int list; } ;


 int FUNC_0 (struct aic3x_priv*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct aic3x_priv* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct aic3x_priv *VAR_1 = FUNC_4(VAR_0);

 FUNC_5(&VAR_1->list);

 if (FUNC_2(VAR_1->gpio_reset) &&
     !FUNC_0(VAR_1)) {
  FUNC_3(VAR_1->gpio_reset, 0);
  FUNC_1(VAR_1->gpio_reset);
 }
 return 0;
}
