
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clock_t ;
typedef int __int64 ;
typedef int SYSTEMTIME ;
typedef int FILETIME ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

clock_t FUNC_2()
{
    __int64 VAR_0;
    SYSTEMTIME VAR_1;
    FILETIME VAR_2;

    FUNC_0(&VAR_1);

    if (FUNC_1(&VAR_1, &VAR_2))
    {
        VAR_0 = *(__int64*)&VAR_2;
    }
    else
    {



        VAR_0 = -1;
    }

   return (clock_t)VAR_0;
}
