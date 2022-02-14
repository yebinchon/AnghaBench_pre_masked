
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int __time64_t ;


 struct tm* FUNC_0 (int *) ;

struct tm *
FUNC_1(const time_t * VAR_0)
{
    __time64_t VAR_1;

    if (!VAR_0)
        return ((void*)0);
    VAR_1 = *VAR_0;
    return FUNC_0(&VAR_1);
}
