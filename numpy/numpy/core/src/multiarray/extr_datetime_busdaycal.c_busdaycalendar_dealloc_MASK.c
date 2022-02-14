
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* tp_free ) (int *) ;} ;
struct TYPE_6__ {int * end; int * begin; } ;
struct TYPE_7__ {TYPE_1__ holidays; } ;
typedef int PyObject ;
typedef TYPE_2__ NpyBusDayCalendar ;


 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(NpyBusDayCalendar *VAR_0)
{

    if (VAR_0->holidays.begin != ((void*)0)) {
        FUNC_0(VAR_0->holidays.begin);
        VAR_0->holidays.begin = ((void*)0);
        VAR_0->holidays.end = ((void*)0);
    }

    FUNC_1(VAR_0)->tp_free((PyObject*)VAR_0);
}
