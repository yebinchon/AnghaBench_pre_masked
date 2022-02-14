
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct tas571x_private {int dummy; } ;
struct i2c_msg {int len; unsigned int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int send_buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tas571x_private* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 unsigned int FUNC_3 (struct tas571x_private*,unsigned int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, unsigned int VAR_3,
       unsigned int *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_2;
 struct tas571x_private *VAR_6 = FUNC_1(VAR_5);
 uint8_t VAR_7, VAR_8[4];
 struct i2c_msg VAR_9[2];
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_6, VAR_3);
 VAR_7 = VAR_3;

 VAR_9[0].addr = VAR_5->addr;
 VAR_9[0].len = sizeof(VAR_7);
 VAR_9[0].buf = &VAR_7;
 VAR_9[0].flags = 0;

 VAR_9[1].addr = VAR_5->addr;
 VAR_9[1].len = VAR_10;
 VAR_9[1].buf = VAR_8;
 VAR_9[1].flags = VAR_1;

 VAR_12 = FUNC_2(VAR_5->adapter, VAR_9, FUNC_0(VAR_9));
 if (VAR_12 < 0)
  return VAR_12;
 else if (VAR_12 != FUNC_0(VAR_9))
  return -VAR_0;

 *VAR_4 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  *VAR_4 <<= 8;
  *VAR_4 |= VAR_8[VAR_11];
 }

 return 0;
}
