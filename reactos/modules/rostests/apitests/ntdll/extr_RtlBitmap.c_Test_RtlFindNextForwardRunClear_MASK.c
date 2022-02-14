
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int RTL_BITMAP ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int,int) ;

void
FUNC_5(void)
{
    RTL_BITMAP VAR_0;
    ULONG *VAR_1;
    ULONG VAR_2;

    VAR_1 = FUNC_0(2 * sizeof(*VAR_1));
    VAR_1[0] = 0xF9F078B2;
    VAR_1[1] = 0x3F303F30;

    FUNC_3(&VAR_0, VAR_1, 0);
    FUNC_4(FUNC_2(&VAR_0, 0, &VAR_2), 0);
    FUNC_4(VAR_2, 0);
    FUNC_4(FUNC_2(&VAR_0, 1, &VAR_2), 0);
    FUNC_4(VAR_2, 1);

    VAR_2 = -1;
    FUNC_3(&VAR_0, VAR_1, 8);
    FUNC_4(FUNC_2(&VAR_0, 0, &VAR_2), 1);
    FUNC_4(VAR_2, 0);
    FUNC_4(FUNC_2(&VAR_0, 1, &VAR_2), 2);
    FUNC_4(VAR_2, 2);
    FUNC_4(FUNC_2(&VAR_0, 7, &VAR_2), 0);
    FUNC_4(VAR_2, 8);
    FUNC_4(FUNC_2(&VAR_0, 17, &VAR_2), 0);
    FUNC_4(VAR_2, 17);
    FUNC_4(FUNC_2(&VAR_0, 39, &VAR_2), 0);
    FUNC_4(VAR_2, 39);
    FUNC_1(VAR_1);
}
