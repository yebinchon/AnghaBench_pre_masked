
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int textbox ;
typedef int icon ;
typedef scalar_t__ gboolean ;
typedef int cairo_surface_t ;
typedef int TextBoxFontType ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_16__ {double member_0; double member_1; double member_2; double member_3; } ;
struct TYPE_18__ {int member_0; TYPE_1__ member_1; } ;
struct TYPE_17__ {int * line_map; int sw; scalar_t__ tokens; } ;
struct TYPE_15__ {scalar_t__ show_match; } ;
typedef TYPE_2__ RofiViewState ;
typedef TYPE_3__ RofiHighlightColorStyle ;
typedef int PangoAttribute ;
typedef int PangoAttrList ;
typedef TYPE_4__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_14__ VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__,scalar_t__,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 char* FUNC_7 (int ,int ,int*,TYPE_4__**,int ) ;
 int * FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_3__ FUNC_13 (int ,char*,TYPE_3__) ;
 int FUNC_14 (int *,int) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,char*) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20 ( textbox *VAR_5,icon *VAR_6, unsigned int VAR_7, void *VAR_8, TextBoxFontType *VAR_9, gboolean VAR_10 )
{
    RofiViewState *VAR_11 = (RofiViewState *) VAR_8;
    if ( VAR_10 ) {
        GList *VAR_12 = ((void*)0);
        int VAR_13 = 0;
        char *VAR_14 = FUNC_7 ( VAR_11->sw, VAR_11->line_map[VAR_7], &VAR_13, &VAR_12, VAR_3 );
        (*VAR_9) |= VAR_13;

        FUNC_14 ( VAR_5, *VAR_9 );

        FUNC_18 ( VAR_5, VAR_14 );
        PangoAttrList *VAR_15 = FUNC_15 ( VAR_5 );
        if ( VAR_15 != ((void*)0) ) {
            FUNC_11 ( VAR_15 );
        }
        else{
            VAR_15 = FUNC_10 ();
        }
        if( VAR_6 ) {
            int VAR_16 = FUNC_19( FUNC_0(VAR_6) );
            cairo_surface_t *VAR_17 = FUNC_8 ( VAR_11->sw, VAR_11->line_map[VAR_7], VAR_16 );
            FUNC_6 ( VAR_6, VAR_17 );
        }

        if ( VAR_11->tokens && VAR_4.show_match ) {
            RofiHighlightColorStyle VAR_18 = { VAR_1 | VAR_2, { 0.0, 0.0, 0.0, 0.0 } };
            VAR_18 = FUNC_13 ( FUNC_0 ( VAR_5 ), "highlight", VAR_18 );
            FUNC_5 ( VAR_18, VAR_11->tokens, FUNC_16 ( VAR_5 ), VAR_15 );
        }
        for ( GList *VAR_19 = FUNC_2 ( VAR_12 ); VAR_19 != ((void*)0); VAR_19 = FUNC_4 ( VAR_19 ) ) {
            FUNC_9 ( VAR_15, (PangoAttribute *) ( VAR_19->data ) );
        }
        FUNC_17 ( VAR_5, VAR_15 );
        FUNC_12 ( VAR_15 );
        FUNC_3 ( VAR_12 );
        FUNC_1 ( VAR_14 );
    }
    else {
        int VAR_20 = 0;
        FUNC_7 ( VAR_11->sw, VAR_11->line_map[VAR_7], &VAR_20, ((void*)0), VAR_0 );
        (*VAR_9) |= VAR_20;

        FUNC_14 ( VAR_5, *VAR_9 );
    }
}
