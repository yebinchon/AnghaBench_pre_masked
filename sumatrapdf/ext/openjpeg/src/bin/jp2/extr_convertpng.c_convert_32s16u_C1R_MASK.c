
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef size_t OPJ_SIZE_T ;
typedef int OPJ_INT32 ;
typedef void* OPJ_BYTE ;



__attribute__((used)) static void FUNC_0(const OPJ_INT32* VAR_0, OPJ_BYTE* VAR_1,
                               OPJ_SIZE_T VAR_2)
{
    OPJ_SIZE_T VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        OPJ_UINT32 VAR_4 = (OPJ_UINT32)VAR_0[VAR_3];
        *VAR_1++ = (OPJ_BYTE)(VAR_4 >> 8);
        *VAR_1++ = (OPJ_BYTE)VAR_4;
    }
}
