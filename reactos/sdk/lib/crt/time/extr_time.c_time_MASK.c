
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int FILETIME ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

time_t FUNC_2(time_t* VAR_0)
{
    FILETIME VAR_1;
    time_t VAR_2 = 0;

    FUNC_1(&VAR_1);
    VAR_2 = (time_t)FUNC_0(&VAR_1, ((void*)0));

    if (VAR_0)
    {
        *VAR_0 = VAR_2;
    }
    return VAR_2;
}
