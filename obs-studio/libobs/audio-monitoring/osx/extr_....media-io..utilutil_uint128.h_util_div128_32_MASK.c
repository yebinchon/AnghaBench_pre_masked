
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* i32; } ;
typedef TYPE_1__ util_uint128_t ;
typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static inline util_uint128_t FUNC_0(util_uint128_t VAR_0, uint32_t VAR_1)
{
 util_uint128_t VAR_2;
 uint64_t VAR_3 = 0;

 for (int VAR_4 = 3; VAR_4 >= 0; VAR_4--) {
  VAR_3 = (VAR_3 << 32) | VAR_0.i32[VAR_4];
  if (VAR_3 < VAR_1) {
   VAR_2.i32[VAR_4] = 0;
   continue;
  }

  VAR_2.i32[VAR_4] = (uint32_t)(VAR_3 / VAR_1);
  VAR_3 = VAR_3 % VAR_1;
 }

 return VAR_2;
}
