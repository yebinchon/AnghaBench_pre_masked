
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
       const struct i2c_device_id *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_2(&VAR_3->dev, ((void*)0));

 VAR_6 = FUNC_4(VAR_3, 0);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "Failed to read ID: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5 = (VAR_6 & 0xfe) >> 2;
 VAR_7 = VAR_6 & 0x3;

 if (VAR_5 != 1) {
  FUNC_0(&VAR_3->dev, "Unknown board ID %d\n", VAR_5);
  return -VAR_0;
 }

 FUNC_1(&VAR_3->dev, "revision %d\n", VAR_7 + 1);

 VAR_8 = FUNC_6(VAR_3);
 if (VAR_8 != 0)
  return VAR_8;

 VAR_8 = FUNC_3(&VAR_3->dev, &VAR_1,
         &VAR_2, 1);
 if (VAR_8 != 0) {
  FUNC_0(&VAR_3->dev, "Failed to register CODEC: %d\n", VAR_8);
  FUNC_5(VAR_3);
  return VAR_8;
 }

 return 0;
}
