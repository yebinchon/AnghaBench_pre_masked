
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mp_size ;
typedef TYPE_1__* mp_int ;
typedef scalar_t__ mp_digit ;
struct TYPE_7__ {scalar_t__* digits; int sign; scalar_t__ used; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(mp_int VAR_2, mp_size VAR_3)
{
 mp_size VAR_4 = VAR_3 / VAR_0,
    VAR_5 = VAR_3 % VAR_0;
 mp_size VAR_6 = FUNC_2(VAR_2);

 if (VAR_4)
 {
  mp_size VAR_7;
  mp_digit *VAR_8,
       *VAR_9;

  if (VAR_4 >= VAR_6)
  {
   FUNC_3(VAR_2);
   return;
  }

  VAR_8 = FUNC_1(VAR_2);
  VAR_9 = VAR_8 + VAR_4;

  for (VAR_7 = VAR_4; VAR_7 < VAR_6; ++VAR_7)
  {
   *VAR_8++ = *VAR_9++;
  }

  VAR_2->used = VAR_6 - VAR_4;
 }

 if (VAR_5)
 {
  mp_digit VAR_10 = 0,
       *VAR_11,
     VAR_12;
  mp_size VAR_13 = VAR_0 - VAR_5;

  VAR_6 = FUNC_2(VAR_2);
  VAR_11 = FUNC_1(VAR_2) + VAR_6 - 1;

  for ( ; VAR_6 > 0; --VAR_6, --VAR_11)
  {
   VAR_12 = *VAR_11;

   *VAR_11 = (*VAR_11 >> VAR_5) | (VAR_10 << VAR_13);
   VAR_10 = VAR_12;
  }

  FUNC_0(VAR_2);
 }

 if (FUNC_2(VAR_2) == 1 && VAR_2->digits[0] == 0)
  VAR_2->sign = VAR_1;
}
