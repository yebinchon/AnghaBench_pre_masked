
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct view {int* result; int count; int cond; TYPE_1__* table; } ;
typedef int UINT ;
struct TYPE_4__ {int num_rows; int (* fill ) (TYPE_1__*,int ) ;} ;
typedef scalar_t__ LONGLONG ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ,scalar_t__*,int*) ;
 int* FUNC_2 (int) ;
 int* FUNC_3 (int*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

HRESULT FUNC_6( struct view *VAR_2 )
{
    UINT VAR_3, VAR_4 = 0, VAR_5;

    if (!VAR_2->table) return VAR_1;
    if (VAR_2->table->fill)
    {
        FUNC_0( VAR_2->table );
        VAR_2->table->fill( VAR_2->table, VAR_2->cond );
    }
    if (!VAR_2->table->num_rows) return VAR_1;

    VAR_5 = FUNC_4( VAR_2->table->num_rows, 16 );
    if (!(VAR_2->result = FUNC_2( VAR_5 * sizeof(UINT) ))) return VAR_0;

    for (VAR_3 = 0; VAR_3 < VAR_2->table->num_rows; VAR_3++)
    {
        HRESULT VAR_6;
        LONGLONG VAR_7 = 0;
        UINT VAR_8;

        if (VAR_4 >= VAR_5)
        {
            UINT *VAR_9;
            VAR_5 *= 2;
            if (!(VAR_9 = FUNC_3( VAR_2->result, VAR_5 * sizeof(UINT) ))) return VAR_0;
            VAR_2->result = VAR_9;
        }
        if ((VAR_6 = FUNC_1( VAR_2->table, VAR_3, VAR_2->cond, &VAR_7, &VAR_8 )) != VAR_1) return VAR_6;
        if (VAR_7) VAR_2->result[VAR_4++] = VAR_3;
    }
    VAR_2->count = VAR_4;
    return VAR_1;
}
