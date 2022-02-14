
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_hotplug {struct ao_hotplug* ao; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* hotplug_uninit ) (struct ao_hotplug*) ;} ;


 int FUNC_0 (struct ao_hotplug*) ;
 int FUNC_1 (struct ao_hotplug*) ;

void FUNC_2(struct ao_hotplug *VAR_0)
{
    if (!VAR_0)
        return;
    if (VAR_0->ao && VAR_0->ao->driver->hotplug_uninit)
        VAR_0->ao->driver->hotplug_uninit(VAR_0->ao);
    FUNC_1(VAR_0->ao);
    FUNC_1(VAR_0);
}
