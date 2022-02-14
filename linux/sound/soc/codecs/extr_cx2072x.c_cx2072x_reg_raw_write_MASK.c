
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct i2c_client*,unsigned int*,size_t) ;
 int FUNC_3 (unsigned int*,void const*,size_t) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
     unsigned int VAR_4,
     const void *VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = &VAR_3->dev;
 u8 VAR_8[2 + VAR_0];
 int VAR_9;

 if (FUNC_0(VAR_6 + 2 > sizeof(VAR_8)))
  return -VAR_1;

 VAR_8[0] = VAR_4 >> 8;
 VAR_8[1] = VAR_4 & 0xff;

 FUNC_3(VAR_8 + 2, VAR_5, VAR_6);

 VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_6 + 2);
 if (VAR_9 != VAR_6 + 2) {
  FUNC_1(VAR_7, "I2C write failed, ret = %d\n", VAR_9);
  return VAR_9 < 0 ? VAR_9 : -VAR_2;
 }
 return 0;
}
