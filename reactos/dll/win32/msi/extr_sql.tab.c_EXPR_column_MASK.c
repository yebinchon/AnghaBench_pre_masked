
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int table; int column; } ;
struct TYPE_7__ {TYPE_1__ unparsed; } ;
struct TYPE_8__ {TYPE_2__ column; } ;
struct expr {TYPE_3__ u; int type; } ;
struct TYPE_9__ {int table; int column; } ;
typedef TYPE_4__ column_info ;


 int VAR_0 ;
 struct expr* FUNC_0 (void*,int) ;

__attribute__((used)) static struct expr * FUNC_1( void *VAR_1, const column_info *VAR_2 )
{
    struct expr *VAR_3 = FUNC_0( VAR_1, sizeof *VAR_3 );
    if( VAR_3 )
    {
        VAR_3->type = VAR_0;
        VAR_3->u.column.unparsed.column = VAR_2->column;
        VAR_3->u.column.unparsed.table = VAR_2->table;
    }
    return VAR_3;
}
