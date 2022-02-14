
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {scalar_t__ power_gpio; int component; int chip_power; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct tlv320dac33_priv* FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct tlv320dac33_priv *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_1->chip_power))
  FUNC_0(VAR_1->component, 0);

 if (VAR_1->power_gpio >= 0)
  FUNC_1(VAR_1->power_gpio);

 return 0;
}
