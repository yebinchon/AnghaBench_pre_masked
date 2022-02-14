
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int,int ,int ,int *) ;

void FUNC_3(BN_ULONG *VAR_1, BN_ULONG *VAR_2, BN_ULONG *VAR_3, int VAR_4,
                          BN_ULONG *VAR_5)
{
    int VAR_6 = VAR_4 / 2;

    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6, 0, 0, &(VAR_5[0]));
    if (VAR_6 >= VAR_0) {
        FUNC_3(&(VAR_5[0]), &(VAR_2[0]), &(VAR_3[VAR_6]), VAR_6, &(VAR_5[VAR_4]));
        FUNC_0(&(VAR_1[VAR_6]), &(VAR_1[VAR_6]), &(VAR_5[0]), VAR_6);
        FUNC_3(&(VAR_5[0]), &(VAR_2[VAR_6]), &(VAR_3[0]), VAR_6, &(VAR_5[VAR_4]));
        FUNC_0(&(VAR_1[VAR_6]), &(VAR_1[VAR_6]), &(VAR_5[0]), VAR_6);
    } else {
        FUNC_1(&(VAR_5[0]), &(VAR_2[0]), &(VAR_3[VAR_6]), VAR_6);
        FUNC_1(&(VAR_5[VAR_6]), &(VAR_2[VAR_6]), &(VAR_3[0]), VAR_6);
        FUNC_0(&(VAR_1[VAR_6]), &(VAR_1[VAR_6]), &(VAR_5[0]), VAR_6);
        FUNC_0(&(VAR_1[VAR_6]), &(VAR_1[VAR_6]), &(VAR_5[VAR_6]), VAR_6);
    }
}
