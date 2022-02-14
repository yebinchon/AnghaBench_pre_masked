
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_5__ {int menu_lines; int req_elements; int max_displayed_lines; scalar_t__ type; int element_height; int fixed_num_lines; scalar_t__ dynamic; int spacing; TYPE_1__ widget; } ;
typedef TYPE_2__ listview ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 ( widget *VAR_3 )
{
    listview *VAR_4 = (listview *) VAR_3;
    if ( VAR_4 == ((void*)0) || VAR_4->widget.enabled == VAR_1 ) {
        return 0;
    }
    int VAR_5 = FUNC_2 ( VAR_4->spacing, VAR_2 );
    int VAR_6 = VAR_4->menu_lines;
    if ( !( VAR_4->fixed_num_lines ) ) {
        if ( VAR_4->dynamic ) {
            VAR_6 = FUNC_0 ( VAR_4->menu_lines, VAR_4->req_elements );
        }
        else {
            VAR_6 = FUNC_0 ( VAR_4->menu_lines, VAR_4->max_displayed_lines );
        }
    }
    if ( VAR_4->type == VAR_0 ) {
        VAR_6 = FUNC_0 ( VAR_6, 1 );
    }
    if ( VAR_6 == 0 ) {
        if ( VAR_4->dynamic && !VAR_4->fixed_num_lines ) {

            return 0;
        }
        return FUNC_3 ( FUNC_1 ( VAR_4 ) );
    }
    int VAR_7 = FUNC_3 ( FUNC_1 ( VAR_4 ) );
    VAR_7 += VAR_6 * ( VAR_4->element_height + VAR_5 ) - VAR_5;
    return VAR_7;
}
