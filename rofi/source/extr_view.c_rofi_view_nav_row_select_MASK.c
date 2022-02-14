
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int filtered_lines; int refilter; int text; int * line_map; int sw; int * list_view; } ;
typedef TYPE_1__ RofiViewState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) inline static void FUNC_5 ( RofiViewState *VAR_2 )
{
    if ( VAR_2->list_view == ((void*)0) ) {
        return;
    }
    unsigned int VAR_3 = FUNC_1 ( VAR_2->list_view );

    if ( VAR_3 < VAR_2->filtered_lines ) {
        char *VAR_4 = FUNC_2 ( VAR_2->sw, VAR_2->line_map[VAR_3] );
        FUNC_4 ( VAR_2->text, VAR_4 );
        FUNC_0 ( VAR_4 );
        FUNC_3 ( VAR_2->text, VAR_0 );
        VAR_2->refilter = VAR_1;
    }
}
