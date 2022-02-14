
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ private_data; } ;
struct TYPE_6__ {unsigned int cmd_list_length; size_t selected_line; scalar_t__ selected_count; int * selected_list; scalar_t__ multi_select; scalar_t__ only_selected; TYPE_1__* cmd_list; } ;
struct TYPE_5__ {int * entry; } ;
typedef int RofiViewState ;
typedef int MenuReturn ;
typedef TYPE_1__ DmenuScriptEntry ;
typedef TYPE_2__ DmenuModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (unsigned int,unsigned int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*,scalar_t__,int) ;
 TYPE_3__* FUNC_10 (int *) ;
 unsigned int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 size_t FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_18 ( RofiViewState *VAR_9 )
{
    int VAR_10 = VAR_0;
    DmenuModePrivateData *VAR_11 = (DmenuModePrivateData *) FUNC_10 ( VAR_9 )->private_data;
    unsigned int VAR_12 = VAR_11->cmd_list_length;
    DmenuScriptEntry *VAR_13 = VAR_11->cmd_list;

    char *VAR_14 = FUNC_8 ( FUNC_14 ( VAR_9 ) );
    VAR_11->selected_line = FUNC_13 ( VAR_9 );;
    MenuReturn VAR_15 = FUNC_12 ( VAR_9 );
    unsigned int VAR_16 = FUNC_11 ( VAR_9 );
    int VAR_17 = 0;

    if ( VAR_11->only_selected ) {



        VAR_17 = 1;

        if ( ( VAR_15 & VAR_1 ) == VAR_1 ) {

            VAR_17 = ( FUNC_5 ( "-only-match" ) >= 0 );
        }
        else if ( VAR_11->selected_line != VAR_8 ) {
            if ( ( VAR_15 & VAR_2 ) && VAR_11->multi_select ) {
                VAR_17 = VAR_7;
                if ( VAR_11->selected_list == ((void*)0) ) {
                    VAR_11->selected_list = FUNC_7 ( sizeof ( uint32_t ) * ( VAR_11->cmd_list_length / 32 + 1 ) );
                }
                VAR_11->selected_count += ( FUNC_1 ( VAR_11->selected_list, VAR_11->selected_line ) ? ( -1 ) : ( 1 ) );
                FUNC_2 ( VAR_11->selected_list, VAR_11->selected_line );

                VAR_11->selected_line = FUNC_0 ( VAR_16, VAR_12 - 1 );
                if ( VAR_11->selected_count > 0 ) {
                    char *VAR_18 = FUNC_9 ( "%u/%u", VAR_11->selected_count, VAR_11->cmd_list_length );
                    FUNC_16 ( VAR_9, VAR_18 );
                    FUNC_6 ( VAR_18 );
                }
                else {
                    FUNC_16 ( VAR_9, ((void*)0) );
                }
            }
            else if ( ( VAR_15 & ( VAR_5 | VAR_6 ) ) && VAR_13[VAR_11->selected_line].entry != ((void*)0) ) {
                FUNC_4 ( VAR_11, VAR_14 );
                VAR_10 = VAR_7;
                if ( ( VAR_15 & VAR_6 ) ) {
                    VAR_10 = 10 + ( VAR_15 & VAR_4 );
                }
                FUNC_6 ( VAR_14 );
                FUNC_3 ( VAR_9, VAR_10 );
                return;
            }
            else {
                VAR_11->selected_line = VAR_16 - 1;
            }
        }

        FUNC_15 ( VAR_9 );
        FUNC_17 ( VAR_9, VAR_11->selected_line );
        if ( !VAR_17 ) {
            FUNC_3 ( VAR_9, VAR_10 );
        }
        return;
    }

    VAR_17 = VAR_0;

    if ( ( VAR_15 & VAR_5 ) && VAR_11->selected_line != VAR_8 && VAR_13[VAR_11->selected_line].entry != ((void*)0) ) {
        if ( ( VAR_15 & VAR_2 ) && VAR_11->multi_select ) {
            VAR_17 = VAR_7;
            if ( VAR_11->selected_list == ((void*)0) ) {
                VAR_11->selected_list = FUNC_7 ( sizeof ( uint32_t ) * ( VAR_11->cmd_list_length / 32 + 1 ) );
            }
            VAR_11->selected_count += ( FUNC_1 ( VAR_11->selected_list, VAR_11->selected_line ) ? ( -1 ) : ( 1 ) );
            FUNC_2 ( VAR_11->selected_list, VAR_11->selected_line );

            VAR_11->selected_line = FUNC_0 ( VAR_16, VAR_12 - 1 );
            if ( VAR_11->selected_count > 0 ) {
                char *VAR_19 = FUNC_9 ( "%u/%u", VAR_11->selected_count, VAR_11->cmd_list_length );
                FUNC_16 ( VAR_9, VAR_19 );
                FUNC_6 ( VAR_19 );
            }
            else {
                FUNC_16 ( VAR_9, ((void*)0) );
            }
        }
        else {
            FUNC_4 ( VAR_11, VAR_14 );
        }
        VAR_10 = VAR_7;
    }

    else if ( ( VAR_15 & ( VAR_3 ) ) ) {
        FUNC_4 ( VAR_11, VAR_14 );

        VAR_10 = VAR_7;
    }

    else if ( ( VAR_15 & VAR_6 ) ) {
        FUNC_4 ( VAR_11, VAR_14 );

        VAR_17 = VAR_0;
        VAR_10 = 10 + ( VAR_15 & VAR_4 );
    }
    FUNC_6 ( VAR_14 );
    if ( VAR_17 ) {
        FUNC_15 ( VAR_9 );
        FUNC_17 ( VAR_9, VAR_11->selected_line );
    }
    else {
        FUNC_3 ( VAR_9, VAR_10 );
    }
}
