
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ (* get_dimensions ) (TYPE_2__*,int *,scalar_t__*) ;scalar_t__ (* get_column_info ) (TYPE_2__*,scalar_t__,scalar_t__*,int *,int *,scalar_t__*) ;} ;
typedef TYPE_2__ MSIVIEW ;
typedef scalar_t__ LPCWSTR ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__*,int *,int *,scalar_t__*) ;

UINT FUNC_3( MSIVIEW *VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4, UINT *VAR_5 )
{
    LPCWSTR VAR_6, VAR_7;
    UINT VAR_8, VAR_9, VAR_10;

    VAR_10 = VAR_2->ops->get_dimensions( VAR_2, ((void*)0), &VAR_9 );
    if( VAR_10 != VAR_1 )
        return VAR_10;

    for( VAR_8=1; VAR_8<=VAR_9; VAR_8++ )
    {
        INT VAR_11;

        VAR_10 = VAR_2->ops->get_column_info( VAR_2, VAR_8, &VAR_6, ((void*)0),
                                         ((void*)0), &VAR_7 );
        if( VAR_10 != VAR_1 )
            return VAR_10;
        VAR_11 = FUNC_0( VAR_3, VAR_6 );
        if( VAR_4 )
            VAR_11 |= FUNC_0( VAR_4, VAR_7 );
        if( !VAR_11 )
        {
            *VAR_5 = VAR_8;
            return VAR_1;
        }
    }
    return VAR_0;
}
