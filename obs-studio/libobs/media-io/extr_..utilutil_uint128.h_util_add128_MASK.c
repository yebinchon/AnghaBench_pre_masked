
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int low; int high; void** i32; } ;
typedef TYPE_1__ util_uint128_t ;
typedef int uint64_t ;
typedef void* uint32_t ;



__attribute__((used)) static inline util_uint128_t FUNC_0(util_uint128_t VAR_0, util_uint128_t VAR_1)
{
 util_uint128_t VAR_2;
 uint64_t VAR_3;

 VAR_3 = (VAR_0.low & 0xFFFFFFFFULL) + (VAR_1.low & 0xFFFFFFFFULL);
 VAR_2.i32[0] = (uint32_t)(VAR_3 & 0xFFFFFFFFULL);
 VAR_3 >>= 32;

 VAR_3 += (VAR_0.low >> 32) + (VAR_1.low >> 32);
 VAR_2.i32[1] = (uint32_t)VAR_3;
 VAR_3 >>= 32;

 VAR_3 += (VAR_0.high & 0xFFFFFFFFULL) + (VAR_1.high & 0xFFFFFFFFULL);
 VAR_2.i32[2] = (uint32_t)(VAR_3 & 0xFFFFFFFFULL);
 VAR_3 >>= 32;

 VAR_3 += (VAR_0.high >> 32) + (VAR_1.high >> 32);
 VAR_2.i32[3] = (uint32_t)VAR_3;

 return VAR_2;
}
