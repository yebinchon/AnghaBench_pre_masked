
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int widget ;
struct TYPE_4__ {TYPE_1__* boxes; scalar_t__ last_offset; scalar_t__ req_elements; int cur_elements; int scrollbar; } ;
typedef TYPE_2__ listview ;
typedef scalar_t__ gint ;
typedef int WidgetType ;
struct TYPE_3__ {int box; } ;


 unsigned int FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static widget *FUNC_7 ( widget *VAR_0, WidgetType VAR_1, gint VAR_2, gint VAR_3 )
{
    widget *VAR_4 = ((void*)0);
    gint VAR_5, VAR_6;
    listview *VAR_7 = (listview *) VAR_0;
    if ( FUNC_2 ( FUNC_1 ( VAR_7->scrollbar ) ) && FUNC_6 ( FUNC_1 ( VAR_7->scrollbar ), VAR_2, VAR_3 ) ) {
        VAR_5 = VAR_2 - FUNC_4 ( FUNC_1 ( VAR_7->scrollbar ) );
        VAR_6 = VAR_3 - FUNC_5 ( FUNC_1 ( VAR_7->scrollbar ) );
        VAR_4 = FUNC_3 ( FUNC_1 ( VAR_7->scrollbar ), VAR_1, VAR_5, VAR_6 );
    }

    unsigned int VAR_8 = FUNC_0 ( VAR_7->cur_elements, VAR_7->req_elements - VAR_7->last_offset );
    unsigned int VAR_9;
    for ( VAR_9 = 0; VAR_9 < VAR_8 && VAR_4 == ((void*)0); VAR_9++ ) {
        widget *VAR_10 = FUNC_1 ( VAR_7->boxes[VAR_9].box );
        if ( FUNC_6 ( VAR_10, VAR_2, VAR_3 ) ) {
            VAR_5 = VAR_2 - FUNC_4 ( VAR_10 );
            VAR_6 = VAR_3 - FUNC_5 ( VAR_10 );
            VAR_4 = FUNC_3 ( VAR_10, VAR_1, VAR_5, VAR_6 );
        }
    }

    return VAR_4;
}
