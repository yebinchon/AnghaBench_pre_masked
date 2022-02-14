
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int col_count; int row_count; int reorder; int tables; } ;
typedef TYPE_1__ MSIWHEREVIEW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_2, UINT *VAR_3, UINT *VAR_4 )
{
    MSIWHEREVIEW *VAR_5 = (MSIWHEREVIEW*)VAR_2;

    FUNC_0("%p %p %p\n", VAR_5, VAR_3, VAR_4 );

    if(!VAR_5->tables)
         return VAR_0;

    if (VAR_3)
    {
        if (!VAR_5->reorder)
            return VAR_0;
        *VAR_3 = VAR_5->row_count;
    }

    if (VAR_4)
        *VAR_4 = VAR_5->col_count;

    return VAR_1;
}
