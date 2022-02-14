
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef int mp_result ;
typedef scalar_t__ mp_int ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

mp_result
FUNC_11(mp_int VAR_3, mp_int VAR_4, mp_int VAR_5, mp_int VAR_6,
      mp_int VAR_7)
{
 FUNC_7(VAR_3 && VAR_4 && VAR_5 && VAR_7);


 if (FUNC_1(VAR_5) == 0)
  return VAR_2;
 if (FUNC_1(VAR_4) < 0)
  return VAR_1;

 FUNC_2(2);
 mp_size VAR_8 = FUNC_4(VAR_5);

 FUNC_5(FUNC_3(FUNC_6(0), 2 * VAR_8));

 mp_int VAR_9;

 if (VAR_7 == VAR_4 || VAR_7 == VAR_5)
 {
  FUNC_5(FUNC_3(FUNC_6(1), 2 * VAR_8));
  VAR_9 = FUNC_6(1);
 }
 else
 {
  VAR_9 = VAR_7;
 }

 FUNC_5(FUNC_9(VAR_3, VAR_5, FUNC_6(0)));
 FUNC_5(FUNC_10(FUNC_6(0), VAR_4, VAR_5, VAR_6, VAR_9));
 FUNC_5(FUNC_8(VAR_9, VAR_7));

 FUNC_0();
 return VAR_0;
}
