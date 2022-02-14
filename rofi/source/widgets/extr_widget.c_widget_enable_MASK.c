
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parent; int enabled; } ;
typedef TYPE_1__ widget ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 ( widget *VAR_1 )
{
    if ( VAR_1 && !VAR_1->enabled ) {
        VAR_1->enabled = VAR_0;
        FUNC_1 ( VAR_1 );
        FUNC_1 ( VAR_1->parent );
        FUNC_0 ( VAR_1 );
    }
}
