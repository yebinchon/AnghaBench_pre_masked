
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_small ;
typedef int mp_result ;
typedef int * mp_int ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int ) ;

mp_result
FUNC_10(mp_int VAR_2, mp_small VAR_3, mp_int VAR_4)
{
 FUNC_4(VAR_4 != ((void*)0));
 if (VAR_3 < 0)
  return VAR_1;

 FUNC_1(1);
 FUNC_2(FUNC_6(VAR_2, FUNC_3(0)));

 (void) FUNC_8(VAR_4, 1);
 unsigned int VAR_5 = FUNC_5(VAR_3);

 while (VAR_5 != 0)
 {
  if (VAR_5 & 1)
  {
   FUNC_2(FUNC_7(VAR_4, FUNC_3(0), VAR_4));
  }

  VAR_5 >>= 1;
  if (VAR_5 == 0)
   break;

  FUNC_2(FUNC_9(FUNC_3(0), FUNC_3(0)));
 }

 FUNC_0();
 return VAR_0;
}
