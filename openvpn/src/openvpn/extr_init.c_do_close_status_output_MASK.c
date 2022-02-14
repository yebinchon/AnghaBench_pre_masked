
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status_output_owned; int * status_output; } ;
struct context {TYPE_2__ c1; TYPE_1__* sig; } ;
struct TYPE_3__ {scalar_t__ signal_received; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_1)
{
    if (!(VAR_1->sig->signal_received == VAR_0))
    {
        if (VAR_1->c1.status_output_owned && VAR_1->c1.status_output)
        {
            FUNC_0(VAR_1->c1.status_output);
            VAR_1->c1.status_output = ((void*)0);
            VAR_1->c1.status_output_owned = 0;
        }
    }
}
