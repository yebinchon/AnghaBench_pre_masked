
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct TYPE_2__ {struct mp_filter* error_handler; } ;



void FUNC_0(struct mp_filter *VAR_0, struct mp_filter *VAR_1)
{
    VAR_0->in->error_handler = VAR_1;
}
