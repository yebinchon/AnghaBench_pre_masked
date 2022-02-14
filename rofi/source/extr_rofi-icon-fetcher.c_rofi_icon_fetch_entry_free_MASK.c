
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ gpointer ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int sizes; int surface; struct TYPE_8__* name; } ;
typedef TYPE_1__ IconFetcherNameEntry ;
typedef TYPE_1__ IconFetcherEntry ;
typedef TYPE_3__ GList ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5 ( gpointer VAR_0 )
{
    IconFetcherNameEntry *VAR_1 = (IconFetcherNameEntry *) VAR_0;


    FUNC_1 ( VAR_1->name );

    for ( GList *VAR_2 = FUNC_2 ( VAR_1->sizes ); VAR_2; VAR_2 = FUNC_4 ( VAR_2 ) ) {
        IconFetcherEntry *VAR_3 = (IconFetcherEntry *) ( VAR_2->data );

        FUNC_0 ( VAR_3->surface );
        FUNC_1 ( VAR_3 );
    }

    FUNC_3 ( VAR_1->sizes );
    FUNC_1 ( VAR_1 );
}
