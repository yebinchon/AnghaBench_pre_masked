
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cs53l30_private {int supplies; int reset_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct cs53l30_private* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct cs53l30_private *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(VAR_1->reset_gpio, 0);

 FUNC_3(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);

 return 0;
}
