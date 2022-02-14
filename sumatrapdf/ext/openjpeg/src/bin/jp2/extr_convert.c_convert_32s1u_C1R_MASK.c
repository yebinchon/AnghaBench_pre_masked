
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef unsigned int OPJ_SIZE_T ;
typedef scalar_t__ OPJ_INT32 ;
typedef void* OPJ_BYTE ;



__attribute__((used)) static void FUNC_0(const OPJ_INT32* VAR_0, OPJ_BYTE* VAR_1,
                              OPJ_SIZE_T VAR_2)
{
    OPJ_SIZE_T VAR_3;
    for (VAR_3 = 0; VAR_3 < (VAR_2 & ~(OPJ_SIZE_T)7U); VAR_3 += 8U) {
        OPJ_UINT32 VAR_4 = (OPJ_UINT32)VAR_0[VAR_3 + 0];
        OPJ_UINT32 VAR_5 = (OPJ_UINT32)VAR_0[VAR_3 + 1];
        OPJ_UINT32 VAR_6 = (OPJ_UINT32)VAR_0[VAR_3 + 2];
        OPJ_UINT32 VAR_7 = (OPJ_UINT32)VAR_0[VAR_3 + 3];
        OPJ_UINT32 VAR_8 = (OPJ_UINT32)VAR_0[VAR_3 + 4];
        OPJ_UINT32 VAR_9 = (OPJ_UINT32)VAR_0[VAR_3 + 5];
        OPJ_UINT32 VAR_10 = (OPJ_UINT32)VAR_0[VAR_3 + 6];
        OPJ_UINT32 VAR_11 = (OPJ_UINT32)VAR_0[VAR_3 + 7];

        *VAR_1++ = (OPJ_BYTE)((VAR_4 << 7) | (VAR_5 << 6) | (VAR_6 << 5) | (VAR_7 << 4) |
                             (VAR_8 << 3) | (VAR_9 << 2) | (VAR_10 << 1) | VAR_11);
    }

    if (VAR_2 & 7U) {
        OPJ_UINT32 VAR_12 = (OPJ_UINT32)VAR_0[VAR_3 + 0];
        OPJ_UINT32 VAR_13 = 0U;
        OPJ_UINT32 VAR_14 = 0U;
        OPJ_UINT32 VAR_15 = 0U;
        OPJ_UINT32 VAR_16 = 0U;
        OPJ_UINT32 VAR_17 = 0U;
        OPJ_UINT32 VAR_18 = 0U;
        VAR_2 = VAR_2 & 7U;

        if (VAR_2 > 1U) {
            VAR_13 = (OPJ_UINT32)VAR_0[VAR_3 + 1];
            if (VAR_2 > 2U) {
                VAR_14 = (OPJ_UINT32)VAR_0[VAR_3 + 2];
                if (VAR_2 > 3U) {
                    VAR_15 = (OPJ_UINT32)VAR_0[VAR_3 + 3];
                    if (VAR_2 > 4U) {
                        VAR_16 = (OPJ_UINT32)VAR_0[VAR_3 + 4];
                        if (VAR_2 > 5U) {
                            VAR_17 = (OPJ_UINT32)VAR_0[VAR_3 + 5];
                            if (VAR_2 > 6U) {
                                VAR_18 = (OPJ_UINT32)VAR_0[VAR_3 + 6];
                            }
                        }
                    }
                }
            }
        }
        *VAR_1++ = (OPJ_BYTE)((VAR_12 << 7) | (VAR_13 << 6) | (VAR_14 << 5) | (VAR_15 << 4) |
                             (VAR_16 << 3) | (VAR_17 << 2) | (VAR_18 << 1));
    }
}
