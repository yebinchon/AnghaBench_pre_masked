
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mp_int ;
struct TYPE_3__ {int* digits; } ;



__attribute__((used)) static inline bool
FUNC_0(mp_int VAR_0)
{
 return (VAR_0->digits[0] & 1) != 0;
}
