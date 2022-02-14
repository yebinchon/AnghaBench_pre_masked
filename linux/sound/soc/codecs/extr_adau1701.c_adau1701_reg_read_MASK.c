
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct i2c_msg {int len; unsigned int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; int dev; } ;
typedef int send_buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, unsigned int VAR_4,
        unsigned int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 uint8_t VAR_9[2], VAR_10[3];
 struct i2c_client *VAR_11 = VAR_3;
 struct i2c_msg VAR_12[2];

 VAR_8 = FUNC_1(&VAR_11->dev, VAR_4);
 if (VAR_8 == 0)
  return -VAR_0;

 VAR_9[0] = VAR_4 >> 8;
 VAR_9[1] = VAR_4 & 0xff;

 VAR_12[0].addr = VAR_11->addr;
 VAR_12[0].len = sizeof(VAR_9);
 VAR_12[0].buf = VAR_9;
 VAR_12[0].flags = 0;

 VAR_12[1].addr = VAR_11->addr;
 VAR_12[1].len = VAR_8;
 VAR_12[1].buf = VAR_10;
 VAR_12[1].flags = VAR_2;

 VAR_6 = FUNC_2(VAR_11->adapter, VAR_12, FUNC_0(VAR_12));
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6 != FUNC_0(VAR_12))
  return -VAR_1;

 *VAR_5 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  *VAR_5 <<= 8;
  *VAR_5 |= VAR_10[VAR_7];
 }

 return 0;
}
