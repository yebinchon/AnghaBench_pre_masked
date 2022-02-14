
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tp_next; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;

int
FUNC_1()
{





    switch (VAR_1)
    {
 case 0: return 0;
 case 1: return (VAR_0->tp_next == ((void*)0)) ? 0 : 1;
    }
    return 1;
}
