
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int len; int flags; int * style; scalar_t__* str; } ;
struct TYPE_4__ {TYPE_1__ insert_run; } ;
struct undo_item {TYPE_2__ u; } ;
typedef int WCHAR ;
typedef int ME_TextEditor ;
typedef int ME_Style ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct undo_item* FUNC_2 (int *,int ) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,int const*,int) ;
 int VAR_2 ;

BOOL FUNC_5( ME_TextEditor *VAR_3, int VAR_4, const WCHAR *VAR_5, int VAR_6, int VAR_7, ME_Style *VAR_8 )
{
    struct undo_item *VAR_9 = FUNC_2( VAR_3, VAR_2 );
    if (!VAR_9) return VAR_0;

    VAR_9->u.insert_run.str = FUNC_3( (VAR_6 + 1) * sizeof(WCHAR) );
    if (!VAR_9->u.insert_run.str)
    {
        FUNC_1( VAR_3 );
        return VAR_0;
    }
    FUNC_4( VAR_9->u.insert_run.str, VAR_5, VAR_6 * sizeof(WCHAR) );
    VAR_9->u.insert_run.str[VAR_6] = 0;
    VAR_9->u.insert_run.pos = VAR_4;
    VAR_9->u.insert_run.len = VAR_6;
    VAR_9->u.insert_run.flags = VAR_7;
    VAR_9->u.insert_run.style = VAR_8;
    FUNC_0( VAR_8 );
    return VAR_1;
}
