
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef int int32 ;
struct TYPE_3__ {scalar_t__ mantissa; scalar_t__ exponent; } ;
typedef TYPE_1__ floating_decimal_64 ;


 int VAR_0 ;
 int const VAR_1 ;
 int const FUNC_0 (int) ;

__attribute__((used)) static inline bool
FUNC_1(const uint64 VAR_2,
     const uint32 VAR_3,
     floating_decimal_64 *VAR_4)
{
 const int32 VAR_5 = (int32) VAR_3 - VAR_0 - VAR_1;






 if (VAR_5 >= -VAR_1 && VAR_5 <= 0)
 {
  const uint64 VAR_6 = (FUNC_0(1) << -VAR_5) - 1;
  const uint64 VAR_7 = VAR_2 & VAR_6;

  if (VAR_7 == 0)
  {






   const uint64 VAR_8 = (FUNC_0(1) << VAR_1) | VAR_2;

   VAR_4->mantissa = VAR_8 >> -VAR_5;
   VAR_4->exponent = 0;
   return 1;
  }
 }

 return 0;
}
