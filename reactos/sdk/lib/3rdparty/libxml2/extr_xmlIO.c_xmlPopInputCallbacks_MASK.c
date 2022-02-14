
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * closecallback; int * readcallback; int * opencallback; int * matchcallback; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(void)
{
    if (!VAR_0)
        return(-1);

    if (VAR_1 <= 0)
        return(-1);

    VAR_1--;
    VAR_2[VAR_1].matchcallback = ((void*)0);
    VAR_2[VAR_1].opencallback = ((void*)0);
    VAR_2[VAR_1].readcallback = ((void*)0);
    VAR_2[VAR_1].closecallback = ((void*)0);

    return(VAR_1);
}
