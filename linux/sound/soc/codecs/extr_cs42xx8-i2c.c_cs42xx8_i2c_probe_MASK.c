
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
        const struct i2c_device_id *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_1->dev,
   FUNC_1(VAR_1, &VAR_0));
 if (VAR_3)
  return VAR_3;

 FUNC_3(&VAR_1->dev);
 FUNC_2(&VAR_1->dev);

 return 0;
}
