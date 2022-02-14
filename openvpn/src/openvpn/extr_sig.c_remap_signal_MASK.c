
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ remap_sigusr1; } ;
struct context {TYPE_2__ options; TYPE_1__* sig; } ;
struct TYPE_3__ {scalar_t__ signal_received; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct context *VAR_1)
{
    if (VAR_1->sig->signal_received == VAR_0 && VAR_1->options.remap_sigusr1)
    {
        VAR_1->sig->signal_received = VAR_1->options.remap_sigusr1;
    }
}
