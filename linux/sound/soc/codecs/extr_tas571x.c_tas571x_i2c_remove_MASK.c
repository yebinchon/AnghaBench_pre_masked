
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tas571x_private {int supplies; TYPE_1__* chip; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int num_supply_names; } ;


 struct tas571x_private* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct tas571x_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->chip->num_supply_names, VAR_1->supplies);

 return 0;
}
