
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_bio_t ;
typedef unsigned int OPJ_UINT32 ;
typedef unsigned int OPJ_INT32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;

void FUNC_2(opj_bio_t *VAR_0, OPJ_UINT32 VAR_1, OPJ_UINT32 VAR_2)
{
    OPJ_INT32 VAR_3;

    FUNC_0((VAR_2 > 0U) && (VAR_2 <= 32U));
    for (VAR_3 = (OPJ_INT32)VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
        FUNC_1(VAR_0, (VAR_1 >> VAR_3) & 1);
    }
}
