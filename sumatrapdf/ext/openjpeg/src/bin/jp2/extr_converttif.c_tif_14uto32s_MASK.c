
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
        OPJ_UINT32 VAR_5 = *VAR_0++;
        OPJ_UINT32 VAR_6 = *VAR_0++;
        OPJ_UINT32 VAR_7 = *VAR_0++;
        OPJ_UINT32 VAR_8 = *VAR_0++;
        OPJ_UINT32 VAR_9 = *VAR_0++;
        OPJ_UINT32 VAR_10 = *VAR_0++;

        VAR_1[VAR_3 + 0] = (OPJ_INT32)((VAR_4 << 6) | (VAR_5 >> 2));
        VAR_1[VAR_3 + 1] = (OPJ_INT32)(((VAR_5 & 0x3U) << 12) | (VAR_6 << 4) | (VAR_7 >> 4));
        VAR_1[VAR_3 + 2] = (OPJ_INT32)(((VAR_7 & 0xFU) << 10) | (VAR_8 << 2) | (VAR_9 >> 6));
        VAR_1[VAR_3 + 3] = (OPJ_INT32)(((VAR_9 & 0x3FU) << 8) | VAR_10);

    }
    if (VAR_2 & 3U) {
        OPJ_UINT32 VAR_11 = *VAR_0++;
        OPJ_UINT32 VAR_12 = *VAR_0++;
        VAR_2 = VAR_2 & 3U;
        VAR_1[VAR_3 + 0] = (OPJ_INT32)((VAR_11 << 6) | (VAR_12 >> 2));

        if (VAR_2 > 1U) {
            OPJ_UINT32 VAR_13 = *VAR_0++;
            OPJ_UINT32 VAR_14 = *VAR_0++;
            VAR_1[VAR_3 + 1] = (OPJ_INT32)(((VAR_12 & 0x3U) << 12) | (VAR_13 << 4) | (VAR_14 >> 4));
            if (VAR_2 > 2U) {
                OPJ_UINT32 VAR_15 = *VAR_0++;
                OPJ_UINT32 VAR_16 = *VAR_0++;
                VAR_1[VAR_3 + 2] = (OPJ_INT32)(((VAR_14 & 0xFU) << 10) | (VAR_15 << 2) | (VAR_16 >> 6));
            }
        }
    }
}
