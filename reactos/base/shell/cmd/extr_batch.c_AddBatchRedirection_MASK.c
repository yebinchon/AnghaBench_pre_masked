
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {TYPE_1__* RedirList; } ;
struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ REDIRECTION ;


 TYPE_2__* VAR_0 ;

VOID FUNC_0(REDIRECTION **VAR_1)
{
    REDIRECTION **VAR_2;


    VAR_2 = VAR_1;
    while (*VAR_2)
        VAR_2 = &(*VAR_2)->Next;
    *VAR_2 = VAR_0->RedirList;
    VAR_0->RedirList = *VAR_1;



    *VAR_1 = ((void*)0);
}
