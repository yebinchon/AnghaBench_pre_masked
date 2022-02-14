
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_UINT8 ;
typedef unsigned int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;



__attribute__((used)) static void FUNC_0(
    OPJ_UINT8 const* VAR_0, OPJ_INT32 VAR_1,
    OPJ_INT32* const* VAR_2, OPJ_INT32 const* VAR_3,
    OPJ_UINT8 const* const* VAR_4,
    OPJ_UINT32 VAR_5, OPJ_UINT32 VAR_6)
{
    OPJ_UINT32 VAR_7;
    OPJ_INT32* VAR_8 = VAR_2[0];
    OPJ_INT32* VAR_9 = VAR_2[1];
    OPJ_INT32* VAR_10 = VAR_2[2];
    OPJ_UINT8 const* VAR_11 = VAR_4[0];
    OPJ_UINT8 const* VAR_12 = VAR_4[1];
    OPJ_UINT8 const* VAR_13 = VAR_4[2];

    for (VAR_7 = VAR_6; VAR_7 != 0U; --VAR_7) {
        OPJ_UINT32 VAR_14;

        for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
            OPJ_UINT8 VAR_15 = VAR_0[VAR_14];
            VAR_8[VAR_14] = (OPJ_INT32)VAR_11[VAR_15];
            VAR_9[VAR_14] = (OPJ_INT32)VAR_12[VAR_15];
            VAR_10[VAR_14] = (OPJ_INT32)VAR_13[VAR_15];
        }
        VAR_0 += VAR_1;
        VAR_8 += VAR_3[0];
        VAR_9 += VAR_3[1];
        VAR_10 += VAR_3[2];
    }
}
