
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_pin {struct mp_pin* other; } ;
struct mp_filter {int num_pins; TYPE_2__* in; struct mp_pin** ppins; } ;
struct TYPE_4__ {int num_children; TYPE_1__* info; struct mp_filter** children; } ;
struct TYPE_3__ {int (* reset ) (struct mp_filter*) ;} ;


 int FUNC_0 (struct mp_pin*) ;
 int FUNC_1 (struct mp_filter*) ;

void FUNC_2(struct mp_filter *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->in->num_children; VAR_1++)
        FUNC_2(VAR_0->in->children[VAR_1]);

    for (int VAR_2 = 0; VAR_2 < VAR_0->num_pins; VAR_2++) {
        struct mp_pin *VAR_3 = VAR_0->ppins[VAR_2];
        FUNC_0(VAR_3);
        FUNC_0(VAR_3->other);
    }

    if (VAR_0->in->info->reset)
        VAR_0->in->info->reset(VAR_0);
}
