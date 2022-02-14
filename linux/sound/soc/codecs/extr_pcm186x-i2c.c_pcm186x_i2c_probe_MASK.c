
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int irq; int dev; } ;
typedef enum pcm186x_type { ____Placeholder_pcm186x_type } pcm186x_type ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (int *,int const,int,struct regmap*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
        const struct i2c_device_id *VAR_2)
{
 const enum pcm186x_type VAR_3 = (enum pcm186x_type)VAR_2->driver_data;
 int VAR_4 = VAR_1->irq;
 struct regmap *VAR_5;

 VAR_5 = FUNC_2(VAR_1, &VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_3(&VAR_1->dev, VAR_3, VAR_4, VAR_5);
}
