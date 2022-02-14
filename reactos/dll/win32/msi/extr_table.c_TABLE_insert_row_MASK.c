
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_6__ {int num_cols; TYPE_1__* table; int row_size; } ;
struct TYPE_5__ {int row_count; int* data_persistent; int ** data; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int MSIRECORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tagMSIVIEW*,int,int *,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct tagMSIVIEW*,int*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static UINT FUNC_6( struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3, UINT VAR_4, BOOL VAR_5 )
{
    MSITABLEVIEW *VAR_6 = (MSITABLEVIEW*)VAR_2;
    UINT VAR_7, VAR_8;

    FUNC_1("%p %p %s\n", VAR_6, VAR_3, VAR_5 ? "TRUE" : "FALSE" );


    VAR_8 = FUNC_5( VAR_6, VAR_3, ((void*)0) );
    if( VAR_8 != VAR_1 )
        return VAR_0;

    if (VAR_4 == -1)
        VAR_4 = FUNC_2( VAR_6, VAR_3 );

    VAR_8 = FUNC_4( VAR_2, &VAR_4, VAR_5 );
    FUNC_1("insert_row returned %08x\n", VAR_8);
    if( VAR_8 != VAR_1 )
        return VAR_8;


    for (VAR_7 = VAR_6->table->row_count - 1; VAR_7 > VAR_4; VAR_7--)
    {
        FUNC_3(&(VAR_6->table->data[VAR_7][0]),
                &(VAR_6->table->data[VAR_7 - 1][0]), VAR_6->row_size);
        VAR_6->table->data_persistent[VAR_7] = VAR_6->table->data_persistent[VAR_7 - 1];
    }


    VAR_6->table->data_persistent[VAR_4] = !VAR_5;
    return FUNC_0( VAR_2, VAR_4, VAR_3, (1<<VAR_6->num_cols) - 1 );
}
