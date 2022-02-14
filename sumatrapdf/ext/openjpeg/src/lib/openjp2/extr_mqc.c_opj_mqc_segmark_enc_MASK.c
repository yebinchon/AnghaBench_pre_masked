
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_mqc_t ;
typedef int OPJ_UINT32 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(opj_mqc_t *VAR_0)
{
    OPJ_UINT32 VAR_1;
    FUNC_1(VAR_0, 18);

    for (VAR_1 = 1; VAR_1 < 5; VAR_1++) {
        FUNC_0(VAR_0, VAR_1 % 2);
    }
}
