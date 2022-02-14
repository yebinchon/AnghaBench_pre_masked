
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef int OPJ_FLOAT64 ;


 int ** VAR_0 ;

OPJ_FLOAT64 FUNC_0(OPJ_UINT32 VAR_1, OPJ_UINT32 VAR_2)
{



    if (VAR_2 == 0 && VAR_1 >= 10) {
        VAR_1 = 9;
    } else if (VAR_2 > 0 && VAR_1 >= 9) {
        VAR_1 = 8;
    }
    return VAR_0[VAR_2][VAR_1];
}
