
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mp_int ;
struct TYPE_3__ {int used; int sign; scalar_t__* digits; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void
FUNC_1(mp_int VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));

 VAR_1->digits[0] = 0;
 VAR_1->used = 1;
 VAR_1->sign = VAR_0;
}
