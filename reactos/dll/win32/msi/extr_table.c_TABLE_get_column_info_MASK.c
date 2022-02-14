
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_5__ {int num_cols; TYPE_1__* columns; } ;
struct TYPE_4__ {int type; int temporary; int tablename; int colname; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,int,int *,int*) ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_3,
                UINT VAR_4, LPCWSTR *VAR_5, UINT *VAR_6, BOOL *VAR_7,
                LPCWSTR *VAR_8 )
{
    MSITABLEVIEW *VAR_9 = (MSITABLEVIEW*)VAR_3;

    FUNC_0("%p %d %p %p\n", VAR_9, VAR_4, VAR_5, VAR_6 );

    if( ( VAR_4 == 0 ) || ( VAR_4 > VAR_9->num_cols ) )
        return VAR_1;

    if( VAR_5 )
    {
        *VAR_5 = VAR_9->columns[VAR_4-1].colname;
        if( !*VAR_5 )
            return VAR_0;
    }

    if( VAR_8 )
    {
        *VAR_8 = VAR_9->columns[VAR_4-1].tablename;
        if( !*VAR_8 )
            return VAR_0;
    }

    if( VAR_6 )
        *VAR_6 = VAR_9->columns[VAR_4-1].type;

    if( VAR_7 )
        *VAR_7 = VAR_9->columns[VAR_4-1].temporary;

    return VAR_2;
}
