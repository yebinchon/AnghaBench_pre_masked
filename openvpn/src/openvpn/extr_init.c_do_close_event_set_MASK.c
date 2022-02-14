
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_set_owned; int * event_set; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_0)
{
    if (VAR_0->c2.event_set && VAR_0->c2.event_set_owned)
    {
        FUNC_0(VAR_0->c2.event_set);
        VAR_0->c2.event_set = ((void*)0);
        VAR_0->c2.event_set_owned = 0;
    }
}
