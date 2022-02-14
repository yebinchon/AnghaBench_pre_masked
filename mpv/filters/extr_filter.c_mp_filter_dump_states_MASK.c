
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {int num_pins; TYPE_1__* in; int * ppins; int * pins; } ;
struct TYPE_2__ {int num_children; struct mp_filter** children; struct mp_filter* parent; } ;


 int FUNC_0 (struct mp_filter*,char*,int ,struct mp_filter*,int ,struct mp_filter*) ;
 int FUNC_1 (struct mp_filter*,int ) ;
 int FUNC_2 (struct mp_filter*) ;

void FUNC_3(struct mp_filter *VAR_0)
{
    FUNC_0(VAR_0, "%s[%p] (%s[%p])\n", FUNC_2(VAR_0), VAR_0,
            FUNC_2(VAR_0->in->parent), VAR_0->in->parent);
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_pins; VAR_1++) {
        FUNC_1(VAR_0, VAR_0->pins[VAR_1]);
        FUNC_1(VAR_0, VAR_0->ppins[VAR_1]);
    }

    for (int VAR_2 = 0; VAR_2 < VAR_0->in->num_children; VAR_2++)
        FUNC_3(VAR_0->in->children[VAR_2]);
}
