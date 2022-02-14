
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef int OPJ_FLOAT64 ;
typedef int OPJ_BYTE ;



void FUNC_0(OPJ_BYTE * VAR_0, OPJ_FLOAT64 VAR_1)
{
    const OPJ_BYTE * VAR_2 = ((const OPJ_BYTE *) &VAR_1) + sizeof(
                                      OPJ_FLOAT64) - 1;
    OPJ_UINT32 VAR_3;
    for (VAR_3 = 0; VAR_3 < sizeof(OPJ_FLOAT64); ++VAR_3) {
        *(VAR_0++) = *(VAR_2--);
    }
}
