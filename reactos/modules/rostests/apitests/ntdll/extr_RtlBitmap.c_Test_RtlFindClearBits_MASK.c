
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int RTL_BITMAP ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(void)
{
    RTL_BITMAP VAR_0;
    ULONG *VAR_1;

    VAR_1 = FUNC_0(2 * sizeof(*VAR_1));
    VAR_1[0] = 0x060F874D;
    VAR_1[1] = 0x3F303F30;

    FUNC_3(&VAR_0, VAR_1, 0);
    FUNC_4(FUNC_2(&VAR_0, 0, 0), 0);
    FUNC_4(FUNC_2(&VAR_0, 0, 3), 0);
    FUNC_4(FUNC_2(&VAR_0, 1, 0), -1);
    FUNC_4(FUNC_2(&VAR_0, 1, 1), -1);

    FUNC_3(&VAR_0, VAR_1, 8);
    FUNC_4(FUNC_2(&VAR_0, 0, 3), 0);
    FUNC_4(FUNC_2(&VAR_0, 1, 0), 1);
    FUNC_4(FUNC_2(&VAR_0, 1, 1), 1);
    FUNC_4(FUNC_2(&VAR_0, 1, 2), 4);

    FUNC_4(FUNC_2(&VAR_0, 2, 0), 4);
    FUNC_4(FUNC_2(&VAR_0, 3, 0), -1);

    FUNC_3(&VAR_0, VAR_1, 32);
    FUNC_4(FUNC_2(&VAR_0, 0, 3), 0);
    FUNC_4(FUNC_2(&VAR_0, 0, 21), 16);
    FUNC_4(FUNC_2(&VAR_0, 0, 12), 8);
    FUNC_4(FUNC_2(&VAR_0, 0, 31), 24);
    FUNC_4(FUNC_2(&VAR_0, 0, 32), 0);
    FUNC_4(FUNC_2(&VAR_0, 0, 39), 0);
    FUNC_4(FUNC_2(&VAR_0, 4, 0), 11);
    FUNC_4(FUNC_2(&VAR_0, 5, 0), 20);
    FUNC_4(FUNC_2(&VAR_0, 4, 11), 11);
    FUNC_4(FUNC_2(&VAR_0, 4, 12), 20);
    FUNC_4(FUNC_2(&VAR_0, 2, 11), 11);
    FUNC_4(FUNC_2(&VAR_0, 2, 12), 12);
    FUNC_4(FUNC_2(&VAR_0, 1, 32), 1);
    FUNC_4(FUNC_2(&VAR_0, 4, 32), 11);
    FUNC_4(FUNC_2(&VAR_0, 5, 32), 20);

    FUNC_3(&VAR_0, VAR_1, 64);
    FUNC_4(FUNC_2(&VAR_0, 5, 64), 20);
    FUNC_4(FUNC_2(&VAR_0, 9, 28), 27);
    FUNC_4(FUNC_2(&VAR_0, 10, 0), -1);
    VAR_1[1] = 0xFF303F30;
    FUNC_4(FUNC_2(&VAR_0, 1, 56), 1);
    FUNC_1(VAR_1);
}
