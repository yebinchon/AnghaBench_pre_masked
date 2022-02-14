
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct onyx {scalar_t__* cache; int i2c; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct onyx *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 s32 VAR_5;

 if (VAR_3 != VAR_1) {
  *VAR_4 = VAR_2->cache[VAR_3-VAR_0];
  return 0;
 }
 VAR_5 = FUNC_0(VAR_2->i2c, VAR_3);
 if (VAR_5 < 0) {
  *VAR_4 = 0;
  return -1;
 }
 *VAR_4 = (u8)VAR_5;
 VAR_2->cache[VAR_1-VAR_0] = *VAR_4;
 return 0;
}
