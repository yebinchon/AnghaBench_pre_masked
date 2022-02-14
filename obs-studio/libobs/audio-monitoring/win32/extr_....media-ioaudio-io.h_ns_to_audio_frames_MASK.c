
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int low; } ;
typedef TYPE_1__ util_uint128_t ;
typedef int uint64_t ;


 TYPE_1__ FUNC_0 (TYPE_1__,int) ;
 TYPE_1__ FUNC_1 (int ,size_t) ;

__attribute__((used)) static inline uint64_t FUNC_2(size_t VAR_0, uint64_t VAR_1)
{
 util_uint128_t VAR_2;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 VAR_2 = FUNC_0(VAR_2, 1000000000);
 return VAR_2.low;
}
