
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_result ;
typedef int * mp_int ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int *,int ,int ,int *) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int *,int ,int *) ;

mp_result
FUNC_12(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6)
{
 FUNC_6(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

 if (FUNC_1(VAR_4) == 0 || FUNC_1(VAR_5) <= 0)
  return VAR_2;

 FUNC_2(2);

 FUNC_4(FUNC_9(VAR_4, VAR_5, FUNC_5(0), FUNC_5(1), ((void*)0)));

 if (FUNC_7(FUNC_5(0), 1) != 0)
 {
  FUNC_4(VAR_3);
 }


 FUNC_4(FUNC_10(FUNC_5(1), VAR_5, FUNC_5(1)));







 if (FUNC_3(VAR_4) == VAR_0)
 {
  FUNC_4(FUNC_11(VAR_5, FUNC_5(1), VAR_6));
 }
 else
 {
  FUNC_4(FUNC_8(FUNC_5(1), VAR_6));
 }

 FUNC_0();
 return VAR_1;
}
