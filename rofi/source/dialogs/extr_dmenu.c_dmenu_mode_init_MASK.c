
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char gchar ;
struct TYPE_7__ {int location; int case_sensitive; int menu_lines; } ;
struct TYPE_6__ {char* display_name; } ;
struct TYPE_5__ {char separator; char* message; char* format; char* column_separator; int columns; int input_stream; int data_input_stream; int cancel; int cancel_source; int num_active_list; int active_list; int num_urgent_list; int urgent_list; int selected_line; } ;
typedef int Mode ;
typedef TYPE_1__ DmenuModePrivateData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char**) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ,int ,TYPE_1__*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 char* FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (char*,int *,int *) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (char*,int) ;

__attribute__((used)) static int FUNC_21 ( Mode *VAR_9 )
{
    if ( FUNC_15 ( VAR_9 ) != ((void*)0) ) {
        return VAR_3;
    }
    FUNC_16 ( VAR_9, FUNC_9 ( sizeof ( DmenuModePrivateData ) ) );
    DmenuModePrivateData *VAR_10 = (DmenuModePrivateData *) FUNC_15 ( VAR_9 );

    VAR_10->separator = '\n';
    VAR_10->selected_line = VAR_4;

    FUNC_3 ( "-mesg", &( VAR_10->message ) );


    FUNC_2 ( "-sep", &( VAR_10->separator ) );

    FUNC_4 ( "-selected-row", &( VAR_10->selected_line ) );

    VAR_10->format = "s";


    FUNC_3 ( "-format", &( VAR_10->format ) );

    char *VAR_11 = ((void*)0);
    FUNC_3 ( "-u", &VAR_11 );
    if ( VAR_11 != ((void*)0) ) {
        FUNC_18 ( VAR_11, &( VAR_10->urgent_list ), &( VAR_10->num_urgent_list ) );
    }

    VAR_11 = ((void*)0);
    FUNC_3 ( "-a", &VAR_11 );
    if ( VAR_11 != ((void*)0) ) {
        FUNC_18 ( VAR_11, &( VAR_10->active_list ), &( VAR_10->num_active_list ) );
    }


    FUNC_4 ( "-l", &( VAR_6.menu_lines ) );

    VAR_11 = ((void*)0);
    FUNC_3 ( "-window-title", &VAR_11 );
    if ( VAR_11 ) {
        VAR_7.display_name = VAR_11;
    }





    if ( FUNC_1 ( "-b" ) >= 0 ) {
        VAR_6.location = 6;
    }

    VAR_6.case_sensitive = VAR_3;
    if ( FUNC_1 ( "-i" ) >= 0 ) {
        VAR_6.case_sensitive = VAR_0;
    }
    int VAR_12 = VAR_2;
    VAR_11 = ((void*)0);
    if ( FUNC_3 ( "-input", &VAR_11 ) ) {
        char *VAR_13 = FUNC_19 ( VAR_11 );
        VAR_12 = FUNC_17 ( VAR_11, VAR_1 );
        if ( VAR_12 < 0 ) {
            char *VAR_14 = FUNC_10 ( "Failed to open file: <b>%s</b>:\n\t<i>%s</i>", VAR_13, FUNC_11 ( VAR_8 ) );
            FUNC_20 ( VAR_14, VAR_3 );
            FUNC_8 ( VAR_14 );
            FUNC_8 ( VAR_13 );
            return VAR_3;
        }
        FUNC_8 ( VAR_13 );
    }

    if ( !( VAR_12 == VAR_2 && FUNC_14 ( VAR_12 ) == 1 ) ) {
        VAR_10->cancel = FUNC_6 ();
        VAR_10->cancel_source = FUNC_5 ( VAR_10->cancel, FUNC_0 ( VAR_5 ), VAR_10, ((void*)0) );
        VAR_10->input_stream = FUNC_13 ( VAR_12, VAR_12 != VAR_2 );
        VAR_10->data_input_stream = FUNC_7 ( VAR_10->input_stream );
    }
    gchar *VAR_15 = ((void*)0);
    if ( FUNC_3 ( "-display-columns", &VAR_15 ) ) {
        VAR_10->columns = FUNC_12 ( VAR_15, ",", 0 );
        VAR_10->column_separator = "\t";
        FUNC_3 ( "-display-column-separator", &VAR_10->column_separator );
    }
    return VAR_3;
}
