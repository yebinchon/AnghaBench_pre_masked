
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {TYPE_1__* api; } ;
struct TYPE_2__ {double (* get_delay ) (struct ao*) ;} ;


 double FUNC_0 (struct ao*) ;

double FUNC_1(struct ao *VAR_0)
{
    return VAR_0->api->get_delay(VAR_0);
}
