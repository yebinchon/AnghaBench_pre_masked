
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct i2c_msg {int len; unsigned int* buf; scalar_t__ flags; int addr; } ;
struct device {int dummy; } ;
struct i2c_client {int adapter; int addr; struct device dev; } ;
typedef int send_buf ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, unsigned int VAR_3,
       unsigned int *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_2;
 struct device *VAR_6 = &VAR_5->dev;
 __le32 VAR_7 = 0;
 struct i2c_msg VAR_8[2];
 unsigned int VAR_9;
 u8 VAR_10[2];
 int VAR_11;

 VAR_9 = FUNC_1(VAR_3);

 VAR_10[0] = VAR_3 >> 8;
 VAR_10[1] = VAR_3 & 0xff;

 VAR_8[0].addr = VAR_5->addr;
 VAR_8[0].len = sizeof(VAR_10);
 VAR_8[0].buf = VAR_10;
 VAR_8[0].flags = 0;

 VAR_8[1].addr = VAR_5->addr;
 VAR_8[1].len = VAR_9;
 VAR_8[1].buf = (u8 *)&VAR_7;
 VAR_8[1].flags = VAR_1;

 VAR_11 = FUNC_3(VAR_5->adapter, VAR_8, FUNC_0(VAR_8));
 if (VAR_11 != FUNC_0(VAR_8)) {
  FUNC_2(VAR_6, "Failed to read register, ret = %d\n", VAR_11);
  return VAR_11 < 0 ? VAR_11 : -VAR_0;
 }

 *VAR_4 = FUNC_4(VAR_7);
 return 0;
}
