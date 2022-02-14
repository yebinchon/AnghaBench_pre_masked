
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINEDC ;
struct TYPE_4__ {struct TYPE_4__* next; int * funcs; } ;
typedef TYPE_1__* PHYSDEV ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;

WINEDC* FUNC_1( PHYSDEV VAR_1 )
{
    while (VAR_1->funcs != &VAR_0)
        VAR_1 = VAR_1->next;
    return FUNC_0( VAR_1 );
}
