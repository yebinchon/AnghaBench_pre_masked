
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int eol_str; } ;
struct TYPE_4__ {int style; struct undo_item* str; } ;
struct TYPE_6__ {TYPE_2__ split_para; TYPE_1__ insert_run; } ;
struct undo_item {int type; TYPE_3__ u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct undo_item*) ;



__attribute__((used)) static void FUNC_3( struct undo_item *VAR_0 )
{
    switch( VAR_0->type )
    {
    case 129:
        FUNC_2( VAR_0->u.insert_run.str );
        FUNC_1( VAR_0->u.insert_run.style );
        break;
    case 128:
        FUNC_0( VAR_0->u.split_para.eol_str );
        break;
    default:
        break;
    }

    FUNC_2( VAR_0 );
}
