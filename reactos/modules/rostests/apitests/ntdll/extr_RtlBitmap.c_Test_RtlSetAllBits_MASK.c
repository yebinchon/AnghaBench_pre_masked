
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int RTL_BITMAP ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int,int) ;

void
FUNC_6(void)
{
    RTL_BITMAP VAR_0;
    ULONG *VAR_1;
    ULONG VAR_2 = 2 * sizeof(*VAR_1);

    VAR_1 = FUNC_0(VAR_2);
    FUNC_2(&VAR_0, VAR_1, 19);
    FUNC_4(VAR_1, 0xcc, VAR_2);
    FUNC_3(&VAR_0);
    FUNC_5(VAR_1[0], 0xffffffff);
    FUNC_5(VAR_1[1], 0xcccccccc);

    FUNC_2(&VAR_0, VAR_1, 0);
    FUNC_4(VAR_1, 0xcc, VAR_2);
    FUNC_3(&VAR_0);
    FUNC_5(VAR_1[0], 0xcccccccc);
    FUNC_5(VAR_1[1], 0xcccccccc);

    FUNC_2(&VAR_0, VAR_1, 64);
    FUNC_4(VAR_1, 0xcc, VAR_2);
    FUNC_3(&VAR_0);
    FUNC_5(VAR_1[0], 0xffffffff);
    FUNC_5(VAR_1[1], 0xffffffff);
    FUNC_1(VAR_1);
}
