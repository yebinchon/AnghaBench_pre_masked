
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max98927_priv {int v_l_slot; int i_l_slot; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int*) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_0,
 struct max98927_priv *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_0->dev;

 if (!FUNC_0(VAR_3, "vmon-slot-no", &VAR_2))
  VAR_1->v_l_slot = VAR_2 & 0xF;
 else
  VAR_1->v_l_slot = 0;

 if (!FUNC_0(VAR_3, "imon-slot-no", &VAR_2))
  VAR_1->i_l_slot = VAR_2 & 0xF;
 else
  VAR_1->i_l_slot = 1;
}
