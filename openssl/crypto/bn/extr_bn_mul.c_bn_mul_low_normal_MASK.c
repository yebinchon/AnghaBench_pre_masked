
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int *,int *,int,int ) ;

void FUNC_2(BN_ULONG *VAR_0, BN_ULONG *VAR_1, BN_ULONG *VAR_2, int VAR_3)
{
    FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2[0]);

    for (;;) {
        if (--VAR_3 <= 0)
            return;
        FUNC_0(&(VAR_0[1]), VAR_1, VAR_3, VAR_2[1]);
        if (--VAR_3 <= 0)
            return;
        FUNC_0(&(VAR_0[2]), VAR_1, VAR_3, VAR_2[2]);
        if (--VAR_3 <= 0)
            return;
        FUNC_0(&(VAR_0[3]), VAR_1, VAR_3, VAR_2[3]);
        if (--VAR_3 <= 0)
            return;
        FUNC_0(&(VAR_0[4]), VAR_1, VAR_3, VAR_2[4]);
        VAR_0 += 4;
        VAR_2 += 4;
    }
}
