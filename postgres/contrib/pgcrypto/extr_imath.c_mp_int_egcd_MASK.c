
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_1__ ;


typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_28__ {void* sign; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,int) ;

mp_result
FUNC_19(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6, mp_int VAR_7, mp_int VAR_8)
{
 FUNC_6(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0) && (VAR_7 != ((void*)0) || VAR_8 != ((void*)0)));

 mp_result VAR_9 = VAR_1;
 int VAR_10 = FUNC_1(VAR_4);
 int VAR_11 = FUNC_1(VAR_5);

 if (VAR_10 == 0 && VAR_11 == 0)
 {
  return VAR_2;
 }
 else if (VAR_10 == 0)
 {
  if ((VAR_9 = FUNC_7(VAR_5, VAR_6)) != VAR_1)
   return VAR_9;
  FUNC_15(VAR_7);
  (void) FUNC_13(VAR_8, 1);
  return VAR_1;
 }
 else if (VAR_11 == 0)
 {
  if ((VAR_9 = FUNC_7(VAR_4, VAR_6)) != VAR_1)
   return VAR_9;
  (void) FUNC_13(VAR_7, 1);
  FUNC_15(VAR_8);
  return VAR_1;
 }




 FUNC_2(8);
 FUNC_4(FUNC_13(FUNC_5(0), 1));
 FUNC_4(FUNC_13(FUNC_5(3), 1));
 FUNC_4(FUNC_10(VAR_4, FUNC_5(4)));
 FUNC_4(FUNC_10(VAR_5, FUNC_5(5)));


 FUNC_5(4)->sign = VAR_3;
 FUNC_5(5)->sign = VAR_3;

 int VAR_12 = 0;

 {
  int VAR_13 = FUNC_16(FUNC_5(4)),
     VAR_14 = FUNC_16(FUNC_5(5));

  VAR_12 = FUNC_3(VAR_13, VAR_14);
  FUNC_17(FUNC_5(4), VAR_12);
  FUNC_17(FUNC_5(5), VAR_12);
 }

 FUNC_4(FUNC_10(FUNC_5(4), FUNC_5(6)));
 FUNC_4(FUNC_10(FUNC_5(5), FUNC_5(7)));

 for (;;)
 {
  while (FUNC_11(FUNC_5(4)))
  {
   FUNC_17(FUNC_5(4), 1);

   if (FUNC_12(FUNC_5(0)) || FUNC_12(FUNC_5(1)))
   {
    FUNC_4(FUNC_8(FUNC_5(0), FUNC_5(7), FUNC_5(0)));
    FUNC_4(FUNC_14(FUNC_5(1), FUNC_5(6), FUNC_5(1)));
   }

   FUNC_17(FUNC_5(0), 1);
   FUNC_17(FUNC_5(1), 1);
  }

  while (FUNC_11(FUNC_5(5)))
  {
   FUNC_17(FUNC_5(5), 1);

   if (FUNC_12(FUNC_5(2)) || FUNC_12(FUNC_5(3)))
   {
    FUNC_4(FUNC_8(FUNC_5(2), FUNC_5(7), FUNC_5(2)));
    FUNC_4(FUNC_14(FUNC_5(3), FUNC_5(6), FUNC_5(3)));
   }

   FUNC_17(FUNC_5(2), 1);
   FUNC_17(FUNC_5(3), 1);
  }

  if (FUNC_9(FUNC_5(4), FUNC_5(5)) >= 0)
  {
   FUNC_4(FUNC_14(FUNC_5(4), FUNC_5(5), FUNC_5(4)));
   FUNC_4(FUNC_14(FUNC_5(0), FUNC_5(2), FUNC_5(0)));
   FUNC_4(FUNC_14(FUNC_5(1), FUNC_5(3), FUNC_5(1)));
  }
  else
  {
   FUNC_4(FUNC_14(FUNC_5(5), FUNC_5(4), FUNC_5(5)));
   FUNC_4(FUNC_14(FUNC_5(2), FUNC_5(0), FUNC_5(2)));
   FUNC_4(FUNC_14(FUNC_5(3), FUNC_5(1), FUNC_5(3)));
  }

  if (FUNC_1(FUNC_5(4)) == 0)
  {
   if (VAR_7)
    FUNC_4(FUNC_10(FUNC_5(2), VAR_7));
   if (VAR_8)
    FUNC_4(FUNC_10(FUNC_5(3), VAR_8));
   if (VAR_6)
   {
    if (!FUNC_18(FUNC_5(5), VAR_12))
    {
     FUNC_4(VAR_0);
    }
    FUNC_4(FUNC_10(FUNC_5(5), VAR_6));
   }

   break;
  }
 }

 FUNC_0();
 return VAR_1;
}
