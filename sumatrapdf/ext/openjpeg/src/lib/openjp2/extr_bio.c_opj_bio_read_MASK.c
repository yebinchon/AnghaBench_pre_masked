
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_bio_t ;
typedef unsigned int OPJ_UINT32 ;
typedef unsigned int OPJ_INT32 ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *) ;

OPJ_UINT32 FUNC_2(opj_bio_t *VAR_0, OPJ_UINT32 VAR_1)
{
    OPJ_INT32 VAR_2;
    OPJ_UINT32 VAR_3;

    FUNC_0((VAR_1 > 0U) );






    VAR_3 = 0U;
    for (VAR_2 = (OPJ_INT32)VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
        VAR_3 |= FUNC_1(VAR_0) <<
             VAR_2;
    }
    return VAR_3;
}
