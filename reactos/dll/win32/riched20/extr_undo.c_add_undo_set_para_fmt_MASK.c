
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int border; int fmt; int pos; } ;
struct TYPE_6__ {TYPE_1__ set_para_fmt; } ;
struct undo_item {TYPE_2__ u; } ;
struct TYPE_7__ {int border; int fmt; int nCharOfs; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_Paragraph ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct undo_item* FUNC_0 (int *,int ) ;
 int VAR_2 ;

BOOL FUNC_1( ME_TextEditor *VAR_3, const ME_Paragraph *VAR_4 )
{
    struct undo_item *VAR_5 = FUNC_0( VAR_3, VAR_2 );
    if (!VAR_5) return VAR_0;

    VAR_5->u.set_para_fmt.pos = VAR_4->nCharOfs;
    VAR_5->u.set_para_fmt.fmt = VAR_4->fmt;
    VAR_5->u.set_para_fmt.border = VAR_4->border;

    return VAR_1;
}
