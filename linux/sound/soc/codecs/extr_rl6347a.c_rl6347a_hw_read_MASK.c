
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (struct i2c_client*,int ,unsigned int) ;

int FUNC_4(void *VAR_5, unsigned int VAR_6, unsigned int *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_5;
 struct i2c_msg VAR_9[2];
 int VAR_10;
 __be32 VAR_11, VAR_12 = 0x0;
 unsigned int VAR_13, VAR_14;


 if (VAR_6 <= 0xff) {
  FUNC_3(VAR_8, VAR_3, VAR_6);
  VAR_6 = VAR_4;
 }

 VAR_6 = VAR_6 | 0x80000;
 VAR_14 = (VAR_6 >> 8) & 0xfff;

 if (VAR_0 == (VAR_14 & 0xf00)) {
  VAR_13 = (VAR_6 >> 8) & 0xf;
  VAR_6 = (VAR_6 & ~0xf0f) | VAR_13;
 }
 VAR_11 = FUNC_1(VAR_6);


 VAR_9[0].addr = VAR_8->addr;
 VAR_9[0].flags = 0;
 VAR_9[0].len = 4;
 VAR_9[0].buf = (u8 *)&VAR_11;


 VAR_9[1].addr = VAR_8->addr;
 VAR_9[1].flags = VAR_2;
 VAR_9[1].len = 4;
 VAR_9[1].buf = (u8 *)&VAR_12;

 VAR_10 = FUNC_2(VAR_8->adapter, VAR_9, 2);
 if (VAR_10 < 0)
  return VAR_10;
 else if (VAR_10 != 2)
  return -VAR_1;

 *VAR_7 = FUNC_0(VAR_12);

 return 0;
}
