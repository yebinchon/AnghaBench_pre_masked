
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_UINT8 ;
typedef unsigned int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;



__attribute__((used)) static void FUNC_0(
    OPJ_UINT8 const* VAR_0, OPJ_INT32 VAR_1,
    OPJ_INT32* VAR_2, OPJ_INT32 VAR_3,
    OPJ_UINT8 const* VAR_4,
    OPJ_UINT32 VAR_5, OPJ_UINT32 VAR_6)
{
    OPJ_UINT32 VAR_7;

    for (VAR_7 = VAR_6; VAR_7 != 0U; --VAR_7) {
        OPJ_UINT32 VAR_8;

        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            VAR_2[VAR_8] = (OPJ_INT32)VAR_4[VAR_0[VAR_8]];
        }
        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
    }
}
