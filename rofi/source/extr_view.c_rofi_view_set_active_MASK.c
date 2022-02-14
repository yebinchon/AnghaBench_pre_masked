
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int views; } ;
typedef int RofiViewState ;


 TYPE_1__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

void FUNC_7 ( RofiViewState *VAR_2 )
{
    if ( VAR_1 != ((void*)0) && VAR_2 != ((void*)0) ) {
        FUNC_4 ( &( VAR_0.views ), VAR_1 );

        VAR_1 = VAR_2;
        FUNC_1 ( "stack view." );
        FUNC_6 ( VAR_1 );
        FUNC_5 ();
        return;
    }
    else if ( VAR_2 == ((void*)0) && !FUNC_2 ( &( VAR_0.views ) ) ) {
        FUNC_1 ( "pop view." );
        VAR_1 = FUNC_3 ( &( VAR_0.views ) );
        FUNC_6 ( VAR_1 );
        FUNC_5 ();
        return;
    }
    FUNC_0 ( ( VAR_1 == ((void*)0) && VAR_2 != ((void*)0) ) || ( VAR_1 != ((void*)0) && VAR_2 == ((void*)0) ) );
    VAR_1 = VAR_2;
    FUNC_5 ();
}
