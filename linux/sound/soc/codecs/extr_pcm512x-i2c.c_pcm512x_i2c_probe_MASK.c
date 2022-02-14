
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int read_flag_mask; int write_flag_mask; } ;
struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct i2c_client*,struct regmap_config*) ;
 int FUNC_3 (int *,struct regmap*) ;
 struct regmap_config VAR_0 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
        const struct i2c_device_id *VAR_2)
{
 struct regmap *VAR_3;
 struct regmap_config VAR_4 = VAR_0;


 VAR_4.read_flag_mask = 0x80;
 VAR_4.write_flag_mask = 0x80;

 VAR_3 = FUNC_2(VAR_1, &VAR_4);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_3(&VAR_1->dev, VAR_3);
}
