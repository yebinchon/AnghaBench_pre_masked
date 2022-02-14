
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cs42l56_private {int supplies; } ;


 int FUNC_0 (int ) ;
 struct cs42l56_private* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct cs42l56_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
 return 0;
}
