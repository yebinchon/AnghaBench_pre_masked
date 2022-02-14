
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* free ) (TYPE_1__*) ;scalar_t__ name; } ;
typedef TYPE_1__ widget ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 ( widget *VAR_0 )
{
    if ( VAR_0 ) {
        if ( VAR_0->name ) {
            FUNC_0 ( VAR_0->name );
        }
        if ( VAR_0->free ) {
            VAR_0->free ( VAR_0 );
        }
        return;
    }
}
