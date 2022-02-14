
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int _TCHAR ;


 int * FUNC_0 (struct tm*) ;
 struct tm* FUNC_1 (int const*) ;

_TCHAR *
FUNC_2(const time_t *VAR_0)
{
    struct tm *VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1)
    {
        return 0;
    }
    return FUNC_0(VAR_1);
}
