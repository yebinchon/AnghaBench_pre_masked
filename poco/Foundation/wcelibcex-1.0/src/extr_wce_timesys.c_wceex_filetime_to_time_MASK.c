
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;

time_t FUNC_3(const FILETIME * VAR_0)
{
    SYSTEMTIME VAR_1;
    FILETIME VAR_2;



    if (!VAR_0->dwLowDateTime && !VAR_0->dwHighDateTime)
    {
        return (time_t)-1;
    }


    if (!FUNC_0(VAR_0, &VAR_2) ||
        !FUNC_1(&VAR_2, &VAR_1))
    {
        return (time_t)-1;
    }

    return FUNC_2(&VAR_1);
}
