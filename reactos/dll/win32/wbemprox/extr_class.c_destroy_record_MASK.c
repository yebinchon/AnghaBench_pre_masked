
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aval; struct record* sval; } ;
struct record {size_t count; int type; struct record* fields; TYPE_1__ u; int table; } ;
typedef size_t UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct record*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( struct record *VAR_4 )
{
    UINT VAR_5;

    if (!VAR_4) return;
    FUNC_2( VAR_4->table );
    for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++)
    {
        if (VAR_4->fields[VAR_5].type == VAR_2 || VAR_4->fields[VAR_5].type == VAR_0)
            FUNC_1( VAR_4->fields[VAR_5].u.sval );
        else if (VAR_4->fields[VAR_5].type & VAR_1)
            FUNC_0( VAR_4->fields[VAR_5].u.aval, VAR_4->fields[VAR_5].type & VAR_3 );
    }
    FUNC_1( VAR_4->fields );
    FUNC_1( VAR_4 );
}
