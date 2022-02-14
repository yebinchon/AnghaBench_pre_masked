
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mp_int ;
struct TYPE_3__ {int used; scalar_t__* digits; scalar_t__ sign; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(mp_int VAR_1)
{
 if (VAR_1->used == 1 && VAR_1->digits[0] == 0)
  return 0;
 return (VAR_1->sign == VAR_0) ? -1 : 1;
}
