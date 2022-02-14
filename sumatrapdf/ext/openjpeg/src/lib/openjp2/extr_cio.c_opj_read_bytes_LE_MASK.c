
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef int OPJ_BYTE ;


 int FUNC_0 (int) ;

void FUNC_1(const OPJ_BYTE * VAR_0, OPJ_UINT32 * VAR_1,
                       OPJ_UINT32 VAR_2)
{
    OPJ_BYTE * VAR_3 = ((OPJ_BYTE *) VAR_1) + VAR_2 - 1;
    OPJ_UINT32 VAR_4;

    FUNC_0(VAR_2 > 0 && VAR_2 <= sizeof(OPJ_UINT32));

    *VAR_1 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
        *(VAR_3--) = *(VAR_0++);
    }
}
