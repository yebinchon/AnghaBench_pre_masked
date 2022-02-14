
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ time_buffer; } ;
typedef TYPE_1__ thread_data_t ;
struct tm {int dummy; } ;
typedef int __time64_t ;


 struct tm* FUNC_0 (scalar_t__,int const,int ) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;

struct tm *
FUNC_3(const __time64_t * VAR_0)
{
    thread_data_t *VAR_1 = FUNC_2();


    if (!VAR_0 || *VAR_0 < 0)
    {
        return ((void*)0);
    }

    if(!VAR_1->time_buffer)
        VAR_1->time_buffer = FUNC_1(sizeof(struct tm));


    return FUNC_0(VAR_1->time_buffer, *VAR_0, 0);
}
