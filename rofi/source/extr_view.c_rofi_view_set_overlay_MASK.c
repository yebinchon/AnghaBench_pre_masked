
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * overlay; int * list_view; } ;
typedef TYPE_1__ RofiViewState ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5 ( RofiViewState *VAR_0, const char *VAR_1 )
{
    if ( VAR_0->overlay == ((void*)0) || VAR_0->list_view == ((void*)0) ) {
        return;
    }
    if ( VAR_1 == ((void*)0) ) {
        FUNC_3 ( FUNC_0 ( VAR_0->overlay ) );
        return;
    }
    FUNC_4 ( FUNC_0 ( VAR_0->overlay ) );
    FUNC_2 ( VAR_0->overlay, VAR_1 );

    FUNC_1 ( );
}
