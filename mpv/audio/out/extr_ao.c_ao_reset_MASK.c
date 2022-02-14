
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {int events_; TYPE_1__* api; } ;
struct TYPE_2__ {int (* reset ) (struct ao*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (struct ao*) ;

void FUNC_2(struct ao *VAR_1)
{
    if (VAR_1->api->reset)
        VAR_1->api->reset(VAR_1);
    FUNC_0(&VAR_1->events_, ~(unsigned int)VAR_0);
}
