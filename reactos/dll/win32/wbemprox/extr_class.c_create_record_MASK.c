
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct table {int num_cols; TYPE_1__* columns; } ;
struct record {size_t count; int table; TYPE_3__* fields; } ;
struct field {int dummy; } ;
typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ ival; } ;
struct TYPE_6__ {TYPE_2__ u; int vartype; int type; } ;
struct TYPE_4__ {int vartype; int type; } ;


 int FUNC_0 (struct table*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct record*) ;

__attribute__((used)) static struct record *FUNC_3( struct table *VAR_0 )
{
    UINT VAR_1;
    struct record *VAR_2;

    if (!(VAR_2 = FUNC_1( sizeof(struct record) ))) return ((void*)0);
    if (!(VAR_2->fields = FUNC_1( VAR_0->num_cols * sizeof(struct field) )))
    {
        FUNC_2( VAR_2 );
        return ((void*)0);
    }
    for (VAR_1 = 0; VAR_1 < VAR_0->num_cols; VAR_1++)
    {
        VAR_2->fields[VAR_1].type = VAR_0->columns[VAR_1].type;
        VAR_2->fields[VAR_1].vartype = VAR_0->columns[VAR_1].vartype;
        VAR_2->fields[VAR_1].u.ival = 0;
    }
    VAR_2->count = VAR_0->num_cols;
    VAR_2->table = FUNC_0( VAR_0 );
    return VAR_2;
}
