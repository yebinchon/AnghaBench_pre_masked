
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_isdst; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 struct tm* FUNC_2 (scalar_t__*) ;

struct tm *
FUNC_3(const time_t *VAR_3)
{
    time_t VAR_4 = *VAR_3;
    struct tm * VAR_5;


    if (VAR_4 < 0)
    {
        return 0;
    }


    if (!VAR_2)
        FUNC_1();




    VAR_4 -= VAR_1;
    VAR_5 = FUNC_2(&VAR_4);

    return VAR_5;
}
