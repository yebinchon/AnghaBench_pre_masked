
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {size_t num_cols; TYPE_1__* columns; } ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {int type; int name; } ;
typedef int * BSTR ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 struct table* FUNC_1 (int const*) ;
 int FUNC_2 (struct table*) ;

BSTR FUNC_3( const WCHAR *VAR_1, UINT VAR_2 )
{
    struct table *VAR_3;
    UINT VAR_4, VAR_5 = 0;
    BSTR VAR_6;

    if (!(VAR_3 = FUNC_1( VAR_1 ))) return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_3->num_cols; VAR_4++)
    {
        if (VAR_3->columns[VAR_4].type & VAR_0)
        {
            if (VAR_2 == VAR_5)
            {
                VAR_6 = FUNC_0( VAR_3->columns[VAR_4].name );
                FUNC_2( VAR_3 );
                return VAR_6;
            }
            VAR_5++;
        }
    }
    FUNC_2( VAR_3 );
    return ((void*)0);
}
