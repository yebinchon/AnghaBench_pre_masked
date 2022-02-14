
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int single; int * digits; } ;
typedef TYPE_1__ mpz_t ;
typedef TYPE_1__* mp_int ;


 int * FUNC_0 (TYPE_1__*) ;

void
FUNC_1(mp_int VAR_0, mp_int VAR_1)
{
 if (VAR_0 != VAR_1)
 {
  mpz_t VAR_2 = *VAR_0;

  *VAR_0 = *VAR_1;
  *VAR_1 = VAR_2;

  if (FUNC_0(VAR_0) == &(VAR_1->single))
   VAR_0->digits = &(VAR_0->single);
  if (FUNC_0(VAR_1) == &(VAR_0->single))
   VAR_1->digits = &(VAR_1->single);
 }
}
