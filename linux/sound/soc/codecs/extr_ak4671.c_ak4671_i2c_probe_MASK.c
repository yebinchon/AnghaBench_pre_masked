
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 struct regmap* FUNC_3 (struct i2c_client*,int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3,
       const struct i2c_device_id *VAR_4)
{
 struct regmap *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3, &VAR_1);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_2(&VAR_3->dev, "Failed to create regmap: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(&VAR_3->dev,
   &VAR_2, &VAR_0, 1);
 return VAR_6;
}
