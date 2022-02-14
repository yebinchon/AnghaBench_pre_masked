
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int combi_modi; } ;
struct TYPE_7__ {int * mode; void* disable; } ;
struct TYPE_6__ {int num_switchers; TYPE_2__* switchers; } ;
typedef int Mode ;
typedef TYPE_1__ CombiModePrivateData ;
typedef TYPE_2__ CombiMode ;


 void* VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (char*) ;
 char* FUNC_7 (char*,char const* const,char**) ;

__attribute__((used)) static void FUNC_8 ( Mode *VAR_2 )
{
    CombiModePrivateData *VAR_3 = FUNC_4 ( VAR_2 );
    char *VAR_4 = ((void*)0);

    char *VAR_5 = FUNC_2 ( VAR_1.combi_modi );
    const char * const VAR_6 = ",#";

    for ( char *VAR_7 = FUNC_7 ( VAR_5, VAR_6, &VAR_4 ); VAR_7 != ((void*)0);
          VAR_7 = FUNC_7 ( ((void*)0), VAR_6, &VAR_4 ) ) {

        VAR_3->switchers = (CombiMode *) FUNC_1 ( VAR_3->switchers,
                                                   sizeof ( CombiMode ) * ( VAR_3->num_switchers + 1 ) );

        Mode *VAR_8 = FUNC_5 ( VAR_7 );
        if ( VAR_8 ) {
            VAR_3->switchers[VAR_3->num_switchers].disable = VAR_0;
            VAR_3->switchers[VAR_3->num_switchers++].mode = VAR_8;
        }
        else {

            Mode *VAR_9 = FUNC_6 ( VAR_7 );
            if ( VAR_9 != ((void*)0) ) {
                VAR_3->switchers[VAR_3->num_switchers].disable = VAR_0;
                VAR_3->switchers[VAR_3->num_switchers++].mode = VAR_9;
            }
            else {

                FUNC_3 ( "Invalid script switcher: %s", VAR_7 );
                VAR_7 = ((void*)0);
            }
        }
    }

    FUNC_0 ( VAR_5 );
}
