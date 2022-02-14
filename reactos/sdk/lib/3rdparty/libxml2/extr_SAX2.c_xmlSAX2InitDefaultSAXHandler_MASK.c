
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ initialized; int * warning; } ;
typedef TYPE_1__ xmlSAXHandler ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void
FUNC_1(xmlSAXHandler *VAR_2, int VAR_3)
{
    if ((VAR_2 == ((void*)0)) || (VAR_2->initialized != 0))
 return;

    FUNC_0(VAR_2, VAR_1);
    if (VAR_3 == 0)
 VAR_2->warning = ((void*)0);
    else
 VAR_2->warning = VAR_0;
}
