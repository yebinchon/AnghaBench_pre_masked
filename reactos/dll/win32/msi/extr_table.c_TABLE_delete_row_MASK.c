
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ num_cols; TYPE_2__* table; int row_size; TYPE_1__* columns; } ;
struct TYPE_6__ {scalar_t__ row_count; int ** data; int * data_persistent; } ;
struct TYPE_5__ {int * hash_table; } ;
typedef TYPE_3__ MSITABLEVIEW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct tagMSIVIEW*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static UINT FUNC_4( struct tagMSIVIEW *VAR_3, UINT VAR_4 )
{
    MSITABLEVIEW *VAR_5 = (MSITABLEVIEW*)VAR_3;
    UINT VAR_6, VAR_7, VAR_8, VAR_9;

    FUNC_1("%p %d\n", VAR_5, VAR_4);

    if ( !VAR_5->table )
        return VAR_1;

    VAR_6 = FUNC_0( VAR_3, &VAR_7, &VAR_8 );
    if ( VAR_6 != VAR_2 )
        return VAR_6;

    if ( VAR_4 >= VAR_7 )
        return VAR_0;

    VAR_7 = VAR_5->table->row_count;
    VAR_5->table->row_count--;


    for (VAR_9 = 0; VAR_9 < VAR_5->num_cols; VAR_9++)
    {
        FUNC_3( VAR_5->columns[VAR_9].hash_table );
        VAR_5->columns[VAR_9].hash_table = ((void*)0);
    }

    for (VAR_9 = VAR_4 + 1; VAR_9 < VAR_7; VAR_9++)
    {
        FUNC_2(VAR_5->table->data[VAR_9 - 1], VAR_5->table->data[VAR_9], VAR_5->row_size);
        VAR_5->table->data_persistent[VAR_9 - 1] = VAR_5->table->data_persistent[VAR_9];
    }

    FUNC_3(VAR_5->table->data[VAR_7 - 1]);

    return VAR_2;
}
