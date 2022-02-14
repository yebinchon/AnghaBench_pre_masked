
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_11__ {int strings; } ;
struct TYPE_10__ {int num_cols; int view; TYPE_6__* db; TYPE_2__* columns; TYPE_1__* table; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_8__ {scalar_t__ persistent; scalar_t__* data_persistent; } ;
typedef TYPE_3__ MSITABLEVIEW ;
typedef int MSIRECORD ;
typedef int LPWSTR ;
typedef int IStream ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int **) ;
 int FUNC_3 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int,int,int*) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 int FUNC_6 (TYPE_6__*,int ,int *) ;
 int FUNC_7 (TYPE_3__*,int,int *) ;
 int FUNC_8 (TYPE_3__*,int *,int,int*) ;
 int FUNC_9 (int ,int const*,int,int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,int,int*) ;

__attribute__((used)) static UINT FUNC_12( struct tagMSIVIEW *VAR_7, UINT VAR_8, MSIRECORD *VAR_9, UINT VAR_10 )
{
    MSITABLEVIEW *VAR_11 = (MSITABLEVIEW*)VAR_7;
    UINT VAR_12, VAR_13, VAR_14 = VAR_2;

    if ( !VAR_11->table )
        return VAR_1;


    if ( VAR_10 >= (1<<VAR_11->num_cols) )
        return VAR_1;

    for ( VAR_12 = 0; VAR_12 < VAR_11->num_cols; VAR_12++ )
    {
        BOOL VAR_15;


        if ( !(VAR_10&(1<<VAR_12)) )
            continue;

        VAR_15 = (VAR_11->table->persistent != VAR_3) &&
                     (VAR_11->table->data_persistent[VAR_8]);


        VAR_13 = 0;
        if ( !FUNC_3( VAR_9, VAR_12 + 1 ) )
        {
            VAR_14 = FUNC_8 (VAR_11, VAR_9, VAR_12 + 1, &VAR_13);
            if ( FUNC_1(VAR_11->columns[ VAR_12 ].type) )
            {
                IStream *VAR_16;
                LPWSTR VAR_17;

                if ( VAR_14 != VAR_2 )
                    return VAR_0;

                VAR_14 = FUNC_2( VAR_9, VAR_12 + 1, &VAR_16 );
                if ( VAR_14 != VAR_2 )
                    return VAR_14;

                VAR_14 = FUNC_7( VAR_11, VAR_8, &VAR_17 );
                if ( VAR_14 != VAR_2 )
                {
                    FUNC_0( VAR_16 );
                    return VAR_14;
                }

                VAR_14 = FUNC_6( VAR_11->db, VAR_17, VAR_16 );
                FUNC_0( VAR_16 );
                FUNC_10 ( VAR_17 );

                if ( VAR_14 != VAR_2 )
                    return VAR_14;
            }
            else if ( VAR_11->columns[VAR_12].type & VAR_4 )
            {
                UINT VAR_18;

                if ( VAR_14 != VAR_2 )
                {
                    int VAR_19;
                    const WCHAR *VAR_20 = FUNC_11( VAR_9, VAR_12 + 1, &VAR_19 );
                    VAR_13 = FUNC_9( VAR_11->db->strings, VAR_20, VAR_19,
                                          VAR_15 ? VAR_6 : VAR_5 );
                }
                else
                {
                    FUNC_4(&VAR_11->view, VAR_8, VAR_12 + 1, &VAR_18);
                    if (VAR_13 == VAR_18)
                        continue;
                }
            }
            else
            {
                if ( VAR_14 != VAR_2 )
                    return VAR_0;
            }
        }

        VAR_14 = FUNC_5( VAR_11, VAR_8, VAR_12+1, VAR_13 );
        if ( VAR_14 != VAR_2 )
            break;
    }
    return VAR_14;
}
