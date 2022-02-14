
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_4__ {TYPE_1__* table; int num_cols; } ;
struct TYPE_3__ {int row_count; } ;
typedef TYPE_2__ MSITABLEVIEW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int *,int *) ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_2, UINT *VAR_3, UINT *VAR_4)
{
    MSITABLEVIEW *VAR_5 = (MSITABLEVIEW*)VAR_2;

    FUNC_0("%p %p %p\n", VAR_2, VAR_3, VAR_4 );

    if( VAR_4 )
        *VAR_4 = VAR_5->num_cols;
    if( VAR_3 )
    {
        if( !VAR_5->table )
            return VAR_0;
        *VAR_3 = VAR_5->table->row_count;
    }

    return VAR_1;
}
