
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct tas571x_private {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct tas571x_private* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,unsigned int*,unsigned int) ;
 unsigned int FUNC_2 (struct tas571x_private*,unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1;
 struct tas571x_private *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6, VAR_7;
 uint8_t VAR_8[5];
 int VAR_9;

 VAR_7 = FUNC_2(VAR_5, VAR_2);
 VAR_8[0] = VAR_2;

 for (VAR_6 = VAR_7; VAR_6 >= 1; --VAR_6) {
  VAR_8[VAR_6] = VAR_3;
  VAR_3 >>= 8;
 }

 VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_7 + 1);
 if (VAR_9 == VAR_7 + 1)
  return 0;
 else if (VAR_9 < 0)
  return VAR_9;
 else
  return -VAR_0;
}
