
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_result ;
typedef int mp_int ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *,int ) ;

mp_result
FUNC_8(mp_int VAR_1, mp_int VAR_2, mp_int VAR_3)
{
 FUNC_2(1);
 mp_int VAR_4 = (VAR_2 == VAR_3) ? FUNC_4(0) : VAR_3;

 FUNC_3(FUNC_7(VAR_1, VAR_2, ((void*)0), VAR_4));
 if (FUNC_1(VAR_4) < 0)
 {
  FUNC_3(FUNC_5(VAR_4, VAR_2, VAR_3));
 }
 else
 {
  FUNC_3(FUNC_6(VAR_4, VAR_3));
 }
 FUNC_0();
 return VAR_0;
}
