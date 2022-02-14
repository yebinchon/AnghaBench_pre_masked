
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2,
       const struct i2c_device_id *VAR_3)
{
 struct regmap *VAR_4;

 VAR_4 = FUNC_2(VAR_2, &VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(&VAR_2->dev,
  &VAR_0, ((void*)0), 0);
}
