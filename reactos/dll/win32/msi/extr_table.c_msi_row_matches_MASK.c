
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t num_cols; int view; TYPE_1__* columns; } ;
struct TYPE_4__ {int type; } ;
typedef TYPE_2__ MSITABLEVIEW ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int *,size_t,size_t,size_t*) ;

__attribute__((used)) static UINT FUNC_2( MSITABLEVIEW *VAR_3, UINT VAR_4, const UINT *VAR_5, UINT *VAR_6 )
{
    UINT VAR_7, VAR_8, VAR_9, VAR_10 = VAR_0;

    for( VAR_7=0; VAR_7<VAR_3->num_cols; VAR_7++ )
    {
        if ( ~VAR_3->columns[VAR_7].type & VAR_2 )
            continue;


        VAR_8 = FUNC_1( &VAR_3->view, VAR_4, VAR_7+1, &VAR_9 );
        if ( VAR_8 != VAR_1 )
        {
            FUNC_0("TABLE_fetch_int shouldn't fail here\n");
            break;
        }


        if ( VAR_9 != VAR_5[VAR_7] )
        {
            VAR_10 = VAR_0;
            break;
        }
        if (VAR_6) *VAR_6 = VAR_7;
        VAR_10 = VAR_1;
    }
    return VAR_10;
}
