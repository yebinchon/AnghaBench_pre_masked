
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int filter; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {int str; } ;
typedef int RofiViewState ;
typedef size_t ModeMode ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__** VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int * FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9 ( ModeMode VAR_8 )
{

    for ( unsigned int VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ ) {
        if ( !FUNC_4 ( VAR_5[VAR_9] ) ) {
            GString *VAR_10 = FUNC_3 ( "Failed to initialize the mode: " );
            FUNC_1 ( VAR_10, VAR_5[VAR_9]->name );
            FUNC_1 ( VAR_10, "\n" );

            FUNC_6 ( VAR_10->str, VAR_0 );
            FUNC_2 ( VAR_10, VAR_1 );
            break;
        }
    }

    if ( FUNC_7 () != ((void*)0) ) {
        return;
    }
    VAR_3 = VAR_8;
    RofiViewState * VAR_11 = FUNC_5 ( VAR_5[VAR_8], VAR_2.filter, 0, VAR_7 );
    if ( VAR_11 ) {
        FUNC_8 ( VAR_11 );
    }
    if ( FUNC_7 () == ((void*)0) ) {
        FUNC_0 ( VAR_4 );
    }
}
