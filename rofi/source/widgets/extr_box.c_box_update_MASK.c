
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ parent; } ;
typedef TYPE_1__ widget ;
struct TYPE_7__ {int type; } ;
typedef TYPE_2__ box ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3 ( widget *VAR_0 )
{
    box *VAR_1 = (box *) VAR_0;
    switch ( VAR_1->type )
    {
    case 128:
        FUNC_1 ( VAR_1 );
        break;
    case 129:
    default:
        FUNC_0 ( VAR_1 );
    }
    if ( VAR_0->parent ) {
        FUNC_2 ( VAR_0->parent );
    }
}
