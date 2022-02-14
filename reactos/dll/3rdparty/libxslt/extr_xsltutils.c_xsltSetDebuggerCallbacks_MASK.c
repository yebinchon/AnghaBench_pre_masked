
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltDebuggerCallbacksPtr ;
struct TYPE_4__ {int drop; int add; int handler; } ;
struct TYPE_3__ {int drop; int add; int handler; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int
FUNC_0(int VAR_2, void *VAR_3)
{
    xsltDebuggerCallbacksPtr VAR_4;

    if ((VAR_3 == ((void*)0)) || (VAR_2 != VAR_0))
 return(-1);

    VAR_4 = (xsltDebuggerCallbacksPtr) VAR_3;
    VAR_1.handler = VAR_4->handler;
    VAR_1.add = VAR_4->add;
    VAR_1.drop = VAR_4->drop;
    return(0);
}
