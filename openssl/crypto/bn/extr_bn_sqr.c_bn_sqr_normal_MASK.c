
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BN_ULONG ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__ const*,int,scalar_t__ const) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__ const*,int,scalar_t__ const) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;

void FUNC_4(BN_ULONG *VAR_0, const BN_ULONG *VAR_1, int VAR_2, BN_ULONG *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    const BN_ULONG *VAR_7;
    BN_ULONG *VAR_8;

    VAR_6 = VAR_2 * 2;
    VAR_7 = VAR_1;
    VAR_8 = VAR_0;
    VAR_8[0] = VAR_8[VAR_6 - 1] = 0;
    VAR_8++;
    VAR_5 = VAR_2;

    if (--VAR_5 > 0) {
        VAR_7++;
        VAR_8[VAR_5] = FUNC_2(VAR_8, VAR_7, VAR_5, VAR_7[-1]);
        VAR_8 += 2;
    }

    for (VAR_4 = VAR_2 - 2; VAR_4 > 0; VAR_4--) {
        VAR_5--;
        VAR_7++;
        VAR_8[VAR_5] = FUNC_1(VAR_8, VAR_7, VAR_5, VAR_7[-1]);
        VAR_8 += 2;
    }

    FUNC_0(VAR_0, VAR_0, VAR_0, VAR_6);



    FUNC_3(VAR_3, VAR_1, VAR_2);

    FUNC_0(VAR_0, VAR_0, VAR_3, VAR_6);
}
