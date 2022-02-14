
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_2__* table; } ;
typedef size_t UINT ;
struct TYPE_4__ {size_t num_cols; TYPE_1__* columns; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;

__attribute__((used)) static UINT FUNC_0( const struct view *VAR_1 )
{
    UINT VAR_2, VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_1->table->num_cols; VAR_2++)
    {
        if (VAR_1->table->columns[VAR_2].type & VAR_0) VAR_3++;
    }
    return VAR_3;
}
