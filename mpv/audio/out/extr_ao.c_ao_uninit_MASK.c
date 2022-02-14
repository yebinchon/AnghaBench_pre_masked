
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {TYPE_1__* api; } ;
struct TYPE_2__ {int (* uninit ) (struct ao*) ;} ;


 int FUNC_0 (struct ao*) ;
 int FUNC_1 (struct ao*) ;

void FUNC_2(struct ao *VAR_0)
{
    if (VAR_0)
        VAR_0->api->uninit(VAR_0);
    FUNC_1(VAR_0);
}
