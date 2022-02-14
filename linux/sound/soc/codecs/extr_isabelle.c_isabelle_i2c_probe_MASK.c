
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*,int) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
         const struct i2c_device_id *VAR_4)
{
 struct regmap *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_4(VAR_3, &VAR_1);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  FUNC_3(&VAR_3->dev, "Failed to allocate register map: %d\n",
   VAR_6);
  return VAR_6;
 }
 FUNC_6(VAR_3, VAR_5);

 VAR_6 = FUNC_5(&VAR_3->dev,
    &VAR_2, VAR_0,
    FUNC_0(VAR_0));
 if (VAR_6 < 0) {
  FUNC_3(&VAR_3->dev, "Failed to register component: %d\n", VAR_6);
  return VAR_6;
 }

 return VAR_6;
}
