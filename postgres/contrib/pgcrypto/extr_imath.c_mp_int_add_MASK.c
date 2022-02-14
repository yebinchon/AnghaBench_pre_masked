
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef scalar_t__ mp_digit ;
struct TYPE_13__ {int used; int sign; scalar_t__* digits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int ,int ,int ,int,int) ;

mp_result
FUNC_11(mp_int VAR_2, mp_int VAR_3, mp_int VAR_4)
{
 FUNC_5(VAR_2 != ((void*)0) && VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

 mp_size VAR_5 = FUNC_4(VAR_2);
 mp_size VAR_6 = FUNC_4(VAR_3);
 mp_size VAR_7 = FUNC_1(VAR_5, VAR_6);

 if (FUNC_3(VAR_2) == FUNC_3(VAR_3))
 {

  if (!FUNC_7(VAR_4, VAR_7))
   return VAR_0;

  mp_digit VAR_8 = FUNC_8(FUNC_2(VAR_2), FUNC_2(VAR_3), FUNC_2(VAR_4), VAR_5, VAR_6);
  mp_size VAR_9 = VAR_7;

  if (VAR_8)
  {
   if (!FUNC_7(VAR_4, VAR_7 + 1))
    return VAR_0;

   VAR_4->digits[VAR_7] = VAR_8;
   ++VAR_9;
  }

  VAR_4->used = VAR_9;
  VAR_4->sign = VAR_2->sign;

 }
 else
 {

  int VAR_10 = FUNC_9(VAR_2, VAR_3);





  mp_int VAR_11,
     VAR_12;

  if (VAR_10 == 0)
  {
   FUNC_6(VAR_4);
   return VAR_1;
  }
  else if (VAR_10 < 0)
  {
   VAR_11 = VAR_3;
   VAR_12 = VAR_2;
  }
  else
  {
   VAR_11 = VAR_2;
   VAR_12 = VAR_3;
  }

  if (!FUNC_7(VAR_4, FUNC_4(VAR_11)))
   return VAR_0;


  FUNC_10(FUNC_2(VAR_11), FUNC_2(VAR_12), FUNC_2(VAR_4), FUNC_4(VAR_11), FUNC_4(VAR_12));
  VAR_4->used = VAR_11->used;
  FUNC_0(VAR_4);


  VAR_4->sign = VAR_11->sign;
 }

 return VAR_1;
}
