
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
    for (VAR_3 = 0; VAR_3 < (VAR_2 & ~(OPJ_SIZE_T)3U); VAR_3 += 4U) {
        OPJ_UINT32 VAR_4 = (OPJ_UINT32)VAR_0[VAR_3 + 0];
        OPJ_UINT32 VAR_5 = (OPJ_UINT32)VAR_0[VAR_3 + 1];
        OPJ_UINT32 VAR_6 = (OPJ_UINT32)VAR_0[VAR_3 + 2];
        OPJ_UINT32 VAR_7 = (OPJ_UINT32)VAR_0[VAR_3 + 3];

        *VAR_1++ = (OPJ_BYTE)((VAR_4 << 6) | (VAR_5 << 4) | (VAR_6 << 2) | VAR_7);
    }

    if (VAR_2 & 3U) {
        OPJ_UINT32 VAR_8 = (OPJ_UINT32)VAR_0[VAR_3 + 0];
        OPJ_UINT32 VAR_9 = 0U;
        OPJ_UINT32 VAR_10 = 0U;
        VAR_2 = VAR_2 & 3U;

        if (VAR_2 > 1U) {
            VAR_9 = (OPJ_UINT32)VAR_0[VAR_3 + 1];
            if (VAR_2 > 2U) {
                VAR_10 = (OPJ_UINT32)VAR_0[VAR_3 + 2];
            }
        }
        *VAR_1++ = (OPJ_BYTE)((VAR_8 << 6) | (VAR_9 << 4) | (VAR_10 << 2));
    }
}
