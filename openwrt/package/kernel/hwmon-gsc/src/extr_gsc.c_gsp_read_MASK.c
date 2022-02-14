
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct i2c_client *VAR_2, u8 VAR_3)
{
 unsigned int VAR_4 = 0;
 if (VAR_3 == VAR_1 || VAR_3 > VAR_0)
 {
  VAR_4 |= FUNC_0(VAR_2, VAR_3);
  VAR_4 |= FUNC_0(VAR_2, VAR_3 + 1) << 8;
  return VAR_4;
 }
 else
 {
  VAR_4 |= FUNC_0(VAR_2, VAR_3);
  VAR_4 |= FUNC_0(VAR_2, VAR_3 + 1) << 8;
  VAR_4 |= FUNC_0(VAR_2, VAR_3 + 2) << 16;
  return VAR_4;
 }
}
