
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uint32_t ;
struct i2c_msg {int len; unsigned int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int send_buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_1 (unsigned int*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (unsigned int*) ;
 unsigned int* FUNC_4 (unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5,
  unsigned int VAR_6, long VAR_7[], size_t VAR_8)
{
 unsigned int VAR_9;
 uint8_t VAR_10;
 uint8_t *VAR_11, *VAR_12;
 struct i2c_msg VAR_13[2];
 unsigned int VAR_14 = VAR_8 * sizeof(uint32_t);
 int VAR_15;

 VAR_11 = FUNC_4(VAR_14, VAR_3 | VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = VAR_6;

 VAR_13[0].addr = VAR_5->addr;
 VAR_13[0].len = sizeof(VAR_10);
 VAR_13[0].buf = &VAR_10;
 VAR_13[0].flags = 0;

 VAR_13[1].addr = VAR_5->addr;
 VAR_13[1].len = VAR_14;
 VAR_13[1].buf = VAR_11;
 VAR_13[1].flags = VAR_4;

 VAR_15 = FUNC_2(VAR_5->adapter, VAR_13, FUNC_0(VAR_13));
 if (VAR_15 < 0)
  goto err_ret;
 else if (VAR_15 != FUNC_0(VAR_13)) {
  VAR_15 = -VAR_0;
  goto err_ret;
 }

 for (VAR_9 = 0, VAR_12 = VAR_11; VAR_9 < VAR_8; VAR_9++, VAR_12 += sizeof(uint32_t))
  VAR_7[VAR_9] = FUNC_1(VAR_12);

err_ret:
 FUNC_3(VAR_11);
 return VAR_15;
}
