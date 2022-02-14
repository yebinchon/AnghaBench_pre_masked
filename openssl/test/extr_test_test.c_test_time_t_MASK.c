
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(void)
{
    if (!FUNC_0(1, FUNC_1((time_t)10, (time_t)10))
        | !FUNC_0(0, FUNC_1((time_t)10, (time_t)12))
        | !FUNC_0(1, FUNC_6((time_t)10, (time_t)12))
        | !FUNC_0(0, FUNC_6((time_t)24, (time_t)24))
        | !FUNC_0(1, FUNC_5((time_t)30, (time_t)88))
        | !FUNC_0(0, FUNC_5((time_t)88, (time_t)30))
        | !FUNC_0(1, FUNC_4((time_t)30, (time_t)88))
        | !FUNC_0(1, FUNC_4((time_t)33, (time_t)33))
        | !FUNC_0(0, FUNC_4((time_t)88, (time_t)30))
        | !FUNC_0(1, FUNC_3((time_t)52, (time_t)33))
        | !FUNC_0(0, FUNC_3((time_t)33, (time_t)52))
        | !FUNC_0(1, FUNC_2((time_t)52, (time_t)33))
        | !FUNC_0(1, FUNC_2((time_t)38, (time_t)38))
        | !FUNC_0(0, FUNC_2((time_t)33, (time_t)52)))
        goto err;
    return 1;

err:
    return 0;
}
