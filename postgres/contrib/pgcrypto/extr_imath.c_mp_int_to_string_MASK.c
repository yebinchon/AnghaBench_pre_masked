
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpz_t ;
typedef scalar_t__ mp_size ;
typedef int mp_result ;
typedef int * mp_int ;
typedef int mp_digit ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int ,int) ;

mp_result
FUNC_7(mp_int VAR_5, mp_size VAR_6, char *VAR_7, int VAR_8)
{
 FUNC_2(VAR_5 != ((void*)0) && VAR_7 != ((void*)0) && VAR_8 >= 2);
 FUNC_2(VAR_6 >= VAR_1 && VAR_6 <= VAR_0);

 int VAR_9 = 0;

 if (FUNC_0(VAR_5) == 0)
 {
  *VAR_7++ = FUNC_6(0, 1);
 }
 else
 {
  mp_result VAR_10;
  mpz_t VAR_11;
  char *VAR_12,
       *VAR_13;

  if ((VAR_10 = FUNC_4(&VAR_11, VAR_5)) != VAR_3)
   return VAR_10;

  if (FUNC_1(VAR_5) == VAR_2)
  {
   *VAR_7++ = '-';
   --VAR_8;
  }
  VAR_12 = VAR_7;


  for ( ; VAR_8 > 0; --VAR_8)
  {
   mp_digit VAR_14;

   if ((VAR_9 = FUNC_0(&VAR_11)) == 0)
    break;

   VAR_14 = FUNC_5(&VAR_11, (mp_digit) VAR_6);
   *VAR_7++ = FUNC_6(VAR_14, 1);
  }
  VAR_13 = VAR_7 - 1;


  while (VAR_12 < VAR_13)
  {
   char VAR_15 = *VAR_12;

   *VAR_12++ = *VAR_13;
   *VAR_13-- = VAR_15;
  }

  FUNC_3(&VAR_11);
 }

 *VAR_7 = '\0';
 if (VAR_9 == 0)
 {
  return VAR_3;
 }
 else
 {
  return VAR_4;
 }
}
