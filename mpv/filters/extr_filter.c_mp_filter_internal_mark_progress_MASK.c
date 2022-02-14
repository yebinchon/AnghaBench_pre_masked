
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct filter_runner {int filtering; } ;
struct TYPE_2__ {struct filter_runner* runner; } ;


 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mp_filter *VAR_0)
{
    struct filter_runner *VAR_1 = VAR_0->in->runner;
    FUNC_1(VAR_1->filtering);
    FUNC_0(VAR_0);
}
