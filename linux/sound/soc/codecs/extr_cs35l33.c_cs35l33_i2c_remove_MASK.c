
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct cs35l33_private {int core_supplies; int num_core_supplies; int reset_gpio; } ;


 int FUNC_0 (int ,int ) ;
 struct cs35l33_private* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct cs35l33_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->reset_gpio, 0);

 FUNC_2(&VAR_0->dev);
 FUNC_3(VAR_1->num_core_supplies,
  VAR_1->core_supplies);

 return 0;
}
