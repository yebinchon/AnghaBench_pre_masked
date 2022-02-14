
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t gsize ;
struct TYPE_4__ {int comment; int binding; int name; } ;
typedef TYPE_1__ ActionBindingEntry ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,void**,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_3 ( void )
{
    for ( gsize VAR_2 = 0; VAR_2 < FUNC_0 ( VAR_0 ); ++VAR_2 ) {
        ActionBindingEntry *VAR_3 = &VAR_0[VAR_2];
        VAR_3->binding = FUNC_2 ( VAR_3->binding );
        FUNC_1 ( VAR_1, VAR_3->name, (void * *) &( VAR_3->binding ), VAR_3->comment );
    }
}
