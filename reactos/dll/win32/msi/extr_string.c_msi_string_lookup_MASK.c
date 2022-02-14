
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t maxcount; TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_4__ {int len; int const* data; int nonpersistent_refcount; int persistent_refcount; } ;


 int const* VAR_0 ;

const WCHAR *FUNC_0( const string_table *VAR_1, UINT VAR_2, int *VAR_3 )
{
    if( VAR_2 == 0 )
    {
        if (VAR_3) *VAR_3 = 0;
        return VAR_0;
    }
    if( VAR_2 >= VAR_1->maxcount )
        return ((void*)0);

    if( VAR_2 && !VAR_1->strings[VAR_2].persistent_refcount && !VAR_1->strings[VAR_2].nonpersistent_refcount)
        return ((void*)0);

    if (VAR_3) *VAR_3 = VAR_1->strings[VAR_2].len;

    return VAR_1->strings[VAR_2].data;
}
