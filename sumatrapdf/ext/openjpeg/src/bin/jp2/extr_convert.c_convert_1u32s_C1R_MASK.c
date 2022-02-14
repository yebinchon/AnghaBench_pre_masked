
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
    for (VAR_3 = 0; VAR_3 < (VAR_2 & ~(OPJ_SIZE_T)7U); VAR_3 += 8U) {
        OPJ_UINT32 VAR_4 = *VAR_0++;
        VAR_1[VAR_3 + 0] = (OPJ_INT32)(VAR_4 >> 7);
        VAR_1[VAR_3 + 1] = (OPJ_INT32)((VAR_4 >> 6) & 0x1U);
        VAR_1[VAR_3 + 2] = (OPJ_INT32)((VAR_4 >> 5) & 0x1U);
        VAR_1[VAR_3 + 3] = (OPJ_INT32)((VAR_4 >> 4) & 0x1U);
        VAR_1[VAR_3 + 4] = (OPJ_INT32)((VAR_4 >> 3) & 0x1U);
        VAR_1[VAR_3 + 5] = (OPJ_INT32)((VAR_4 >> 2) & 0x1U);
        VAR_1[VAR_3 + 6] = (OPJ_INT32)((VAR_4 >> 1) & 0x1U);
        VAR_1[VAR_3 + 7] = (OPJ_INT32)(VAR_4 & 0x1U);
    }
    if (VAR_2 & 7U) {
        OPJ_UINT32 VAR_5 = *VAR_0++;
        VAR_2 = VAR_2 & 7U;
        VAR_1[VAR_3 + 0] = (OPJ_INT32)(VAR_5 >> 7);

        if (VAR_2 > 1U) {
            VAR_1[VAR_3 + 1] = (OPJ_INT32)((VAR_5 >> 6) & 0x1U);
            if (VAR_2 > 2U) {
                VAR_1[VAR_3 + 2] = (OPJ_INT32)((VAR_5 >> 5) & 0x1U);
                if (VAR_2 > 3U) {
                    VAR_1[VAR_3 + 3] = (OPJ_INT32)((VAR_5 >> 4) & 0x1U);
                    if (VAR_2 > 4U) {
                        VAR_1[VAR_3 + 4] = (OPJ_INT32)((VAR_5 >> 3) & 0x1U);
                        if (VAR_2 > 5U) {
                            VAR_1[VAR_3 + 5] = (OPJ_INT32)((VAR_5 >> 2) & 0x1U);
                            if (VAR_2 > 6U) {
                                VAR_1[VAR_3 + 6] = (OPJ_INT32)((VAR_5 >> 1) & 0x1U);
                            }
                        }
                    }
                }
            }
        }
    }
}
