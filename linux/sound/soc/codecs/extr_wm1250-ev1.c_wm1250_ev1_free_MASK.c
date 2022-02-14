
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm1250_priv {int gpios; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 struct wm1250_priv* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_0)
{
 struct wm1250_priv *VAR_1 = FUNC_1(&VAR_0->dev);

 if (VAR_1)
  FUNC_2(VAR_1->gpios, FUNC_0(VAR_1->gpios));
}
