
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_6__ {size_t num_cols; TYPE_1__* columns; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_1 (int *,size_t) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,size_t,int*) ;
 size_t FUNC_4 (TYPE_2__*,int *,size_t*,size_t*) ;

__attribute__((used)) static UINT FUNC_5( MSITABLEVIEW *VAR_6, MSIRECORD *VAR_7, UINT *VAR_8 )
{
    UINT VAR_9, VAR_10, VAR_11;


    for( VAR_11 = 0; VAR_11 < VAR_6->num_cols; VAR_11++ )
    {
        if ( VAR_6->columns[VAR_11].type & VAR_3 )
            continue;

        if ( FUNC_0(VAR_6->columns[VAR_11].type) )
            FUNC_2("skipping binary column\n");
        else if ( VAR_6->columns[VAR_11].type & VAR_4 )
        {
            int VAR_12;
            const WCHAR *VAR_13 = FUNC_3( VAR_7, VAR_11+1, &VAR_12 );

            if (!VAR_13 || (!VAR_13[0] && !VAR_12))
            {
                if (VAR_8) *VAR_8 = VAR_11;
                return VAR_1;
            }
        }
        else
        {
            UINT VAR_14;

            VAR_14 = FUNC_1( VAR_7, VAR_11+1 );
            if (VAR_14 == VAR_5)
            {
                if (VAR_8) *VAR_8 = VAR_11;
                return VAR_1;
            }
        }
    }


    VAR_9 = FUNC_4( VAR_6, VAR_7, &VAR_10, VAR_8 );
    if (VAR_9 == VAR_2)
        return VAR_0;

    return VAR_2;
}
