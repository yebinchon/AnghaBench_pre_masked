
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_0 (struct i2c_client*,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct regmap*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
     const struct i2c_device_id *VAR_4)
{
 struct regmap *VAR_5;

 if (!FUNC_1(VAR_3->adapter, VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, &VAR_2);
 return FUNC_2(&VAR_3->dev, VAR_5);
}
