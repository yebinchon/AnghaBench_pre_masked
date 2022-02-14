
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned int*,unsigned int) ;
 unsigned int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 struct i2c_client *VAR_5 = VAR_2;
 unsigned int VAR_6, VAR_7;
 uint8_t VAR_8[5];
 int VAR_9;

 VAR_7 = FUNC_1(&VAR_5->dev, VAR_3);
 if (VAR_7 == 0)
  return -VAR_0;

 VAR_8[0] = VAR_3;

 for (VAR_6 = VAR_7; VAR_6 >= 1; --VAR_6) {
  VAR_8[VAR_6] = VAR_4;
  VAR_4 >>= 8;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_7 + 1);
 if (VAR_9 == VAR_7 + 1)
  return 0;
 else if (VAR_9 < 0)
  return VAR_9;
 else
  return -VAR_1;
}
