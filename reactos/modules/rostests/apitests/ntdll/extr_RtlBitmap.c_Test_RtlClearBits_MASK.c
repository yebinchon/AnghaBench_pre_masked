
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
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int,int) ;

void
FUNC_6(void)
{
    RTL_BITMAP VAR_0;
    ULONG *VAR_1;
    ULONG VAR_2 = 2 * sizeof(*VAR_1);

    VAR_1 = FUNC_0(VAR_2);
    FUNC_3(&VAR_0, VAR_1, 19);

    FUNC_4(VAR_1, 0xff, VAR_2);
    FUNC_2(&VAR_0, 0, 0);
    FUNC_5(VAR_1[0], 0xffffffff);
    FUNC_5(VAR_1[1], 0xffffffff);

    FUNC_4(VAR_1, 0xff, VAR_2);
    FUNC_2(&VAR_0, 0, 1);
    FUNC_5(VAR_1[0], 0xfffffffe);
    FUNC_5(VAR_1[1], 0xffffffff);

    FUNC_4(VAR_1, 0xff, VAR_2);
    FUNC_2(&VAR_0, 21, 1);
    FUNC_5(VAR_1[0], 0xffdfffff);
    FUNC_5(VAR_1[1], 0xffffffff);

    FUNC_4(VAR_1, 0xff, VAR_2);
    FUNC_2(&VAR_0, 7, 9);
    FUNC_5(VAR_1[0], 0xffff007f);
    FUNC_5(VAR_1[1], 0xffffffff);

    FUNC_4(VAR_1, 0xff, VAR_2);
    FUNC_2(&VAR_0, 13, 22);
    FUNC_5(VAR_1[0], 0x00001fff);
    FUNC_5(VAR_1[1], 0xfffffff8);

    FUNC_4(VAR_1, 0xff, VAR_2);
    FUNC_2(&VAR_0, 63, 1);
    FUNC_5(VAR_1[0], 0xffffffff);
    FUNC_5(VAR_1[1], 0x7fffffff);

    FUNC_4(VAR_1, 0xcc, VAR_2);
    FUNC_2(&VAR_0, 3, 6);
    FUNC_2(&VAR_0, 11, 5);
    FUNC_2(&VAR_0, 21, 7);
    FUNC_2(&VAR_0, 37, 4);
    FUNC_5(VAR_1[0], 0xc00c0404);
    FUNC_5(VAR_1[1], 0xcccccc0c);
    FUNC_1(VAR_1);
}
