
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_word ;
typedef scalar_t__ mp_size ;
typedef scalar_t__ mp_digit ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(mp_digit *VAR_1, mp_digit *VAR_2, mp_size VAR_3)
{
 mp_size VAR_4,
    VAR_5;
 mp_word VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4, VAR_2 += 2, ++VAR_1)
 {
  mp_digit *VAR_7 = VAR_2,
       *VAR_8 = VAR_1;

  if (*VAR_1 == 0)
   continue;


  VAR_6 = (mp_word) *VAR_8 * (mp_word) *VAR_8 + (mp_word) *VAR_7;
  *VAR_7 = FUNC_2(VAR_6);
  VAR_6 = FUNC_3(VAR_6);
  ++VAR_8;
  ++VAR_7;

  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_3; ++VAR_5, ++VAR_8, ++VAR_7)
  {
   mp_word VAR_9 = (mp_word) *VAR_1 * (mp_word) *VAR_8;
   mp_word VAR_10 = VAR_6 + (mp_word) *VAR_7,
      VAR_11 = 0;


   if (FUNC_1(VAR_9))
    VAR_11 = 1;

   VAR_6 = VAR_9 + VAR_9;


   if (FUNC_0(VAR_6, VAR_10))
    VAR_11 = 1;

   VAR_6 += VAR_10;

   *VAR_7 = FUNC_2(VAR_6);
   VAR_6 = FUNC_3(VAR_6);
   if (VAR_11)
   {
    VAR_6 += VAR_0;
    ++VAR_6;
   }
  }

  VAR_6 = VAR_6 + *VAR_7;
  *VAR_7 = (mp_digit) VAR_6;
  while ((VAR_6 = FUNC_3(VAR_6)) != 0)
  {
   ++VAR_7;
   VAR_6 = VAR_6 + *VAR_7;
   *VAR_7 = FUNC_2(VAR_6);
  }

  FUNC_4(VAR_6 == 0);
 }
}
