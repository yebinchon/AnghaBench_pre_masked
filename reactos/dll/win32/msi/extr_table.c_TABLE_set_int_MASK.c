
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {scalar_t__ offset; int * hash_table; } ;
struct TYPE_6__ {int num_cols; scalar_t__ row_size; TYPE_1__* table; TYPE_3__* columns; int db; } ;
struct TYPE_5__ {int row_count; int** data; } ;
typedef TYPE_2__ MSITABLEVIEW ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static UINT FUNC_3( MSITABLEVIEW *VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7 )
{
    UINT VAR_8, VAR_9, VAR_10;

    if( !VAR_4->table )
        return VAR_1;

    if( (VAR_6==0) || (VAR_6>VAR_4->num_cols) )
        return VAR_1;

    if( VAR_5 >= VAR_4->table->row_count )
        return VAR_1;

    if( VAR_4->columns[VAR_6-1].offset >= VAR_4->row_size )
    {
        FUNC_0("Stuffed up %d >= %d\n", VAR_4->columns[VAR_6-1].offset, VAR_4->row_size );
        FUNC_0("%p %p\n", VAR_4, VAR_4->columns );
        return VAR_0;
    }

    FUNC_2( VAR_4->columns[VAR_6-1].hash_table );
    VAR_4->columns[VAR_6-1].hash_table = ((void*)0);

    VAR_9 = FUNC_1( VAR_4->db, &VAR_4->columns[VAR_6 - 1], VAR_3 );
    if ( VAR_9 != 2 && VAR_9 != 3 && VAR_9 != 4 )
    {
        FUNC_0("oops! what is %d bytes per column?\n", VAR_9 );
        return VAR_0;
    }

    VAR_8 = VAR_4->columns[VAR_6-1].offset;
    for ( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ )
        VAR_4->table->data[VAR_5][VAR_8 + VAR_10] = (VAR_7 >> VAR_10 * 8) & 0xff;

    return VAR_2;
}
