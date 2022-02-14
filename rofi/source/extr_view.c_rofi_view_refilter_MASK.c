
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_15__ {int callback; } ;
struct TYPE_16__ {unsigned int start; int count; unsigned int* acount; char* pattern; TYPE_2__ st; int plen; int * mutex; int * cond; int stop; TYPE_4__* state; } ;
typedef TYPE_3__ thread_state_view ;
typedef int glong ;
typedef char gchar ;
struct TYPE_17__ {int num_lines; unsigned int* line_map; unsigned int filtered_lines; unsigned int selected_line; int height; void* refilter; scalar_t__ quit; int retv; int list_view; scalar_t__ tb_total_rows; scalar_t__ tb_filtered_rows; int distance; int * tokens; TYPE_1__* text; int sw; void* reload; } ;
struct TYPE_14__ {int text; } ;
struct TYPE_13__ {scalar_t__ auto_select; scalar_t__ sort; int case_sensitive; } ;
typedef TYPE_4__ RofiViewState ;
typedef int GMutex ;
typedef int GCond ;


 void* VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_11__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (unsigned int*,unsigned int,int,int ,int ) ;
 char* FUNC_14 (char*,unsigned int) ;
 int FUNC_15 (int ,TYPE_3__*,int *) ;
 int FUNC_16 (char*,int) ;
 int * FUNC_17 (char*,int ) ;
 int FUNC_18 (int *) ;
 int VAR_5 ;
 size_t FUNC_19 (int ) ;
 int FUNC_20 (int ,unsigned int) ;
 int FUNC_21 (unsigned int*,unsigned int*,int) ;
 char* FUNC_22 (int ,int ) ;
 int FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (TYPE_4__*) ;
 int FUNC_25 (TYPE_3__*,int *) ;
 int FUNC_26 (TYPE_4__*) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (scalar_t__,char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_29 ( RofiViewState *VAR_7 )
{
    FUNC_2 ( "Filter start" );
    if ( VAR_7->reload ) {
        FUNC_3 ( VAR_7 );
        VAR_7->reload = VAR_0;
    }
    if ( VAR_7->tokens ) {
        FUNC_18 ( VAR_7->tokens );
        VAR_7->tokens = ((void*)0);
    }
    if ( VAR_7->text && FUNC_27 ( VAR_7->text->text ) > 0 ) {
        unsigned int VAR_8 = 0;
        gchar *VAR_9 = FUNC_22 ( VAR_7->sw, VAR_7->text->text );
        glong VAR_10 = VAR_9 ? FUNC_16 ( VAR_9, -1 ) : 0;
        VAR_7->tokens = FUNC_17 ( VAR_9, VAR_3.case_sensitive );






        unsigned int VAR_11 = FUNC_0 ( 1, VAR_7->num_lines / 500 );
        thread_state_view VAR_12[VAR_11];
        GCond VAR_13;
        GMutex VAR_14;
        FUNC_10 ( &VAR_14 );
        FUNC_5 ( &VAR_13 );
        unsigned int VAR_15 = VAR_11;
        unsigned int VAR_16 = ( VAR_7->num_lines + VAR_11 ) / VAR_11;
        for ( unsigned int VAR_17 = 0; VAR_17 < VAR_11; VAR_17++ ) {
            VAR_12[VAR_17].state = VAR_7;
            VAR_12[VAR_17].start = VAR_17 * VAR_16;
            VAR_12[VAR_17].stop = FUNC_1 ( VAR_7->num_lines, ( VAR_17 + 1 ) * VAR_16 );
            VAR_12[VAR_17].count = 0;
            VAR_12[VAR_17].cond = &VAR_13;
            VAR_12[VAR_17].mutex = &VAR_14;
            VAR_12[VAR_17].acount = &VAR_15;
            VAR_12[VAR_17].plen = VAR_10;
            VAR_12[VAR_17].pattern = VAR_9;
            VAR_12[VAR_17].st.callback = VAR_4;
            if ( VAR_17 > 0 ) {
                FUNC_15 ( VAR_6, &VAR_12[VAR_17], ((void*)0) );
            }
        }

        FUNC_25 ( &VAR_12[0], ((void*)0) );

        if ( VAR_11 > 1 ) {
            FUNC_11 ( &VAR_14 );
            while ( VAR_15 > 0 ) {
                FUNC_6 ( &VAR_13, &VAR_14 );
            }
            FUNC_12 ( &VAR_14 );
        }
        FUNC_4 ( &VAR_13 );
        FUNC_9 ( &VAR_14 );
        for ( unsigned int VAR_18 = 0; VAR_18 < VAR_11; VAR_18++ ) {
            if ( VAR_8 != VAR_12[VAR_18].start ) {
                FUNC_21 ( &( VAR_7->line_map[VAR_8] ), &( VAR_7->line_map[VAR_12[VAR_18].start] ), sizeof ( unsigned int ) * ( VAR_12[VAR_18].count ) );
            }
            VAR_8 += VAR_12[VAR_18].count;
        }
        if ( VAR_3.sort ) {
            FUNC_13 ( VAR_7->line_map, VAR_8, sizeof ( int ), VAR_5, VAR_7->distance );
        }


        VAR_7->filtered_lines = VAR_8;
        FUNC_8 ( VAR_9 );
    }
    else{
        for ( unsigned int VAR_19 = 0; VAR_19 < VAR_7->num_lines; VAR_19++ ) {
            VAR_7->line_map[VAR_19] = VAR_19;
        }
        VAR_7->filtered_lines = VAR_7->num_lines;
    }
    FUNC_20 ( VAR_7->list_view, VAR_7->filtered_lines );

    if ( VAR_7->tb_filtered_rows ) {
        char *VAR_20 = FUNC_14("%u", VAR_7->filtered_lines);
        FUNC_28( VAR_7->tb_filtered_rows, VAR_20 );
        FUNC_8(VAR_20);
    }
    if ( VAR_7->tb_total_rows ) {
        char *VAR_21 = FUNC_14("%u", VAR_7->num_lines);
        FUNC_28( VAR_7->tb_total_rows, VAR_21 );
        FUNC_8(VAR_21);
    }



    if ( VAR_3.auto_select == VAR_2 && VAR_7->filtered_lines == 1 && VAR_7->num_lines > 1 ) {
        ( VAR_7->selected_line ) = VAR_7->line_map[FUNC_19 ( VAR_7->list_view )];
        VAR_7->retv = VAR_1;
        VAR_7->quit = VAR_2;
    }

    int VAR_22 = FUNC_23 ( VAR_7 );
    if ( VAR_22 != VAR_7->height ) {
        VAR_7->height = VAR_22;
        FUNC_24 ( VAR_7 );
        FUNC_26 ( VAR_7 );
        FUNC_7 ( "Resize based on re-filter" );
    }
    VAR_7->refilter = VAR_0;
    FUNC_2 ( "Filter done" );
}
