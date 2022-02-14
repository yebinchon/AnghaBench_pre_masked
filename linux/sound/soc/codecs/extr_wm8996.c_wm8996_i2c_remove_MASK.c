
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ldo_ena; } ;
struct wm8996_priv {TYPE_1__ pdata; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct wm8996_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct wm8996_priv*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct wm8996_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1);
 if (VAR_1->pdata.ldo_ena > 0) {
  FUNC_1(VAR_1->pdata.ldo_ena, 0);
  FUNC_0(VAR_1->pdata.ldo_ena);
 }

 return 0;
}
