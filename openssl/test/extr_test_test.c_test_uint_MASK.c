
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(void)
{
    if (!FUNC_0(1, FUNC_1(3u, 3u))
        | !FUNC_0(0, FUNC_1(3u, 5u))
        | !FUNC_0(1, FUNC_6(4u, 2u))
        | !FUNC_0(0, FUNC_6(6u, 6u))
        | !FUNC_0(1, FUNC_5(5u, 9u))
        | !FUNC_0(0, FUNC_5(9u, 5u))
        | !FUNC_0(1, FUNC_4(5u, 9u))
        | !FUNC_0(1, FUNC_4(7u, 7u))
        | !FUNC_0(0, FUNC_4(9u, 5u))
        | !FUNC_0(1, FUNC_3(11u, 1u))
        | !FUNC_0(0, FUNC_3(1u, 11u))
        | !FUNC_0(1, FUNC_2(11u, 1u))
        | !FUNC_0(1, FUNC_2(6u, 6u))
        | !FUNC_0(0, FUNC_2(1u, 11u)))
        goto err;
    return 1;

err:
    return 0;
}
