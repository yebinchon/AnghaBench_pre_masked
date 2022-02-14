
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int high; } ;
typedef TYPE_1__ util_uint128_t ;
typedef int uint64_t ;



__attribute__((used)) static inline util_uint128_t FUNC_0(uint64_t VAR_0)
{
 util_uint128_t VAR_1;
 VAR_1.low = VAR_0 << 32;
 VAR_1.high = VAR_0 >> 32;
 return VAR_1;
}
