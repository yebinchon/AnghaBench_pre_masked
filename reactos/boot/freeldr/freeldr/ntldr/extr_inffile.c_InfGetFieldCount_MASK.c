
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int FieldCount; } ;
struct TYPE_4__ {int * Line; } ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int LONG ;



LONG
FUNC_0(PINFCONTEXT VAR_0)
{
    if ((VAR_0 == ((void*)0)) || (VAR_0->Line == ((void*)0)))
        return 0;

    return ((PINFCACHELINE)VAR_0->Line)->FieldCount;
}
