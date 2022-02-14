
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef unsigned int OPJ_SIZE_T ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_BYTE ;



__attribute__((used)) static void FUNC_0(const OPJ_BYTE* VAR_0, OPJ_INT32* VAR_1,
                              OPJ_SIZE_T VAR_2)
{
    OPJ_SIZE_T VAR_3;
    for (VAR_3 = 0; VAR_3 < (VAR_2 & ~(OPJ_SIZE_T)3U); VAR_3 += 4U) {
        OPJ_UINT32 VAR_4 = *VAR_0++;
        VAR_1[VAR_3 + 0] = (OPJ_INT32)(VAR_4 >> 6);
        VAR_1[VAR_3 + 1] = (OPJ_INT32)((VAR_4 >> 4) & 0x3U);
        VAR_1[VAR_3 + 2] = (OPJ_INT32)((VAR_4 >> 2) & 0x3U);
        VAR_1[VAR_3 + 3] = (OPJ_INT32)(VAR_4 & 0x3U);
    }
    if (VAR_2 & 3U) {
        OPJ_UINT32 VAR_5 = *VAR_0++;
        VAR_2 = VAR_2 & 3U;
        VAR_1[VAR_3 + 0] = (OPJ_INT32)(VAR_5 >> 6);

        if (VAR_2 > 1U) {
            VAR_1[VAR_3 + 1] = (OPJ_INT32)((VAR_5 >> 4) & 0x3U);
            if (VAR_2 > 2U) {
                VAR_1[VAR_3 + 2] = (OPJ_INT32)((VAR_5 >> 2) & 0x3U);

            }
        }
    }
}
