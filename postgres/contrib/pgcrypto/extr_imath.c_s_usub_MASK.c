
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_word ;
typedef scalar_t__ mp_size ;
typedef scalar_t__ mp_digit ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(mp_digit *VAR_1, mp_digit *VAR_2, mp_digit *VAR_3, mp_size VAR_4,
    mp_size VAR_5)
{
 mp_size VAR_6;
 mp_word VAR_7 = 0;


 FUNC_2(VAR_4 >= VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6, ++VAR_1, ++VAR_2, ++VAR_3)
 {
  VAR_7 = ((mp_word) VAR_0 + 1 +
    (mp_word) *VAR_1) -
   VAR_7 - (mp_word) *VAR_2;

  *VAR_3 = FUNC_0(VAR_7);
  VAR_7 = (FUNC_1(VAR_7) == 0);
 }


 for ( ; VAR_6 < VAR_4; ++VAR_6, ++VAR_1, ++VAR_3)
 {
  VAR_7 = ((mp_word) VAR_0 + 1 +
    (mp_word) *VAR_1) -
   VAR_7;

  *VAR_3 = FUNC_0(VAR_7);
  VAR_7 = (FUNC_1(VAR_7) == 0);
 }


 FUNC_2(VAR_7 == 0);
}
