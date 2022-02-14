
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpz_t ;
typedef int mp_small ;
typedef int mp_result ;
typedef int mp_int ;
typedef int mp_digit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ,int *) ;

mp_result
FUNC_3(mp_int VAR_0, mp_small VAR_1, mp_int VAR_2)
{
 mpz_t VAR_3;
 mp_digit VAR_4[FUNC_0(VAR_1)];

 FUNC_2(&VAR_3, VAR_1, VAR_4);

 return FUNC_1(VAR_0, &VAR_3, VAR_2);
}
