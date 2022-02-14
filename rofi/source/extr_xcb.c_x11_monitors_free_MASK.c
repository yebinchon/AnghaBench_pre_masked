
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ workarea ;
struct TYPE_5__ {TYPE_1__* monitors; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1 ( void )
{
    while ( VAR_0->monitors != ((void*)0) ) {
        workarea *VAR_1 = VAR_0->monitors;
        VAR_0->monitors = VAR_1->next;
        FUNC_0 ( VAR_1 );
    }
}
