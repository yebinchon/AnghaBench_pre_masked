
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int mp_size ;
typedef scalar_t__ mp_sign ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef scalar_t__ mp_digit ;
struct TYPE_12__ {int used; scalar_t__ sign; scalar_t__* digits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ,int,int) ;

mp_result
FUNC_10(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6)
{
 FUNC_5(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

 mp_size VAR_7 = FUNC_4(VAR_4);
 mp_size VAR_8 = FUNC_4(VAR_5);
 mp_size VAR_9 = FUNC_1(VAR_7, VAR_8);

 if (FUNC_3(VAR_4) != FUNC_3(VAR_5))
 {

  if (!FUNC_6(VAR_6, VAR_9))
   return VAR_0;

  mp_digit VAR_10 = FUNC_7(FUNC_2(VAR_4), FUNC_2(VAR_5), FUNC_2(VAR_6), VAR_7, VAR_8);
  mp_size VAR_11 = VAR_9;

  if (VAR_10)
  {
   if (!FUNC_6(VAR_6, VAR_9 + 1))
    return VAR_0;

   VAR_6->digits[VAR_9] = VAR_10;
   ++VAR_11;
  }

  VAR_6->used = VAR_11;
  VAR_6->sign = VAR_4->sign;

 }
 else
 {

  if (!FUNC_6(VAR_6, VAR_9))
   return VAR_0;
  mp_int VAR_12,
     VAR_13;
  mp_sign VAR_14;

  int VAR_15 = FUNC_8(VAR_4, VAR_5);

  if (VAR_15 >= 0)
  {
   VAR_12 = VAR_4;
   VAR_13 = VAR_5;
   VAR_14 = VAR_3;
  }
  else
  {
   VAR_12 = VAR_5;
   VAR_13 = VAR_4;
   VAR_14 = VAR_1;
  }

  if (FUNC_3(VAR_4) == VAR_1 && VAR_15 != 0)
   VAR_14 = 1 - VAR_14;

  FUNC_9(FUNC_2(VAR_12), FUNC_2(VAR_13), FUNC_2(VAR_6), FUNC_4(VAR_12), FUNC_4(VAR_13));
  VAR_6->used = VAR_12->used;
  FUNC_0(VAR_6);

  VAR_6->sign = VAR_14;
 }

 return VAR_2;
}
