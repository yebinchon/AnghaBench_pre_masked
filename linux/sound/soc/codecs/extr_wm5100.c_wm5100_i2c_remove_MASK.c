
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ldo_ena; scalar_t__ reset; } ;
struct wm5100_priv {TYPE_1__ pdata; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct wm5100_priv*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct wm5100_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct wm5100_priv *VAR_1 = FUNC_3(VAR_0);

 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_1);
 FUNC_4(VAR_0);
 if (VAR_1->pdata.reset) {
  FUNC_2(VAR_1->pdata.reset, 0);
  FUNC_1(VAR_1->pdata.reset);
 }
 if (VAR_1->pdata.ldo_ena) {
  FUNC_2(VAR_1->pdata.ldo_ena, 0);
  FUNC_1(VAR_1->pdata.ldo_ena);
 }

 return 0;
}
