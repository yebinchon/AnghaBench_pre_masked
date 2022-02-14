
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpz_t ;
typedef int mp_small ;
typedef int mp_result ;
typedef int mp_int ;
typedef int mp_digit ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;

mp_result
FUNC_8(mp_int VAR_1, mp_small VAR_2, mp_int VAR_3, mp_small *VAR_4)
{
 mpz_t VAR_5;
 mp_digit VAR_6[FUNC_2(VAR_2)];

 FUNC_7(&VAR_5, VAR_2, VAR_6);

 FUNC_1(1);
 FUNC_3(FUNC_5(VAR_1, &VAR_5, VAR_3, FUNC_4(0)));

 if (VAR_4)
  (void) FUNC_6(FUNC_4(0), VAR_4);

 FUNC_0();
 return VAR_0;
}
