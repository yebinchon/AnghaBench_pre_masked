
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_word ;
typedef scalar_t__ mp_size ;
typedef void* mp_digit ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(mp_digit *VAR_0, mp_digit VAR_1, mp_digit *VAR_2, mp_size VAR_3)
{
 mp_word VAR_4 = 0;

 while (VAR_3 > 0)
 {
  VAR_4 = (mp_word) *VAR_0++ * (mp_word) VAR_1 + VAR_4;

  *VAR_2++ = FUNC_0(VAR_4);
  VAR_4 = FUNC_1(VAR_4);
  --VAR_3;
 }

 if (VAR_4)
  *VAR_2 = FUNC_0(VAR_4);
}
