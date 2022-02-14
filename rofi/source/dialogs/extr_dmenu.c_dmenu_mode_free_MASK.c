
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cmd_list_length; struct TYPE_3__* selected_list; struct TYPE_3__* active_list; struct TYPE_3__* urgent_list; struct TYPE_3__* cmd_list; struct TYPE_3__* icon_name; struct TYPE_3__* entry; scalar_t__ cancel; scalar_t__ input_stream; scalar_t__ data_input_stream; int cancel_source; } ;
typedef int Mode ;
typedef TYPE_1__ DmenuModePrivateData ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7 ( Mode *VAR_0 )
{
    if ( FUNC_5 ( VAR_0 ) == ((void*)0) ) {
        return;
    }
    DmenuModePrivateData *VAR_1 = (DmenuModePrivateData *) FUNC_5 ( VAR_0 );
    if ( VAR_1 != ((void*)0) ) {
        if ( VAR_1->cancel ) {

            if ( VAR_1->input_stream && !FUNC_3 ( VAR_1->input_stream ) ) {
                FUNC_0 ( VAR_1->cancel );
            }

            FUNC_1 ( VAR_1->cancel, VAR_1->cancel_source );
            if ( VAR_1->input_stream ) {

                FUNC_4 ( VAR_1->data_input_stream );
                FUNC_4 ( VAR_1->input_stream );
            }
            FUNC_4 ( VAR_1->cancel );
        }

        for ( size_t VAR_2 = 0; VAR_2 < VAR_1->cmd_list_length; VAR_2++ ) {
            if ( VAR_1->cmd_list[VAR_2].entry ) {
                FUNC_2 ( VAR_1->cmd_list[VAR_2].entry );
                FUNC_2 ( VAR_1->cmd_list[VAR_2].icon_name );
            }
        }
        FUNC_2 ( VAR_1->cmd_list );
        FUNC_2 ( VAR_1->urgent_list );
        FUNC_2 ( VAR_1->active_list );
        FUNC_2 ( VAR_1->selected_list );

        FUNC_2 ( VAR_1 );
        FUNC_6 ( VAR_0, ((void*)0) );
    }
}
