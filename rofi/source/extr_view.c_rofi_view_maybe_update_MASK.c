
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ refilter; } ;
typedef TYPE_1__ RofiViewState ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void FUNC_6 ( RofiViewState *VAR_1 )
{
    if ( FUNC_3 ( VAR_1 ) ) {

        FUNC_1 ( VAR_1 );

        VAR_1 = FUNC_2 ();


        if ( VAR_1 == ((void*)0) ) {

            FUNC_0 ();
            return;
        }
    }


    if ( VAR_1->refilter ) {
        FUNC_4 ( VAR_1 );
    }
    FUNC_5 ( VAR_1, VAR_0 );
}
