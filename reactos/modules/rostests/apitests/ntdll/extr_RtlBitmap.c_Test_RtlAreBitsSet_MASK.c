
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int RTL_BITMAP ;


 int* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(void)
{
    RTL_BITMAP VAR_2;
    ULONG *VAR_3;

    VAR_3 = FUNC_0(2 * sizeof(*VAR_3));
    FUNC_3(&VAR_2, VAR_3, 19);
    VAR_3[0] = 0xff00ff00;
    VAR_3[1] = 0x3F303F30;

    FUNC_4(FUNC_2(&VAR_2, 0, 8), VAR_0);
    FUNC_4(FUNC_2(&VAR_2, 8, 8), VAR_1);
    FUNC_4(FUNC_2(&VAR_2, 7, 8), VAR_0);
    FUNC_4(FUNC_2(&VAR_2, 8, 9), VAR_0);
    FUNC_4(FUNC_2(&VAR_2, 24, 1), VAR_0);

    FUNC_3(&VAR_2, VAR_3, 31);
    FUNC_4(FUNC_2(&VAR_2, 24, 1), VAR_1);
    FUNC_4(FUNC_2(&VAR_2, 24, 7), VAR_1);
    FUNC_4(FUNC_2(&VAR_2, 24, 8), VAR_0);

    FUNC_3(&VAR_2, VAR_3, 64);
    FUNC_4(FUNC_2(&VAR_2, 60, 4), VAR_0);
    FUNC_1(VAR_3);
}
