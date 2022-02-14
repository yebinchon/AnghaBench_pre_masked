
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (size_t,size_t) ;
 int FUNC_6 (size_t,size_t) ;

__attribute__((used)) static int FUNC_7(void)
{
    if (!FUNC_0(1, FUNC_1((size_t)10, (size_t)10))
        | !FUNC_0(0, FUNC_1((size_t)10, (size_t)12))
        | !FUNC_0(1, FUNC_6((size_t)10, (size_t)12))
        | !FUNC_0(0, FUNC_6((size_t)24, (size_t)24))
        | !FUNC_0(1, FUNC_5((size_t)30, (size_t)88))
        | !FUNC_0(0, FUNC_5((size_t)88, (size_t)30))
        | !FUNC_0(1, FUNC_4((size_t)30, (size_t)88))
        | !FUNC_0(1, FUNC_4((size_t)33, (size_t)33))
        | !FUNC_0(0, FUNC_4((size_t)88, (size_t)30))
        | !FUNC_0(1, FUNC_3((size_t)52, (size_t)33))
        | !FUNC_0(0, FUNC_3((size_t)33, (size_t)52))
        | !FUNC_0(1, FUNC_2((size_t)52, (size_t)33))
        | !FUNC_0(1, FUNC_2((size_t)38, (size_t)38))
        | !FUNC_0(0, FUNC_2((size_t)33, (size_t)52)))
        goto err;
    return 1;

err:
    return 0;
}
