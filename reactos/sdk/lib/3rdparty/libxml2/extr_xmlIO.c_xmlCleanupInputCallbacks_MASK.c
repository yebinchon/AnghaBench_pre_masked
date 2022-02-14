
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * closecallback; int * readcallback; int * opencallback; int * matchcallback; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_0(void)
{
    int VAR_3;

    if (!VAR_0)
        return;

    for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--) {
        VAR_2[VAR_3].matchcallback = ((void*)0);
        VAR_2[VAR_3].opencallback = ((void*)0);
        VAR_2[VAR_3].readcallback = ((void*)0);
        VAR_2[VAR_3].closecallback = ((void*)0);
    }

    VAR_1 = 0;
    VAR_0 = 0;
}
