
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_13__ {char* filter; int case_sensitive; scalar_t__ auto_select; } ;
struct TYPE_12__ {char* display_name; scalar_t__ private_data; } ;
struct TYPE_11__ {unsigned int cmd_list_length; int only_selected; int multi_select; int do_markup; unsigned int selected_line; int * cancel; int format; TYPE_1__* cmd_list; } ;
struct TYPE_10__ {int entry; } ;
typedef int RofiViewState ;
typedef int MenuFlags ;
typedef TYPE_1__ DmenuScriptEntry ;
typedef TYPE_2__ DmenuModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (char*,unsigned int*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,unsigned int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int **,int ) ;
 int ** FUNC_9 (char*,int ) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,int ,unsigned int,char*) ;
 int * FUNC_13 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *,unsigned int) ;

int FUNC_17 ( void )
{
    FUNC_11 ( &VAR_7 );
    MenuFlags VAR_8 = VAR_2;
    DmenuModePrivateData *VAR_9 = (DmenuModePrivateData *) VAR_7.private_data;
    int VAR_10 = VAR_4;


    if ( FUNC_1 ( "-sync" ) >= 0 || FUNC_1 ( "-dump" ) >= 0 || FUNC_1 ( "-select" ) >= 0
         || FUNC_1 ( "-no-custom" ) >= 0 || FUNC_1 ( "-only-match" ) >= 0 || VAR_5.auto_select ||
         FUNC_1 ( "-selected-row" ) >= 0 ) {
        VAR_10 = VAR_0;
    }

    if ( VAR_9->cancel != ((void*)0) ) {
        if ( VAR_10 ) {
            unsigned int VAR_11 = 25;
            FUNC_3 ( "-async-pre-read", &VAR_11 );
            VAR_10 = FUNC_6 ( VAR_9, VAR_11 );
        }
        else {
            FUNC_7 ( VAR_9 );
        }
    }
    char *VAR_12 = ((void*)0);
    unsigned int VAR_13 = VAR_9->cmd_list_length;
    DmenuScriptEntry *VAR_14 = VAR_9->cmd_list;

    VAR_9->only_selected = VAR_0;
    VAR_9->multi_select = VAR_0;
    if ( FUNC_1 ( "-multi-select" ) >= 0 ) {
        VAR_8 = VAR_1;
        VAR_9->multi_select = VAR_4;
    }
    if ( FUNC_1 ( "-markup-rows" ) >= 0 ) {
        VAR_9->do_markup = VAR_4;
    }
    if ( FUNC_1 ( "-only-match" ) >= 0 || FUNC_1 ( "-no-custom" ) >= 0 ) {
        VAR_9->only_selected = VAR_4;
        if ( VAR_13 == 0 ) {
            return VAR_4;
        }
    }
    if ( VAR_5.auto_select && VAR_13 == 1 ) {
        FUNC_12 ( VAR_9->format, VAR_14[0].entry , 0, VAR_5.filter );
        return VAR_4;
    }
    if ( FUNC_1 ( "-password" ) >= 0 ) {
        VAR_8 |= VAR_3;
    }

    VAR_12 = FUNC_5 ( VAR_5.filter );

    char *VAR_15 = ((void*)0);
    FUNC_2 ( "-select", &VAR_15 );
    if ( VAR_15 != ((void*)0) ) {
        rofi_int_matcher **VAR_16 = FUNC_9 ( VAR_15, VAR_5.case_sensitive );
        unsigned int VAR_17 = 0;
        for ( VAR_17 = 0; VAR_17 < VAR_13; VAR_17++ ) {
            if ( FUNC_8 ( VAR_16, VAR_14[VAR_17].entry ) ) {
                VAR_9->selected_line = VAR_17;
                break;
            }
        }
        FUNC_10 ( VAR_16 );
    }
    if ( FUNC_1 ( "-dump" ) >= 0 ) {
        rofi_int_matcher **VAR_18 = FUNC_9 ( VAR_5.filter ? VAR_5.filter : "", VAR_5.case_sensitive );
        unsigned int VAR_19 = 0;
        for ( VAR_19 = 0; VAR_19 < VAR_13; VAR_19++ ) {
            if ( VAR_18 == ((void*)0) || FUNC_8 ( VAR_18, VAR_14[VAR_19].entry ) ) {
                FUNC_12 ( VAR_9->format, VAR_14[VAR_19].entry , VAR_19, VAR_5.filter );
            }
        }
        FUNC_10 ( VAR_18 );
        FUNC_0 ( &VAR_7 );
        FUNC_4 ( VAR_12 );
        return VAR_4;
    }
    FUNC_2 ( "-p", &( VAR_7.display_name ) );
    RofiViewState *VAR_20 = FUNC_13 ( &VAR_7, VAR_12, VAR_8, VAR_6 );

    if ( VAR_10 && ( VAR_9->cancel != ((void*)0) ) ) {
        FUNC_15 ( VAR_20, "Loading.. " );
    }
    FUNC_16 ( VAR_20, VAR_9->selected_line );
    FUNC_14 ( VAR_20 );

    return VAR_0;
}
