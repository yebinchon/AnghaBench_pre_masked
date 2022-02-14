
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_FLOAT64 ;
typedef int OPJ_FLOAT32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1(OPJ_FLOAT64 * VAR_0,
                         OPJ_UINT32 VAR_1,
                         OPJ_FLOAT32 * VAR_2)
{
    OPJ_UINT32 VAR_3, VAR_4, VAR_5;
    OPJ_FLOAT32 VAR_6;
    OPJ_FLOAT64 * VAR_7 = (OPJ_FLOAT64 *) VAR_0;
    OPJ_FLOAT32 * VAR_8 = (OPJ_FLOAT32 *) VAR_2;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        VAR_7[VAR_3] = 0;
        VAR_5 = VAR_3;

        for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
            VAR_6 = VAR_8[VAR_5];
            VAR_5 += VAR_1;
            VAR_7[VAR_3] += VAR_6 * VAR_6;
        }
        VAR_7[VAR_3] = FUNC_0(VAR_7[VAR_3]);
    }
}
