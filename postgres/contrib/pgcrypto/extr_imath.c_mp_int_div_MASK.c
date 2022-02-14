
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int mp_size ;
typedef scalar_t__ mp_sign ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_19__ {int* digits; void* sign; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*) ;

mp_result
FUNC_14(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6, mp_int VAR_7)
{
 FUNC_6(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != VAR_7);

 int VAR_8;
 mp_result VAR_9 = VAR_1;
 mp_int VAR_10,
    VAR_11;
 mp_sign VAR_12 = FUNC_3(VAR_4);
 mp_sign VAR_13 = FUNC_3(VAR_5);

 if (FUNC_1(VAR_5) == 0)
 {
  return VAR_2;
 }
 else if ((VAR_8 = FUNC_12(VAR_4, VAR_5)) < 0)
 {



  if (VAR_7 && (VAR_9 = FUNC_7(VAR_4, VAR_7)) != VAR_1)
   return VAR_9;

  if (VAR_6)
   FUNC_8(VAR_6);

  return VAR_1;
 }
 else if (VAR_8 == 0)
 {



  if (VAR_7)
   FUNC_8(VAR_7);

  if (VAR_6)
  {
   FUNC_8(VAR_6);
   VAR_6->digits[0] = 1;

   if (VAR_12 != VAR_13)
    VAR_6->sign = VAR_0;
  }

  return VAR_1;
 }






 FUNC_2(2);
 int VAR_14;

 if ((VAR_14 = FUNC_9(VAR_5)) < 0)
 {
  if (VAR_6 && VAR_5 != VAR_6)
  {
   FUNC_4(FUNC_7(VAR_4, VAR_6));
   VAR_10 = VAR_6;
  }
  else
  {
   FUNC_4(FUNC_7(VAR_4, FUNC_5(0)));
   VAR_10 = FUNC_5(0);
  }

  if (VAR_7 && VAR_4 != VAR_7)
  {
   FUNC_4(FUNC_7(VAR_5, VAR_7));
   VAR_11 = VAR_7;
  }
  else
  {
   FUNC_4(FUNC_7(VAR_5, FUNC_5(1)));
   VAR_11 = FUNC_5(1);
  }

  FUNC_4(FUNC_13(VAR_10, VAR_11));
 }
 else
 {
  if (VAR_6)
   FUNC_4(FUNC_7(VAR_4, VAR_6));
  if (VAR_7)
   FUNC_4(FUNC_7(VAR_4, VAR_7));

  if (VAR_6)
   FUNC_10(VAR_6, (mp_size) VAR_14);
  VAR_10 = VAR_6;
  if (VAR_7)
   FUNC_11(VAR_7, (mp_size) VAR_14);
  VAR_11 = VAR_7;
 }


 if (VAR_11)
 {
  VAR_11->sign = VAR_12;
  if (FUNC_1(VAR_11) == 0)
   VAR_11->sign = VAR_3;
 }
 if (VAR_10)
 {
  VAR_10->sign = (VAR_12 == VAR_13) ? VAR_3 : VAR_0;
  if (FUNC_1(VAR_10) == 0)
   VAR_10->sign = VAR_3;
 }

 if (VAR_6)
  FUNC_4(FUNC_7(VAR_10, VAR_6));
 if (VAR_7)
  FUNC_4(FUNC_7(VAR_11, VAR_7));
 FUNC_0();
 return VAR_9;
}
