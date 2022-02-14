
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int req_elements; int selected; } ;
typedef TYPE_1__ listview ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4 ( listview *VAR_0, unsigned int VAR_1 )
{
    if ( VAR_0 == ((void*)0) ) {
        return;
    }
    VAR_0->req_elements = VAR_1;
    FUNC_2 ( VAR_0, VAR_0->selected );
    FUNC_1 ( VAR_0 );
    FUNC_3 ( FUNC_0 ( VAR_0 ) );
}
