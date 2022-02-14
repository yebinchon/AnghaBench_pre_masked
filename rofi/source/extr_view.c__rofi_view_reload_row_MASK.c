
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_lines; int list_view; void* distance; void* line_map; int sw; } ;
typedef TYPE_1__ RofiViewState ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 ( RofiViewState *VAR_0 )
{
    FUNC_0 ( VAR_0->line_map );
    FUNC_0 ( VAR_0->distance );
    VAR_0->num_lines = FUNC_3 ( VAR_0->sw );
    VAR_0->line_map = FUNC_1 ( VAR_0->num_lines, sizeof ( unsigned int ) );
    VAR_0->distance = FUNC_1 ( VAR_0->num_lines, sizeof ( int ) );
    FUNC_2 ( VAR_0->list_view, VAR_0->num_lines );
    FUNC_4 ( VAR_0 );
}
