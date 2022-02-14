
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef int mp_result ;
typedef int * mp_int ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *) ;

mp_result
FUNC_12(mp_int VAR_3, mp_int VAR_4, mp_int VAR_5, mp_int VAR_6)
{
 FUNC_7(VAR_3 != ((void*)0) && VAR_4 != ((void*)0) && VAR_6 != ((void*)0) && VAR_5 != ((void*)0));


 if (FUNC_1(VAR_5) == 0)
  return VAR_2;
 if (FUNC_1(VAR_4) < 0)
  return VAR_1;

 mp_size VAR_7 = FUNC_4(VAR_5);

 FUNC_2(3);
 FUNC_5(FUNC_3(FUNC_6(0), 2 * VAR_7));
 FUNC_5(FUNC_3(FUNC_6(1), 2 * VAR_7));

 mp_int VAR_8;

 if (VAR_6 == VAR_4 || VAR_6 == VAR_5)
 {
  FUNC_5(FUNC_3(FUNC_6(2), 2 * VAR_7));
  VAR_8 = FUNC_6(2);
 }
 else
 {
  VAR_8 = VAR_6;
 }

 FUNC_5(FUNC_9(VAR_3, VAR_5, FUNC_6(0)));
 FUNC_5(FUNC_10(FUNC_6(1), VAR_5));
 FUNC_5(FUNC_11(FUNC_6(0), VAR_4, VAR_5, FUNC_6(1), VAR_8));
 FUNC_5(FUNC_8(VAR_8, VAR_6));

 FUNC_0();
 return VAR_0;
}
