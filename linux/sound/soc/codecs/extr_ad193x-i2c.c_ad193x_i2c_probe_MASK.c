
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int val_bits; int reg_bits; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int dev; } ;
typedef enum ad193x_type { ____Placeholder_ad193x_type } ad193x_type ;


 int FUNC_0 (int *,int ,int) ;
 struct regmap_config VAR_0 ;
 int FUNC_1 (struct i2c_client*,struct regmap_config*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1,
       const struct i2c_device_id *VAR_2)
{
 struct regmap_config VAR_3;

 VAR_3 = VAR_0;
 VAR_3.val_bits = 8;
 VAR_3.reg_bits = 8;

 return FUNC_0(&VAR_1->dev,
       FUNC_1(VAR_1, &VAR_3),
       (enum ad193x_type)VAR_2->driver_data);
}
