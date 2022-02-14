
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cs4349_private {int reset_gpio; } ;


 int FUNC_0 (int ,int ) ;
 struct cs4349_private* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct cs4349_private *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_1->reset_gpio, 0);

 return 0;
}
