
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__* PTCP_PCB ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;

void
FUNC_0(
    PTCP_PCB VAR_1,
    BOOLEAN VAR_2)
{
    if (VAR_2)
        VAR_1->flags |= VAR_0;
    else
        VAR_1->flags &= ~VAR_0;
}
