
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ldo_ena; scalar_t__ reset; } ;
struct wm2200_priv {TYPE_1__ pdata; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct wm2200_priv*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct wm2200_priv* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct wm2200_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_1);
 if (VAR_1->pdata.reset)
  FUNC_1(VAR_1->pdata.reset, 0);
 if (VAR_1->pdata.ldo_ena)
  FUNC_1(VAR_1->pdata.ldo_ena, 0);

 return 0;
}
