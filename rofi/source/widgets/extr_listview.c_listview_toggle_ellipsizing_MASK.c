
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ emode; unsigned int cur_elements; TYPE_1__* boxes; } ;
typedef TYPE_2__ listview ;
struct TYPE_4__ {int textbox; } ;
typedef scalar_t__ PangoEllipsizeMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1 ( listview *VAR_3 )
{
    if ( VAR_3 ) {
        PangoEllipsizeMode VAR_4 = VAR_3->emode;
        if ( VAR_4 == VAR_2 ) {
            VAR_4 = VAR_1;
        } else if ( VAR_4 == VAR_1 ) {
            VAR_4 = VAR_0;
        } else if ( VAR_4 == VAR_0 ) {
            VAR_4 = VAR_2;
        }
        VAR_3->emode = VAR_4;
        for ( unsigned int VAR_5 = 0; VAR_5 < VAR_3->cur_elements; VAR_5++ ) {
            FUNC_0 ( VAR_3->boxes[VAR_5].textbox, VAR_4 );
        }
    }
}
