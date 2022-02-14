
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int widget ;
typedef int textbox ;
typedef int icon ;
typedef int box ;
typedef int TextboxFlags ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int menu_flags; int num_modi; int * overlay; int ** modi; int * sidebar_bar; int const* sw; int num_lines; int * list_view; int * mesg_box; int * mesg_tb; int * text; int * case_indicator; int * tb_filtered_rows; int * tb_total_rows; int * prompt; } ;
struct TYPE_14__ {int menu_lines; int scroll_method; int element_height; scalar_t__ sidebar_mode; } ;
typedef TYPE_1__ RofiViewState ;
typedef int Mode ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_0 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,char const*,int ) ;
 TYPE_13__ VAR_18 ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*) ;
 int VAR_19 ;
 int FUNC_8 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_9 (TYPE_2__ const*) ;
 int ** FUNC_10 (int) ;
 int FUNC_11 () ;
 int * FUNC_12 (int *,char const*) ;
 int * FUNC_13 (int *,char const*,int ,TYPE_1__*,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,TYPE_1__*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 char* FUNC_19 (int const*) ;
 int * FUNC_20 (unsigned int) ;
 int FUNC_21 () ;
 int FUNC_22 (int *,char*,int ) ;
 TYPE_2__* FUNC_23 (int *,char*,char*) ;
 int VAR_20 ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (char const*,char*) ;
 int VAR_21 ;
 void* FUNC_27 (int *,int ,char const*,int,int ,char*,double,double) ;
 int VAR_22 ;
 int FUNC_28 (int *,int ) ;
 int VAR_23 ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_31 ( RofiViewState *VAR_24, widget *VAR_25, const char *VAR_26 )
{
    char *VAR_27 = ((void*)0);
    widget *VAR_28 = ((void*)0);




    if ( FUNC_26 ( VAR_26, "mainbox" ) == 0 ) {
        VAR_28 = (widget *) FUNC_2 ( VAR_25, VAR_26, VAR_6 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_28 ), VAR_13 );
        if ( VAR_18.sidebar_mode ) {
            VAR_27 = "inputbar,message,listview,mode-switcher";
        } else {
            VAR_27 = "inputbar,message,listview";
        }
    }



    else if ( FUNC_26 ( VAR_26, "inputbar" ) == 0 ) {
        VAR_28 = (widget *) FUNC_2 ( VAR_25, VAR_26, VAR_5 );
        VAR_27 = "prompt,entry,overlay,case-indicator";
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_28 ), VAR_0 );
    }



    else if ( FUNC_26 ( VAR_26, "prompt" ) == 0 ) {
        if ( VAR_24->prompt != ((void*)0) ) {
            FUNC_7 ( "Prompt widget can only be added once to the layout." );
            return;
        }

        VAR_24->prompt = FUNC_27 ( VAR_25, VAR_17, VAR_26, VAR_8 | VAR_7, VAR_4, "", 0, 0 );
        FUNC_25 ( VAR_24 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->prompt ), VAR_0 );
        VAR_27 = ((void*)0);
    }
    else if ( FUNC_26 ( VAR_26, "num-rows" ) == 0 ){
        VAR_24->tb_total_rows = FUNC_27 ( VAR_25, VAR_17, VAR_26, VAR_8|VAR_7, VAR_4, "", 0, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->tb_total_rows ), VAR_0 );
        VAR_27 = ((void*)0);
    }
    else if ( FUNC_26 ( VAR_26, "num-filtered-rows" ) == 0 ){
        VAR_24->tb_filtered_rows = FUNC_27 ( VAR_25, VAR_17, VAR_26, VAR_8|VAR_7, VAR_4, "", 0, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->tb_filtered_rows), VAR_0 );
        VAR_27 = ((void*)0);
    }



    else if ( FUNC_26 ( VAR_26, "case-indicator" ) == 0 ) {
        if ( VAR_24->case_indicator != ((void*)0) ) {
            FUNC_7 ( "Case indicator widget can only be added once to the layout." );
            return;
        }
        VAR_24->case_indicator = FUNC_27 ( VAR_25, VAR_17, VAR_26, VAR_8 | VAR_7, VAR_4, "*", 0, 0 );

        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->case_indicator ), VAR_0 );
        FUNC_28 ( VAR_24->case_indicator, FUNC_11 () );
    }



    else if ( FUNC_26 ( VAR_26, "entry" ) == 0 ) {
        if ( VAR_24->text != ((void*)0) ) {
            FUNC_7 ( "Entry textbox widget can only be added once to the layout." );
            return;
        }

        TextboxFlags VAR_29 = VAR_9;
        VAR_29 |= ( ( VAR_24->menu_flags & VAR_3 ) == VAR_3 ) ? VAR_11 : 0;
        VAR_24->text = FUNC_27 ( VAR_25, VAR_15, VAR_26, VAR_29 | VAR_7, VAR_4, ((void*)0), 0, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->text ), VAR_13 );
    }



    else if ( FUNC_26 ( VAR_26, "message" ) == 0 ) {
        if ( VAR_24->mesg_box != ((void*)0) ) {
            FUNC_7 ( "Message widget can only be added once to the layout." );
            return;
        }
        VAR_24->mesg_box = FUNC_4 ( VAR_25, VAR_26 );
        VAR_24->mesg_tb = FUNC_27 ( FUNC_0 ( VAR_24->mesg_box ), VAR_17, "textbox", VAR_7 | VAR_10 | VAR_12, VAR_4, ((void*)0), 0, 0 );
        FUNC_3 ( VAR_24->mesg_box, FUNC_0 ( VAR_24->mesg_tb ) );
        FUNC_24 ( VAR_24 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->mesg_box ), VAR_0 );
    }



    else if ( FUNC_26 ( VAR_26, "listview" ) == 0 ) {
        if ( VAR_24->list_view != ((void*)0) ) {
            FUNC_7 ( "Listview widget can only be added once to the layout." );
            return;
        }
        VAR_24->list_view = FUNC_13 ( VAR_25, VAR_26, VAR_23, VAR_24, VAR_18.element_height, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->list_view ), VAR_13 );

        FUNC_16 ( VAR_24->list_view, ( VAR_24->menu_flags & VAR_2 ) == VAR_2 );
        FUNC_18 ( VAR_24->list_view, VAR_18.scroll_method );
        FUNC_15 ( VAR_24->list_view, VAR_20, VAR_24 );

        int VAR_30 = FUNC_22 ( FUNC_0 ( VAR_24->list_view ), "lines", VAR_18.menu_lines );
        FUNC_17 ( VAR_24->list_view, VAR_30 );
        FUNC_14 ( VAR_24->list_view, VAR_24->num_lines );
    }



    else if ( FUNC_26 ( VAR_26, "mode-switcher" ) == 0 || FUNC_26 ( VAR_26, "sidebar" ) == 0 ) {
        if ( VAR_24->sidebar_bar != ((void*)0) ) {
            FUNC_7 ( "Mode-switcher can only be added once to the layout." );
            return;
        }
        VAR_24->sidebar_bar = FUNC_2 ( VAR_25, VAR_26, VAR_5 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->sidebar_bar ), VAR_0 );
        VAR_24->num_modi = FUNC_21 ();
        VAR_24->modi = FUNC_10 ( VAR_24->num_modi * sizeof ( textbox * ) );
        for ( unsigned int VAR_31 = 0; VAR_31 < VAR_24->num_modi; VAR_31++ ) {
            const Mode * VAR_32 = FUNC_20 ( VAR_31 );
            VAR_24->modi[VAR_31] = FUNC_27 ( FUNC_0 ( VAR_24->sidebar_bar ), VAR_16, "button", VAR_7, ( VAR_32 == VAR_24->sw ) ? VAR_1 : VAR_4,
                    FUNC_19 ( VAR_32 ), 0.5, 0.5 );
            FUNC_1 ( VAR_24->sidebar_bar, FUNC_0 ( VAR_24->modi[VAR_31] ), VAR_13 );
            FUNC_30 ( FUNC_0 ( VAR_24->modi[VAR_31] ), VAR_22, VAR_24 );
        }
    }
    else if ( FUNC_5 ( VAR_26, "overlay" ) == 0 ) {
        VAR_24->overlay = FUNC_27 ( FUNC_0 ( VAR_25 ), VAR_17, "overlay", VAR_8 | VAR_7, VAR_14, "blaat", 0.5, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_24->overlay), VAR_0 );
        FUNC_29 ( FUNC_0 ( VAR_24->overlay ) );
    }
    else if ( FUNC_6 ( VAR_26, "textbox", 7 ) == 0 ) {
        textbox *VAR_33 = FUNC_27 ( VAR_25, VAR_17, VAR_26, VAR_7 | VAR_12, VAR_4, "", 0, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_33 ), VAR_13 );
    }
    else if ( FUNC_6 ( VAR_26, "button", 6 ) == 0 ) {
        textbox *VAR_34 = FUNC_27 ( VAR_25, VAR_15, VAR_26, VAR_7 | VAR_12, VAR_4, "", 0, 0 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_34 ), VAR_13 );
        FUNC_30 ( FUNC_0 ( VAR_34 ), VAR_21, VAR_24 );
    }
    else if ( FUNC_6 ( VAR_26, "icon", 4 ) == 0 ) {
        icon *VAR_35 = FUNC_12 ( VAR_25, VAR_26 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_35 ), VAR_13 );
    }
    else {
        VAR_28 = (widget *) FUNC_2 ( VAR_25, VAR_26, VAR_6 );
        FUNC_1 ( (box *) VAR_25, FUNC_0 ( VAR_28 ), VAR_13 );

    }
    if ( VAR_28 ) {
        GList *VAR_36 = FUNC_23 ( VAR_28, "children", VAR_27 );
        for ( const GList *VAR_37 = VAR_36; VAR_37 != ((void*)0); VAR_37 = FUNC_9 ( VAR_37 ) ) {
            FUNC_31 ( VAR_24, VAR_28, (const char *) VAR_37->data );
        }
        FUNC_8 ( VAR_36, VAR_19 );
    }
}
