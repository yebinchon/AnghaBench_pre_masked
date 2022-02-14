
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef scalar_t__ errno_t ;
typedef int _TCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t,struct tm*) ;
 scalar_t__ FUNC_1 (struct tm*,int const*) ;

errno_t
FUNC_2(_TCHAR *VAR_1, size_t VAR_2, const time_t *VAR_3)
{
    struct tm VAR_4;

    if (FUNC_1(&VAR_4, VAR_3) == VAR_0)
    {
        return VAR_0;
    }
    return FUNC_0(VAR_1, VAR_2, &VAR_4);
}
