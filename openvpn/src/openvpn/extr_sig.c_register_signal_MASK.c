
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct context {TYPE_1__* sig; } ;
struct TYPE_2__ {int signal_received; char const* signal_text; } ;


 int VAR_0 ;

void
FUNC_0(struct context *VAR_1, int VAR_2, const char *VAR_3)
{
    if (VAR_1->sig->signal_received != VAR_0)
    {
        VAR_1->sig->signal_received = VAR_2;
    }
    VAR_1->sig->signal_text = VAR_3;
}
