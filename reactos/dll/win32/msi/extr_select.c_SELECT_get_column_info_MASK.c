
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int num_cols; int* cols; TYPE_3__* table; } ;
struct TYPE_5__ {int (* get_column_info ) (TYPE_3__*,int,int *,int*,int *,int *) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_2__*,int,int *,int*,int *,int *) ;
 int FUNC_1 (TYPE_3__*,int,int *,int*,int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_6, UINT VAR_7, LPCWSTR *VAR_8,
                                    UINT *VAR_9, BOOL *VAR_10, LPCWSTR *VAR_11 )
{
    MSISELECTVIEW *VAR_12 = (MSISELECTVIEW*)VAR_6;

    FUNC_0("%p %d %p %p %p %p\n", VAR_12, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 );

    if( !VAR_12->table )
         return VAR_0;

    if( !VAR_7 || VAR_7 > VAR_12->num_cols )
         return VAR_0;

    VAR_7 = VAR_12->cols[ VAR_7 - 1 ];
    if( !VAR_7 )
    {
        if (VAR_8) *VAR_8 = VAR_5;
        if (VAR_9) *VAR_9 = VAR_3 | VAR_4;
        if (VAR_10) *VAR_10 = VAR_2;
        if (VAR_11) *VAR_11 = VAR_5;
        return VAR_1;
    }
    return VAR_12->table->ops->get_column_info( VAR_12->table, VAR_7, VAR_8,
                                            VAR_9, VAR_10, VAR_11 );
}
