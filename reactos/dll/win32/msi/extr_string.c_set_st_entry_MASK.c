
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t maxcount; size_t freeslot; TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef enum StringPersistence { ____Placeholder_StringPersistence } StringPersistence ;
typedef int WCHAR ;
typedef void* USHORT ;
typedef size_t UINT ;
struct TYPE_5__ {int len; int * data; void* nonpersistent_refcount; void* persistent_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_1( string_table *VAR_1, UINT VAR_2, WCHAR *VAR_3, int VAR_4, USHORT VAR_5,
                          enum StringPersistence VAR_6 )
{
    if (VAR_6 == VAR_0)
    {
        VAR_1->strings[VAR_2].persistent_refcount = VAR_5;
        VAR_1->strings[VAR_2].nonpersistent_refcount = 0;
    }
    else
    {
        VAR_1->strings[VAR_2].persistent_refcount = 0;
        VAR_1->strings[VAR_2].nonpersistent_refcount = VAR_5;
    }

    VAR_1->strings[VAR_2].data = VAR_3;
    VAR_1->strings[VAR_2].len = VAR_4;

    FUNC_0( VAR_1, VAR_2 );

    if( VAR_2 < VAR_1->maxcount )
        VAR_1->freeslot = VAR_2 + 1;
}
