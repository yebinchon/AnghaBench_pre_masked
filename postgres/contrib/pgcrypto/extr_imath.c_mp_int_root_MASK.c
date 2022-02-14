
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


typedef int mp_small ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_24__ {void* sign; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int,TYPE_1__*) ;

mp_result
FUNC_14(mp_int VAR_4, mp_small VAR_5, mp_int VAR_6)
{
 FUNC_5(VAR_4 != ((void*)0) && VAR_6 != ((void*)0) && VAR_5 > 0);

 if (VAR_5 == 1)
 {
  return FUNC_7(VAR_4, VAR_6);
 }
 bool VAR_7 = 0;

 if (FUNC_2(VAR_4) == VAR_0)
 {
  if (VAR_5 % 2 == 0)
  {
   return VAR_2;

  }
  else
  {
   VAR_7 = 1;
  }
 }

 FUNC_1(5);
 FUNC_3(FUNC_7(VAR_4, FUNC_4(0)));
 FUNC_3(FUNC_7(VAR_4, FUNC_4(1)));
 FUNC_4(0)->sign = VAR_3;
 FUNC_4(1)->sign = VAR_3;

 for (;;)
 {
  FUNC_3(FUNC_9(FUNC_4(1), VAR_5, FUNC_4(2)));

  if (FUNC_6(FUNC_4(2), FUNC_4(0)) <= 0)
   break;

  FUNC_3(FUNC_12(FUNC_4(2), FUNC_4(0), FUNC_4(2)));
  FUNC_3(FUNC_9(FUNC_4(1), VAR_5 - 1, FUNC_4(3)));
  FUNC_3(FUNC_10(FUNC_4(3), VAR_5, FUNC_4(3)));
  FUNC_3(FUNC_8(FUNC_4(2), FUNC_4(3), FUNC_4(4), ((void*)0)));
  FUNC_3(FUNC_12(FUNC_4(1), FUNC_4(4), FUNC_4(4)));

  if (FUNC_6(FUNC_4(1), FUNC_4(4)) == 0)
  {
   FUNC_3(FUNC_13(FUNC_4(4), 1, FUNC_4(4)));
  }
  FUNC_3(FUNC_7(FUNC_4(4), FUNC_4(1)));
 }

 FUNC_3(FUNC_7(FUNC_4(1), VAR_6));


 if (VAR_7)
  (void) FUNC_11(VAR_6, VAR_6);

 FUNC_0();
 return VAR_1;
}
