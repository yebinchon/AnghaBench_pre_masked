
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
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(void)
{
    RTL_BITMAP VAR_0;
    ULONG *VAR_1;

    VAR_1 = FUNC_0(2 * sizeof(*VAR_1));
    VAR_1[0] = 0x060F874D;
    VAR_1[1] = 0x3F303F30;

    FUNC_3(&VAR_0, VAR_1, 0);
    FUNC_5(FUNC_2(&VAR_0, 0, 0), 0);
    FUNC_5(FUNC_2(&VAR_0, 0, 3), 0);
    FUNC_5(FUNC_2(&VAR_0, 1, 0), -1);
    FUNC_5(FUNC_2(&VAR_0, 1, 1), -1);
    FUNC_4(VAR_1[0], 0x060F874D);

    VAR_1[0] = 0x060F874D;
    FUNC_3(&VAR_0, VAR_1, 8);
    FUNC_5(FUNC_2(&VAR_0, 1, 0), 1);
    FUNC_4(VAR_1[0], 0x60f874f);
    FUNC_5(FUNC_2(&VAR_0, 1, 1), 4);
    FUNC_4(VAR_1[0], 0x60f875f);
    FUNC_5(FUNC_2(&VAR_0, 1, 2), 5);
    FUNC_4(VAR_1[0], 0x60f877f);
    FUNC_5(FUNC_2(&VAR_0, 2, 0), -1);
    FUNC_4(VAR_1[0], 0x60f877f);

    VAR_1[0] = 0x060F874D;
    FUNC_3(&VAR_0, VAR_1, 32);
    FUNC_5(FUNC_2(&VAR_0, 4, 0), 11);
    FUNC_4(VAR_1[0], 0x60fff4d);
    FUNC_5(FUNC_2(&VAR_0, 5, 0), 20);
    FUNC_4(VAR_1[0], 0x7ffff4d);
    FUNC_5(FUNC_2(&VAR_0, 4, 11), 27);
    FUNC_4(VAR_1[0], 0x7fffff4d);

    VAR_1[0] = 0x060F874D;
    FUNC_5(FUNC_2(&VAR_0, 4, 12), 20);
    FUNC_4(VAR_1[0], 0x6ff874d);
    FUNC_5(FUNC_2(&VAR_0, 2, 11), 11);
    FUNC_4(VAR_1[0], 0x6ff9f4d);
    FUNC_5(FUNC_2(&VAR_0, 2, 12), 13);
    FUNC_4(VAR_1[0], 0x6ffff4d);
    FUNC_1(VAR_1);
}
