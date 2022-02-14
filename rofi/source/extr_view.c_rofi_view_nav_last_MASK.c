
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ filtered_lines; int list_view; } ;
typedef TYPE_1__ RofiViewState ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) inline static void FUNC_1 ( RofiViewState * VAR_0 )
{

    if ( VAR_0->filtered_lines == 0 ) {
        return;
    }

    FUNC_0 ( VAR_0->list_view, -1 );
}
