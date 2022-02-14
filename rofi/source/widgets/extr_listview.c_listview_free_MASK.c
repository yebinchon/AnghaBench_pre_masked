
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int widget ;
struct TYPE_3__ {unsigned int cur_elements; int scrollbar; struct TYPE_3__* listview_name; struct TYPE_3__* boxes; int box; } ;
typedef TYPE_1__ listview ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 ( widget *VAR_0 )
{
    listview *VAR_1 = (listview *) VAR_0;
    for ( unsigned int VAR_2 = 0; VAR_2 < VAR_1->cur_elements; VAR_2++ ) {
        FUNC_2 ( FUNC_0 ( VAR_1->boxes [VAR_2].box ) );
    }
    FUNC_1 ( VAR_1->boxes );

    FUNC_1 ( VAR_1->listview_name );
    FUNC_2 ( FUNC_0 ( VAR_1->scrollbar ) );
    FUNC_1 ( VAR_1 );
}
