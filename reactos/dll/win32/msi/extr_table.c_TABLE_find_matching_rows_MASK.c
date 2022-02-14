
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct tagMSIVIEW {TYPE_2__* ops; } ;
typedef int UINT ;
struct TYPE_16__ {int value; int row; struct TYPE_16__* next; } ;
struct TYPE_15__ {int num_cols; scalar_t__ row_size; TYPE_11__* columns; TYPE_1__* table; } ;
struct TYPE_14__ {scalar_t__ (* fetch_int ) (struct tagMSIVIEW*,int,int,int*) ;} ;
struct TYPE_13__ {int row_count; } ;
struct TYPE_12__ {scalar_t__ offset; TYPE_4__** hash_table; } ;
typedef TYPE_3__ MSITABLEVIEW ;
typedef TYPE_4__ const* MSIITERHANDLE ;
typedef TYPE_4__ MSICOLUMNHASHENTRY ;


 int FUNC_0 (char*,TYPE_3__*,TYPE_11__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,struct tagMSIVIEW*,int,int,TYPE_4__ const*) ;
 int FUNC_2 (TYPE_4__**,int ,int) ;
 TYPE_4__** FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct tagMSIVIEW*,int,int,int*) ;

__attribute__((used)) static UINT FUNC_5( struct tagMSIVIEW *VAR_6, UINT VAR_7,
    UINT VAR_8, UINT *VAR_9, MSIITERHANDLE *VAR_10 )
{
    MSITABLEVIEW *VAR_11 = (MSITABLEVIEW*)VAR_6;
    const MSICOLUMNHASHENTRY *VAR_12;

    FUNC_1("%p, %d, %u, %p\n", VAR_6, VAR_7, VAR_8, *VAR_10);

    if( !VAR_11->table )
        return VAR_1;

    if( (VAR_7==0) || (VAR_7 > VAR_11->num_cols) )
        return VAR_1;

    if( !VAR_11->columns[VAR_7-1].hash_table )
    {
        UINT VAR_13;
        UINT VAR_14 = VAR_11->table->row_count;
        MSICOLUMNHASHENTRY **VAR_15;
        MSICOLUMNHASHENTRY *VAR_16;

        if( VAR_11->columns[VAR_7-1].offset >= VAR_11->row_size )
        {
            FUNC_0("Stuffed up %d >= %d\n", VAR_11->columns[VAR_7-1].offset, VAR_11->row_size );
            FUNC_0("%p %p\n", VAR_11, VAR_11->columns );
            return VAR_0;
        }



        VAR_15 = FUNC_3(VAR_5 * sizeof(MSICOLUMNHASHENTRY*) +
            VAR_14 * sizeof(MSICOLUMNHASHENTRY));
        if (!VAR_15)
            return VAR_3;

        FUNC_2(VAR_15, 0, VAR_5 * sizeof(MSICOLUMNHASHENTRY*));
        VAR_11->columns[VAR_7-1].hash_table = VAR_15;

        VAR_16 = (MSICOLUMNHASHENTRY *)(VAR_15 + VAR_5);

        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++, VAR_16++)
        {
            UINT VAR_17;

            if (VAR_6->ops->fetch_int( VAR_6, VAR_13, VAR_7, &VAR_17 ) != VAR_4)
                continue;

            VAR_16->next = ((void*)0);
            VAR_16->value = VAR_17;
            VAR_16->row = VAR_13;
            if (VAR_15[VAR_17 % VAR_5])
            {
                MSICOLUMNHASHENTRY *VAR_18 = VAR_15[VAR_17 % VAR_5];
                while (VAR_18->next)
                    VAR_18 = VAR_18->next;
                VAR_18->next = VAR_16;
            }
            else
                VAR_15[VAR_17 % VAR_5] = VAR_16;
        }
    }

    if( !*VAR_10 )
        VAR_12 = VAR_11->columns[VAR_7-1].hash_table[VAR_8 % VAR_5];
    else
        VAR_12 = (*VAR_10)->next;

    while (VAR_12 && VAR_12->value != VAR_8)
        VAR_12 = VAR_12->next;

    *VAR_10 = VAR_12;
    if (!VAR_12)
        return VAR_2;

    *VAR_9 = VAR_12->row;

    return VAR_4;
}
