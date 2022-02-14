
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

const char * FUNC_2(const char * VAR_0)
{
    while(FUNC_0(*VAR_0) && FUNC_1(VAR_0[1])) {
        VAR_0 += 2;
        while (FUNC_1(*VAR_0)) {
            ++VAR_0;
        }
    }
    return VAR_0;
}
