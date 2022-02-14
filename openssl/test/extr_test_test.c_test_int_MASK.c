
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(void)
{
    if (!FUNC_0(1, FUNC_1(1, 1))
        | !FUNC_0(0, FUNC_1(1, -1))
        | !FUNC_0(1, FUNC_6(1, 2))
        | !FUNC_0(0, FUNC_6(3, 3))
        | !FUNC_0(1, FUNC_5(4, 9))
        | !FUNC_0(0, FUNC_5(9, 4))
        | !FUNC_0(1, FUNC_4(4, 9))
        | !FUNC_0(1, FUNC_4(5, 5))
        | !FUNC_0(0, FUNC_4(9, 4))
        | !FUNC_0(1, FUNC_3(8, 5))
        | !FUNC_0(0, FUNC_3(5, 8))
        | !FUNC_0(1, FUNC_2(8, 5))
        | !FUNC_0(1, FUNC_2(6, 6))
        | !FUNC_0(0, FUNC_2(5, 8)))
        goto err;
    return 1;

err:
    return 0;
}
