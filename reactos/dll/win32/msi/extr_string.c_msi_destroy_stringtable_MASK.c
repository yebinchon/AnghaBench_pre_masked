
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t maxcount; struct TYPE_4__* sorted; struct TYPE_4__* strings; struct TYPE_4__* data; scalar_t__ nonpersistent_refcount; scalar_t__ persistent_refcount; } ;
typedef TYPE_1__ string_table ;
typedef int VOID ;
typedef size_t UINT ;


 int FUNC_0 (TYPE_1__*) ;

VOID FUNC_1( string_table *VAR_0 )
{
    UINT VAR_1;

    for( VAR_1=0; VAR_1<VAR_0->maxcount; VAR_1++ )
    {
        if( VAR_0->strings[VAR_1].persistent_refcount ||
            VAR_0->strings[VAR_1].nonpersistent_refcount )
            FUNC_0( VAR_0->strings[VAR_1].data );
    }
    FUNC_0( VAR_0->strings );
    FUNC_0( VAR_0->sorted );
    FUNC_0( VAR_0 );
}
