
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct adau1373 {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct adau1373*) ;
 struct adau1373* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
         const struct i2c_device_id *VAR_7)
{
 struct adau1373 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->regmap = FUNC_5(VAR_6,
  &VAR_5);
 if (FUNC_1(VAR_8->regmap))
  return FUNC_2(VAR_8->regmap);

 FUNC_7(VAR_8->regmap, VAR_0, 0x00);

 FUNC_3(&VAR_6->dev, VAR_8);

 VAR_9 = FUNC_6(&VAR_6->dev,
   &VAR_3,
   VAR_4, FUNC_0(VAR_4));
 return VAR_9;
}
