
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct filter_runner {int external_pending; struct mp_filter* root_filter; int num_pending; int pending; } ;
struct TYPE_2__ {int pending; struct filter_runner* runner; } ;


 int FUNC_0 (struct filter_runner*,int ,int ,struct mp_filter*) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    struct filter_runner *VAR_1 = VAR_0->in->runner;

    if (VAR_0->in->pending)
        return;



    VAR_0->in->pending = 1;
    FUNC_0(VAR_1, VAR_1->pending, VAR_1->num_pending, VAR_0);


    if (VAR_0 == VAR_1->root_filter)
        VAR_1->external_pending = 1;
}
