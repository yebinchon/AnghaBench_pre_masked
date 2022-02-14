
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm4567 {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct ssm4567* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct i2c_client*,int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (struct i2c_client*,struct ssm4567*) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct ssm4567*,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
 const struct i2c_device_id *VAR_7)
{
 struct ssm4567 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_5(VAR_6, VAR_8);

 VAR_8->regmap = FUNC_3(VAR_6, &VAR_5);
 if (FUNC_0(VAR_8->regmap))
  return FUNC_1(VAR_8->regmap);

 VAR_9 = FUNC_6(VAR_8->regmap, VAR_2, 0x00);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_8, 0);
 if (VAR_9)
  return VAR_9;

 return FUNC_4(&VAR_6->dev, &VAR_3,
   &VAR_4, 1);
}
