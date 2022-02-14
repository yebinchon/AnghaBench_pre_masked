
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_20__ {void* sign; } ;


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
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int) ;

mp_result
FUNC_15(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6)
{
 FUNC_6(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

 int VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = FUNC_1(VAR_5);

 if (VAR_7 == 0 && VAR_8 == 0)
 {
  return VAR_2;
 }
 else if (VAR_7 == 0)
 {
  return FUNC_7(VAR_5, VAR_6);
 }
 else if (VAR_8 == 0)
 {
  return FUNC_7(VAR_4, VAR_6);
 }

 FUNC_2(3);
 FUNC_4(FUNC_8(VAR_4, FUNC_5(0)));
 FUNC_4(FUNC_8(VAR_5, FUNC_5(1)));

 FUNC_5(0)->sign = VAR_3;
 FUNC_5(1)->sign = VAR_3;

 int VAR_9 = 0;

 {
  int VAR_10 = FUNC_12(FUNC_5(0));
  int VAR_11 = FUNC_12(FUNC_5(1));

  VAR_9 = FUNC_3(VAR_10, VAR_11);
  FUNC_13(FUNC_5(0), (mp_size) VAR_9);
  FUNC_13(FUNC_5(1), (mp_size) VAR_9);
 }

 if (FUNC_9(FUNC_5(0)))
 {
  FUNC_4(FUNC_10(FUNC_5(1), FUNC_5(2)));
 }
 else
 {
  FUNC_4(FUNC_8(FUNC_5(0), FUNC_5(2)));
 }

 for (;;)
 {
  FUNC_13(FUNC_5(2), FUNC_12(FUNC_5(2)));

  if (FUNC_1(FUNC_5(2)) > 0)
  {
   FUNC_4(FUNC_8(FUNC_5(2), FUNC_5(0)));
  }
  else
  {
   FUNC_4(FUNC_10(FUNC_5(2), FUNC_5(1)));
  }

  FUNC_4(FUNC_11(FUNC_5(0), FUNC_5(1), FUNC_5(2)));

  if (FUNC_1(FUNC_5(2)) == 0)
   break;
 }

 FUNC_4(FUNC_7(FUNC_5(0), VAR_6));
 if (!FUNC_14(VAR_6, (mp_size) VAR_9))
  FUNC_4(VAR_0);

 FUNC_0();
 return VAR_1;
}
