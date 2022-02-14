
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ gpointer ;
struct TYPE_14__ {unsigned int num_widgets; struct TYPE_14__** widgets; int properties; struct TYPE_14__* parent; int name; } ;
typedef TYPE_1__ ThemeWidget ;
struct TYPE_16__ {scalar_t__ next; int * prev; scalar_t__ data; } ;
struct TYPE_15__ {int name; } ;
typedef TYPE_2__ Property ;
typedef TYPE_3__ GList ;
typedef int GHashTableIter ;


 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*,scalar_t__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char) ;
 int FUNC_12 (size_t,int,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14 ( ThemeWidget *VAR_1 )
{
    GHashTableIter VAR_2;
    gpointer VAR_3, VAR_4;
    if ( VAR_1->properties ) {
        int VAR_5 = 0;
        GList *VAR_6 = ((void*)0);
        ThemeWidget *VAR_7 = VAR_1;
        while ( VAR_7 ) {
            if ( FUNC_9 ( VAR_7->name, "Root" ) == 0 ) {
                break;
            }
            VAR_6 = FUNC_8 ( VAR_6, VAR_7->name );
            VAR_7 = VAR_7->parent;
        }
        if ( FUNC_6 ( VAR_6 ) > 0 ) {
            VAR_5 = 4;
            for ( GList *VAR_8 = FUNC_4 ( VAR_6 ); VAR_8 != ((void*)0); VAR_8 = FUNC_7 ( VAR_8 ) ) {
                char *VAR_9 = (char *) VAR_8->data;
                FUNC_1 ( VAR_9, VAR_0 );
                if ( VAR_8->prev == ((void*)0) && VAR_8->next ) {
                    FUNC_11 ( ' ' );
                }
                else if ( VAR_8->next ) {
                    FUNC_11 ( '.' );
                }
            }
            FUNC_10 ( " {\n" );
        }
        else {
            VAR_5 = 4;
            FUNC_10 ( "* {\n" );
        }
        size_t VAR_10 = 0;
        FUNC_2 ( &VAR_2, VAR_1->properties );
        while ( FUNC_3 ( &VAR_2, &VAR_3, &VAR_4 ) ) {
            Property *VAR_11 = (Property *) VAR_4;
            VAR_10 = FUNC_0 ( FUNC_13 ( VAR_11->name ), VAR_10 );
        }
        FUNC_2 ( &VAR_2, VAR_1->properties );
        while ( FUNC_3 ( &VAR_2, &VAR_3, &VAR_4 ) ) {
            Property *VAR_12 = (Property *) VAR_4;
            FUNC_12 ( VAR_10, VAR_5, VAR_12 );
        }
        FUNC_10 ( "}\n" );
        FUNC_5 ( VAR_6 );
    }
    for ( unsigned int VAR_13 = 0; VAR_13 < VAR_1->num_widgets; VAR_13++ ) {
        FUNC_14 ( VAR_1->widgets[VAR_13] );
    }
}
