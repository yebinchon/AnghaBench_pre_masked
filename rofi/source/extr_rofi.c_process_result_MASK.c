
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * sw; } ;
typedef TYPE_1__ RofiViewState ;
typedef int ModeMode ;
typedef int Mode ;
typedef int MenuReturn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char**,unsigned int) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void FUNC_10 ( RofiViewState *VAR_8 )
{
    Mode *VAR_9 = VAR_8->sw;
    FUNC_8 ( ((void*)0) );
    if ( VAR_9 != ((void*)0) ) {
        unsigned int VAR_10 = FUNC_6 ( VAR_8 );;
        MenuReturn VAR_11 = FUNC_5 ( VAR_8 );
        char *VAR_12 = FUNC_1 ( FUNC_7 ( VAR_8 ) );
        ModeMode VAR_13 = FUNC_2 ( VAR_9, VAR_11, &VAR_12, VAR_10 );
        FUNC_0 ( VAR_12 );

        ModeMode VAR_14 = VAR_5;

        if ( VAR_13 == VAR_1 ) {
            VAR_14 = ( VAR_14 + 1 ) % VAR_7;
        }
        else if ( VAR_13 == VAR_2 ) {
            if ( VAR_14 == 0 ) {
                VAR_14 = VAR_7 - 1;
            }
            else {
                VAR_14 = ( VAR_14 - 1 ) % VAR_7;
            }
        }
        else if ( VAR_13 == VAR_3 ) {

        }
        else if ( VAR_13 == VAR_4 ) {
            FUNC_3 ( VAR_8 );
        }
        else if ( VAR_13 < VAR_0 ) {
            VAR_14 = ( VAR_13 ) % VAR_7;
        }
        else {
            VAR_14 = VAR_13;
        }
        if ( VAR_14 != VAR_0 ) {



            FUNC_9 ( VAR_8, VAR_6[VAR_14] );
            FUNC_8 ( VAR_8 );
            VAR_5 = VAR_14;
            return;
        }
    }
    FUNC_4 ( VAR_8 );
}
