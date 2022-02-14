
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int column; TYPE_2__* table; } ;
union ext_column {TYPE_3__ parsed; } ;
typedef size_t UINT ;
struct TYPE_15__ {TYPE_1__* ops; } ;
struct TYPE_14__ {size_t col_count; size_t error; union ext_column* columns; } ;
struct TYPE_13__ {scalar_t__* values; TYPE_4__* wv; } ;
struct TYPE_12__ {size_t table_count; TYPE_6__* order_info; } ;
struct TYPE_10__ {size_t table_index; TYPE_7__* view; } ;
struct TYPE_9__ {size_t (* fetch_int ) (TYPE_7__*,scalar_t__,int ,size_t*) ;} ;
typedef TYPE_4__ MSIWHEREVIEW ;
typedef TYPE_5__ MSIROWENTRY ;
typedef TYPE_6__ MSIORDERINFO ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_7__*,scalar_t__,int ,size_t*) ;
 size_t FUNC_2 (TYPE_7__*,scalar_t__,int ,size_t*) ;

__attribute__((used)) static int FUNC_3( const void *VAR_1, const void *VAR_2 )
{
    const MSIROWENTRY *VAR_3 = *(const MSIROWENTRY**)VAR_1;
    const MSIROWENTRY *VAR_4 = *(const MSIROWENTRY**)VAR_2;
    const MSIWHEREVIEW *VAR_5 = VAR_3->wv;
    MSIORDERINFO *VAR_6 = VAR_5->order_info;
    UINT VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_0(VAR_3->wv == VAR_4->wv);

    if (VAR_6)
    {
        for (VAR_7 = 0; VAR_7 < VAR_6->col_count; VAR_7++)
        {
            const union ext_column *VAR_12 = &VAR_6->columns[VAR_7];

            VAR_9 = VAR_12->parsed.table->view->ops->fetch_int(VAR_12->parsed.table->view,
                          VAR_3->values[VAR_12->parsed.table->table_index],
                          VAR_12->parsed.column, &VAR_10);
            if (VAR_9 != VAR_0)
            {
                VAR_6->error = VAR_9;
                return 0;
            }

            VAR_9 = VAR_12->parsed.table->view->ops->fetch_int(VAR_12->parsed.table->view,
                          VAR_4->values[VAR_12->parsed.table->table_index],
                          VAR_12->parsed.column, &VAR_11);
            if (VAR_9 != VAR_0)
            {
                VAR_6->error = VAR_9;
                return 0;
            }

            if (VAR_10 != VAR_11)
                return VAR_10 < VAR_11 ? -1 : 1;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_5->table_count; VAR_8++)
    {
        if (VAR_3->values[VAR_8] != VAR_4->values[VAR_8])
            return VAR_3->values[VAR_8] < VAR_4->values[VAR_8] ? -1 : 1;
    }
    return 0;
}
