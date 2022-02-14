
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef unsigned int int32 ;
struct TYPE_3__ {scalar_t__ mantissa; scalar_t__ exponent; } ;
typedef TYPE_1__ floating_decimal_32 ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(const uint32 VAR_2,
     const uint32 VAR_3,
     floating_decimal_32 *VAR_4)
{
 const int32 VAR_5 = (int32) VAR_3 - VAR_0 - VAR_1;






 if (VAR_5 >= -VAR_1 && VAR_5 <= 0)
 {
  const uint32 VAR_6 = (1U << -VAR_5) - 1;
  const uint32 VAR_7 = VAR_2 & VAR_6;

  if (VAR_7 == 0)
  {






   const uint32 VAR_8 = (1U << VAR_1) | VAR_2;

   VAR_4->mantissa = VAR_8 >> -VAR_5;
   VAR_4->exponent = 0;
   return 1;
  }
 }

 return 0;
}
