
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int len; } ;
struct TYPE_4__ {TYPE_1__ delete_run; } ;
struct undo_item {TYPE_2__ u; } ;
typedef int ME_TextEditor ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct undo_item* FUNC_0 (int *,int ) ;
 int VAR_2 ;

BOOL FUNC_1( ME_TextEditor *VAR_3, int VAR_4, int VAR_5 )
{
    struct undo_item *VAR_6 = FUNC_0( VAR_3, VAR_2 );
    if (!VAR_6) return VAR_0;

    VAR_6->u.delete_run.pos = VAR_4;
    VAR_6->u.delete_run.len = VAR_5;

    return VAR_1;
}
