
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int regex; scalar_t__ invert; } ;
typedef TYPE_2__ rofi_int_matcher ;
struct TYPE_17__ {int start_index; int end_index; } ;
struct TYPE_14__ {int red; int green; int blue; } ;
struct TYPE_16__ {int style; TYPE_1__ color; } ;
typedef TYPE_3__ RofiHighlightColorStyle ;
typedef TYPE_4__ PangoAttribute ;
typedef int PangoAttrList ;
typedef int GMatchInfo ;


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
 int FUNC_0 (int *,int,int*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char const*,int ,int **) ;
 TYPE_4__* FUNC_6 (int,int,int) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (int ) ;
 TYPE_4__* FUNC_12 (int ) ;

PangoAttrList *FUNC_13 ( RofiHighlightColorStyle VAR_12, rofi_int_matcher**VAR_13, const char *VAR_14, PangoAttrList *VAR_15 )
{

    if ( VAR_13 ) {
        for ( int VAR_16 = 0; VAR_13[VAR_16]; VAR_16++ ) {
            GMatchInfo *VAR_17 = ((void*)0);
            if ( VAR_13[VAR_16]->invert ) {
                continue;
            }
            FUNC_5 ( VAR_13[VAR_16]->regex, VAR_14, VAR_0, &VAR_17 );
            while ( FUNC_3 ( VAR_17 ) ) {
                int VAR_18 = FUNC_2 ( VAR_17 );
                for ( int VAR_19 = ( VAR_18 > 1 ) ? 1 : 0; VAR_19 < VAR_18; VAR_19++ ) {
                    int VAR_20, VAR_21;
                    FUNC_0 ( VAR_17, VAR_19, &VAR_20, &VAR_21 );
                    if ( VAR_12.style & VAR_5 ) {
                        PangoAttribute *VAR_22 = FUNC_12 ( VAR_4 );
                        VAR_22->start_index = VAR_20;
                        VAR_22->end_index = VAR_21;
                        FUNC_7 ( VAR_15, VAR_22 );
                    }
                    if ( VAR_12.style & VAR_10 ) {
                        PangoAttribute *VAR_23 = FUNC_10 ( VAR_2 );
                        VAR_23->start_index = VAR_20;
                        VAR_23->end_index = VAR_21;
                        FUNC_7 ( VAR_15, VAR_23 );
                    }
                    if ( VAR_12.style & VAR_9 ) {
                        PangoAttribute *VAR_24 = FUNC_8 ( VAR_11 );
                        VAR_24->start_index = VAR_20;
                        VAR_24->end_index = VAR_21;
                        FUNC_7 ( VAR_15, VAR_24 );
                    }
                    if ( VAR_12.style & VAR_8 ) {
                        PangoAttribute *VAR_25 = FUNC_11 ( VAR_3 );
                        VAR_25->start_index = VAR_20;
                        VAR_25->end_index = VAR_21;
                        FUNC_7 ( VAR_15, VAR_25 );
                    }
                    if ( VAR_12.style & VAR_7 ) {
                        PangoAttribute *VAR_26 = FUNC_9 ( VAR_1 );
                        VAR_26->start_index = VAR_20;
                        VAR_26->end_index = VAR_21;
                        FUNC_7 ( VAR_15, VAR_26 );
                    }
                    if ( VAR_12.style & VAR_6 ) {
                        PangoAttribute *VAR_27 = FUNC_6 (
                            VAR_12.color.red * 65535,
                            VAR_12.color.green * 65535,
                            VAR_12.color.blue * 65535 );
                        VAR_27->start_index = VAR_20;
                        VAR_27->end_index = VAR_21;
                        FUNC_7 ( VAR_15, VAR_27 );
                    }
                }
                FUNC_4 ( VAR_17, ((void*)0) );
            }
            FUNC_1 ( VAR_17 );
        }
    }
    return VAR_15;
}
