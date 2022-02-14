
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {size_t num_cols; TYPE_1__* columns; } ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {int name; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

HRESULT FUNC_1( const struct table *VAR_2, const WCHAR *VAR_3, UINT *VAR_4 )
{
    UINT VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2->num_cols; VAR_5++)
    {
        if (!FUNC_0( VAR_2->columns[VAR_5].name, VAR_3 ))
        {
            *VAR_4 = VAR_5;
            return VAR_0;
        }
    }
    return VAR_1;
}
