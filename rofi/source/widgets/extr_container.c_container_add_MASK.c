
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ parent; } ;
typedef TYPE_1__ widget ;
struct TYPE_7__ {TYPE_1__* child; } ;
typedef TYPE_2__ container ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3 ( container *VAR_0, widget *VAR_1 )
{
    if ( VAR_0 == ((void*)0) ) {
        return;
    }
    VAR_0->child = VAR_1;
    FUNC_1 ( VAR_1->parent == FUNC_0 ( VAR_0 ) );
    FUNC_2 ( FUNC_0 ( VAR_0 ) );
}
