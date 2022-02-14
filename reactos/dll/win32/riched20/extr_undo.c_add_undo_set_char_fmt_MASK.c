
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int len; int fmt; } ;
struct TYPE_4__ {TYPE_1__ set_char_fmt; } ;
struct undo_item {TYPE_2__ u; } ;
typedef int ME_TextEditor ;
typedef int CHARFORMAT2W ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct undo_item* FUNC_0 (int *,int ) ;
 int VAR_2 ;

BOOL FUNC_1( ME_TextEditor *VAR_3, int VAR_4, int VAR_5, const CHARFORMAT2W *VAR_6 )
{
    struct undo_item *VAR_7 = FUNC_0( VAR_3, VAR_2 );
    if (!VAR_7) return VAR_0;

    VAR_7->u.set_char_fmt.pos = VAR_4;
    VAR_7->u.set_char_fmt.len = VAR_5;
    VAR_7->u.set_char_fmt.fmt = *VAR_6;

    return VAR_1;
}
