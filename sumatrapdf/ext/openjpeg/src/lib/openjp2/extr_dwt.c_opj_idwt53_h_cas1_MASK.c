
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef size_t OPJ_INT32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t*,size_t*,int) ;

__attribute__((used)) static void FUNC_2(OPJ_INT32* VAR_0,
                               const OPJ_INT32 VAR_1,
                               const OPJ_INT32 VAR_2,
                               OPJ_INT32* VAR_3)
{
    OPJ_INT32 VAR_4, VAR_5;
    const OPJ_INT32* VAR_6 = &VAR_3[VAR_1];
    const OPJ_INT32* VAR_7 = &VAR_3[0];
    OPJ_INT32 VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_0(VAR_2 > 2);





    VAR_8 = VAR_6[1];
    VAR_10 = VAR_7[0] - ((VAR_6[0] + VAR_8 + 2) >> 2);
    VAR_0[0] = VAR_6[0] + VAR_10;

    for (VAR_4 = 1, VAR_5 = 1; VAR_4 < (VAR_2 - 2 - !(VAR_2 & 1)); VAR_4 += 2, VAR_5++) {

        VAR_9 = VAR_6[VAR_5 + 1];

        VAR_11 = VAR_7[VAR_5] - ((VAR_8 + VAR_9 + 2) >> 2);
        VAR_0[VAR_4 ] = VAR_10;
        VAR_0[VAR_4 + 1] = VAR_8 + ((VAR_11 + VAR_10) >> 1);

        VAR_10 = VAR_11;
        VAR_8 = VAR_9;
    }

    VAR_0[VAR_4] = VAR_10;

    if (!(VAR_2 & 1)) {
        VAR_11 = VAR_7[VAR_2 / 2 - 1] - ((VAR_8 + 1) >> 1);
        VAR_0[VAR_2 - 2] = VAR_8 + ((VAR_11 + VAR_10) >> 1);
        VAR_0[VAR_2 - 1] = VAR_11;
    } else {
        VAR_0[VAR_2 - 1] = VAR_8 + VAR_10;
    }

    FUNC_1(VAR_3, VAR_0, (OPJ_UINT32)VAR_2 * sizeof(OPJ_INT32));
}
