
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int metrics; int layout; } ;
typedef TYPE_1__ textbox ;
struct TYPE_10__ {int metrics; int pfd; scalar_t__ height; } ;
typedef TYPE_2__ TBFontConfig ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,char const*) ;
 TYPE_2__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 char* FUNC_12 (int ,char*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_13 ( textbox *VAR_3 )
{
    VAR_3->metrics = VAR_1;
    const char * VAR_4 = FUNC_12 ( FUNC_0 ( VAR_3 ), "font", ((void*)0) );
    if ( VAR_4 ) {
        TBFontConfig *VAR_5 = FUNC_3 ( VAR_2, VAR_4 );
        if ( VAR_5 == ((void*)0) ) {
            VAR_5 = FUNC_4 ( sizeof ( TBFontConfig ) );
            VAR_5->pfd = FUNC_8 ( VAR_4 );
            if ( FUNC_5 ( VAR_5->pfd, VAR_4 ) ) {
                VAR_5->metrics = FUNC_6 ( VAR_0, VAR_5->pfd, ((void*)0) );
                VAR_5->height = FUNC_9 ( VAR_5->metrics ) + FUNC_10 ( VAR_5->metrics );


                FUNC_2 ( VAR_2, (char *) VAR_4, VAR_5 );
            }
            else {
                FUNC_7 ( VAR_5->pfd );
                FUNC_1 ( VAR_5 );
                VAR_5 = ((void*)0);
            }
        }
        if ( VAR_5 ) {

            FUNC_11 ( VAR_3->layout, VAR_5->pfd );
            VAR_3->metrics = VAR_5->metrics;
        }
    }
}
