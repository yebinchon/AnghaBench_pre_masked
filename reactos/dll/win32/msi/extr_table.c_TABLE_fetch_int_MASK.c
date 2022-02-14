
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ num_cols; scalar_t__ row_size; TYPE_1__* table; TYPE_3__* columns; int db; } ;
struct TYPE_4__ {scalar_t__ row_count; int data; } ;
typedef TYPE_2__ MSITABLEVIEW ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_5, UINT VAR_6, UINT VAR_7, UINT *VAR_8 )
{
    MSITABLEVIEW *VAR_9 = (MSITABLEVIEW*)VAR_5;
    UINT VAR_10, VAR_11;

    if( !VAR_9->table )
        return VAR_1;

    if( (VAR_7==0) || (VAR_7>VAR_9->num_cols) )
        return VAR_1;


    if( VAR_6 >= VAR_9->table->row_count )
        return VAR_2;

    if( VAR_9->columns[VAR_7-1].offset >= VAR_9->row_size )
    {
        FUNC_0("Stuffed up %d >= %d\n", VAR_9->columns[VAR_7-1].offset, VAR_9->row_size );
        FUNC_0("%p %p\n", VAR_9, VAR_9->columns );
        return VAR_0;
    }

    VAR_11 = FUNC_1( VAR_9->db, &VAR_9->columns[VAR_7 - 1], VAR_4 );
    if (VAR_11 != 2 && VAR_11 != 3 && VAR_11 != 4)
    {
        FUNC_0("oops! what is %d bytes per column?\n", VAR_11 );
        return VAR_0;
    }

    VAR_10 = VAR_9->columns[VAR_7-1].offset;
    *VAR_8 = FUNC_2(VAR_9->table->data, VAR_6, VAR_10, VAR_11);



    return VAR_3;
}
