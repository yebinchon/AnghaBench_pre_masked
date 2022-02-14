
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
    if (!FUNC_0(0, FUNC_2(0))
        | !FUNC_0(1, FUNC_2(1))
        | !FUNC_0(1, FUNC_1(0))
        | !FUNC_0(0, FUNC_1(1)))
        goto err;
    return 1;

err:
    return 0;
}
