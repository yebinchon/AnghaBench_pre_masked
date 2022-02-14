
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cs35l36_private {int supplies; int num_supplies; scalar_t__ reset_gpio; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct cs35l36_private* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4)
{
 struct cs35l36_private *VAR_5 = FUNC_1(VAR_4);


 FUNC_2(VAR_5->regmap, VAR_0,
       VAR_1);
 FUNC_2(VAR_5->regmap, VAR_2,
       VAR_3);

 if (VAR_5->reset_gpio)
  FUNC_0(VAR_5->reset_gpio, 0);

 FUNC_3(VAR_5->num_supplies, VAR_5->supplies);

 return 0;
}
