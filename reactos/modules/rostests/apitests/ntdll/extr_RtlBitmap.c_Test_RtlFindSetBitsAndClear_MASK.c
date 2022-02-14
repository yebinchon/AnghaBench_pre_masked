
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
    VAR_1[0] = 0xF9F078B2;
    VAR_1[1] = 0x3F303F30;

    FUNC_3(&VAR_0, VAR_1, 0);
    FUNC_5(FUNC_2(&VAR_0, 0, 0), 0);
    FUNC_5(FUNC_2(&VAR_0, 0, 3), 0);
    FUNC_5(FUNC_2(&VAR_0, 1, 0), -1);
    FUNC_5(FUNC_2(&VAR_0, 1, 1), -1);
    FUNC_4(VAR_1[0], 0xF9F078B2);

    VAR_1[0] = 0xF9F078B2;
    FUNC_3(&VAR_0, VAR_1, 8);
    FUNC_5(FUNC_2(&VAR_0, 1, 0), 1);
    FUNC_4(VAR_1[0], 0xf9f078b0);
    FUNC_5(FUNC_2(&VAR_0, 1, 1), 4);
    FUNC_4(VAR_1[0], 0xf9f078a0);
    FUNC_5(FUNC_2(&VAR_0, 1, 2), 5);
    FUNC_4(VAR_1[0], 0xf9f07880);
    FUNC_5(FUNC_2(&VAR_0, 2, 0), -1);
    FUNC_4(VAR_1[0], 0xf9f07880);

    VAR_1[0] = 0xF9F078B2;
    FUNC_3(&VAR_0, VAR_1, 32);
    FUNC_5(FUNC_2(&VAR_0, 4, 0), 11);
    FUNC_4(VAR_1[0], 0xf9f000b2);
    FUNC_5(FUNC_2(&VAR_0, 5, 0), 20);
    FUNC_4(VAR_1[0], 0xf80000b2);
    FUNC_5(FUNC_2(&VAR_0, 4, 11), 27);
    FUNC_4(VAR_1[0], 0x800000b2);

    VAR_1[0] = 0xF9F078B2;
    FUNC_5(FUNC_2(&VAR_0, 4, 12), 20);
    FUNC_4(VAR_1[0], 0xf90078b2);
    FUNC_5(FUNC_2(&VAR_0, 2, 11), 11);
    FUNC_4(VAR_1[0], 0xf90060b2);
    FUNC_5(FUNC_2(&VAR_0, 2, 12), 13);
    FUNC_4(VAR_1[0], 0xf90000b2);
    FUNC_1(VAR_1);
}
