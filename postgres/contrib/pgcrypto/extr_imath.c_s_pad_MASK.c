
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mp_size ;
typedef TYPE_1__* mp_int ;
typedef scalar_t__ mp_digit ;
struct TYPE_5__ {scalar_t__ alloc; scalar_t__* digits; scalar_t__ single; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__* FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(mp_int VAR_0, mp_size VAR_1)
{
 if (FUNC_0(VAR_0) < VAR_1)
 {
  mp_size VAR_2 = FUNC_4(VAR_1);
  mp_digit *VAR_3;

  if (VAR_0->digits == &(VAR_0->single))
  {
   if ((VAR_3 = FUNC_2(VAR_2)) == ((void*)0))
    return 0;
   VAR_3[0] = VAR_0->single;
  }
  else if ((VAR_3 = FUNC_3(FUNC_1(VAR_0), FUNC_0(VAR_0), VAR_2)) == ((void*)0))
  {
   return 0;
  }

  VAR_0->digits = VAR_3;
  VAR_0->alloc = VAR_2;
 }

 return 1;
}
