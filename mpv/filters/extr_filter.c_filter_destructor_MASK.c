
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_filter_internal {int num_children; struct mp_filter** children; } ;
struct mp_filter {TYPE_3__* in; int * ppins; scalar_t__ num_pins; } ;
struct filter_runner {int num_pending; struct filter_runner* async_pending; int async_lock; struct mp_filter* root_filter; struct mp_filter** pending; } ;
struct TYPE_6__ {TYPE_2__* parent; TYPE_1__* info; struct filter_runner* runner; } ;
struct TYPE_5__ {struct mp_filter_internal* in; } ;
struct TYPE_4__ {int (* destroy ) (struct mp_filter*) ;} ;


 int FUNC_0 (struct mp_filter**,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct filter_runner*) ;
 int FUNC_3 (struct mp_filter*) ;
 int FUNC_4 (struct mp_filter*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mp_filter*) ;
 int FUNC_7 (struct filter_runner*) ;

__attribute__((used)) static void FUNC_8(void *VAR_0)
{
    struct mp_filter *VAR_1 = VAR_0;
    struct filter_runner *VAR_2 = VAR_1->in->runner;

    if (VAR_1->in->info->destroy)
        VAR_1->in->info->destroy(VAR_1);


    FUNC_3(VAR_1);

    while (VAR_1->num_pins)
        FUNC_4(VAR_1, VAR_1->ppins[0]);



    FUNC_2(VAR_2);

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_pending; VAR_3++) {
        if (VAR_2->pending[VAR_3] == VAR_1) {
            FUNC_0(VAR_2->pending, VAR_2->num_pending, VAR_3);
            break;
        }
    }

    if (VAR_1->in->parent) {
        struct mp_filter_internal *VAR_4 = VAR_1->in->parent->in;
        for (int VAR_5 = 0; VAR_5 < VAR_4->num_children; VAR_5++) {
            if (VAR_4->children[VAR_5] == VAR_1) {
                FUNC_0(VAR_4->children, VAR_4->num_children, VAR_5);
                break;
            }
        }
    }

    if (VAR_2->root_filter == VAR_1) {
        FUNC_1(!VAR_1->in->parent);
        FUNC_5(&VAR_2->async_lock);
        FUNC_7(VAR_2->async_pending);
        FUNC_7(VAR_2);
    }
}
