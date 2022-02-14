
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_msg {int len; scalar_t__ flags; int * buf; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_2,
 unsigned int VAR_3, uint8_t VAR_4[], size_t VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2;
 struct i2c_msg VAR_7[2];
 uint8_t VAR_8[2];
 int VAR_9;

 FUNC_2(VAR_3, VAR_8);

 VAR_7[0].addr = VAR_6->addr;
 VAR_7[0].len = sizeof(VAR_8);
 VAR_7[0].buf = VAR_8;
 VAR_7[0].flags = 0;

 VAR_7[1].addr = VAR_6->addr;
 VAR_7[1].len = VAR_5;
 VAR_7[1].buf = VAR_4;
 VAR_7[1].flags = VAR_1;

 VAR_9 = FUNC_1(VAR_6->adapter, VAR_7, FUNC_0(VAR_7));
 if (VAR_9 < 0)
  return VAR_9;
 else if (VAR_9 != FUNC_0(VAR_7))
  return -VAR_0;
 return 0;
}
