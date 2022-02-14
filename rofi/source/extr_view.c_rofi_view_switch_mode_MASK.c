
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int num_modi; void* refilter; void* reload; int const* sw; int * modi; scalar_t__ sidebar_bar; scalar_t__ prompt; } ;
typedef TYPE_1__ RofiViewState ;
typedef int const Mode ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10 ( RofiViewState *VAR_3, Mode *VAR_4 )
{
    VAR_3->sw = VAR_4;

    if ( VAR_3->prompt ) {
        FUNC_8 ( VAR_3 );
    }
    if ( VAR_3->sw ) {
        char * VAR_5 = FUNC_1 ( "rofi - %s", FUNC_2 (VAR_3->sw ) );
        FUNC_6 ( VAR_5 );
        FUNC_0 ( VAR_5 );
    } else {
        FUNC_6 ( "rofi" );
    }
    if ( VAR_3->sidebar_bar ) {
        for ( unsigned int VAR_6 = 0; VAR_6 < VAR_3->num_modi; VAR_6++ ) {
            const Mode * VAR_7 = FUNC_3 ( VAR_6 );
            FUNC_9 ( VAR_3->modi[VAR_6], ( VAR_7 == VAR_3->sw ) ? VAR_0 : VAR_1 );
        }
    }
    FUNC_5 ( VAR_3 );
    VAR_3->reload = VAR_2;
    VAR_3->refilter = VAR_2;
    FUNC_4 ( VAR_3 );
    FUNC_7 ( VAR_3, VAR_2 );
}
