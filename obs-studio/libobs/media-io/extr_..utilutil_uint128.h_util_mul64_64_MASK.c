
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int low; scalar_t__ high; } ;
typedef TYPE_1__ util_uint128_t ;
typedef int uint64_t ;


 TYPE_1__ FUNC_0 (TYPE_1__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline util_uint128_t FUNC_3(uint64_t VAR_0, uint64_t VAR_1)
{
 util_uint128_t VAR_2;
 uint64_t VAR_3;

 VAR_3 = (VAR_0 & 0xFFFFFFFFULL) * (VAR_1 & 0xFFFFFFFFULL);
 VAR_2.low = VAR_3;
 VAR_2.high = 0;

 VAR_3 = (VAR_0 >> 32) * (VAR_1 & 0xFFFFFFFFULL);
 VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_3));

 VAR_3 = (VAR_0 & 0xFFFFFFFFULL) * (VAR_1 >> 32);
 VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_3));

 VAR_3 = (VAR_0 >> 32) * (VAR_1 >> 32);
 VAR_2 = FUNC_0(VAR_2, FUNC_2(VAR_3));

 return VAR_2;
}
