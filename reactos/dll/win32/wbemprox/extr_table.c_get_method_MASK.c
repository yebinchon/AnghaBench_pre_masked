
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {scalar_t__ num_rows; scalar_t__ num_cols; TYPE_1__* columns; } ;
typedef int class_method ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {int type; int name; } ;
typedef scalar_t__ LONGLONG ;
typedef scalar_t__ INT_PTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct table const*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ,int const*) ;

HRESULT FUNC_2( const struct table *VAR_3, const WCHAR *VAR_4, class_method **VAR_5 )
{
    UINT VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_3->num_rows; VAR_6++)
    {
        for (VAR_7 = 0; VAR_7 < VAR_3->num_cols; VAR_7++)
        {
            if (VAR_3->columns[VAR_7].type & VAR_0 && !FUNC_1( VAR_3->columns[VAR_7].name, VAR_4 ))
            {
                HRESULT VAR_8;
                LONGLONG VAR_9;

                if ((VAR_8 = FUNC_0( VAR_3, VAR_6, VAR_7, &VAR_9 )) != VAR_1) return VAR_8;
                *VAR_5 = (class_method *)(INT_PTR)VAR_9;
                return VAR_1;
            }
        }
    }
    return VAR_2;

}
