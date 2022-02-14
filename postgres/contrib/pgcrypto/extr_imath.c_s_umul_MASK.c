
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_word ;
typedef scalar_t__ mp_size ;
typedef scalar_t__ mp_digit ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(mp_digit *VAR_0, mp_digit *VAR_1, mp_digit *VAR_2, mp_size VAR_3,
    mp_size VAR_4)
{
 mp_size VAR_5,
    VAR_6;
 mp_word VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5, ++VAR_2, ++VAR_0)
 {
  mp_digit *VAR_8 = VAR_2;
  mp_digit *VAR_9 = VAR_1;

  if (*VAR_0 == 0)
   continue;

  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6, ++VAR_9, ++VAR_8)
  {
   VAR_7 = (mp_word) *VAR_0 * (mp_word) *VAR_9 + VAR_7 + (mp_word) *VAR_8;

   *VAR_8 = FUNC_0(VAR_7);
   VAR_7 = FUNC_1(VAR_7);
  }

  *VAR_8 = (mp_digit) VAR_7;
 }
}
