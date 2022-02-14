
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int locinfo; int have_locale; } ;
typedef TYPE_1__ thread_data_t ;
struct TYPE_5__ {int locinfo; } ;
typedef int MSVCRT_pthreadlocinfo ;


 TYPE_3__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;

MSVCRT_pthreadlocinfo FUNC_1(void) {
    thread_data_t *VAR_1 = FUNC_0();

    if(!VAR_1 || !VAR_1->have_locale)
        return VAR_0->locinfo;

    return VAR_1->locinfo;
}
