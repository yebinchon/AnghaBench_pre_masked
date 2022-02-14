
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max98373_priv {int v_slot; int i_slot; int reset_gpio; int spkfb_slot; } ;
struct device {TYPE_1__* of_node; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_2__ {int full_name; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,char*,int ,int) ;
 int FUNC_2 (struct device*,char*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_0,
 struct max98373_priv *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_0->dev;

 if (!FUNC_2(VAR_3, "maxim,vmon-slot-no", &VAR_2))
  VAR_1->v_slot = VAR_2 & 0xF;
 else
  VAR_1->v_slot = 0;

 if (!FUNC_2(VAR_3, "maxim,imon-slot-no", &VAR_2))
  VAR_1->i_slot = VAR_2 & 0xF;
 else
  VAR_1->i_slot = 1;
 if (VAR_3->of_node) {
  VAR_1->reset_gpio = FUNC_4(VAR_3->of_node,
      "maxim,reset-gpio", 0);
  if (!FUNC_3(VAR_1->reset_gpio)) {
   FUNC_1(VAR_3, "Looking up %s property in node %s failed %d\n",
    "maxim,reset-gpio", VAR_3->of_node->full_name,
    VAR_1->reset_gpio);
  } else {
   FUNC_0(VAR_3, "maxim,reset-gpio=%d",
    VAR_1->reset_gpio);
  }
 } else {

  VAR_1->reset_gpio = -1;
 }

 if (!FUNC_2(VAR_3, "maxim,spkfb-slot-no", &VAR_2))
  VAR_1->spkfb_slot = VAR_2 & 0xF;
 else
  VAR_1->spkfb_slot = 2;
}
