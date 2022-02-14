
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int flags; int cell_right_boundary; int cell_border; int border; int fmt; TYPE_6__* eol_str; scalar_t__ pos; } ;
struct TYPE_16__ {TYPE_4__ split_para; } ;
struct undo_item {TYPE_5__ u; } ;
struct TYPE_19__ {int nRightBoundary; int border; } ;
struct TYPE_18__ {TYPE_3__* prev_para; int border; int fmt; scalar_t__ nCharOfs; } ;
struct TYPE_17__ {scalar_t__ nLen; } ;
struct TYPE_12__ {int nFlags; } ;
struct TYPE_13__ {TYPE_1__ para; } ;
struct TYPE_14__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_6__ ME_String ;
typedef TYPE_7__ ME_Paragraph ;
typedef TYPE_8__ ME_Cell ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct undo_item* FUNC_0 (int *,int ) ;
 int VAR_3 ;

BOOL FUNC_1( ME_TextEditor *VAR_4, const ME_Paragraph *VAR_5, ME_String *VAR_6, const ME_Cell *VAR_7 )
{
    struct undo_item *VAR_8 = FUNC_0( VAR_4, VAR_3 );
    if (!VAR_8) return VAR_0;

    VAR_8->u.split_para.pos = VAR_5->nCharOfs - VAR_6->nLen;
    VAR_8->u.split_para.eol_str = VAR_6;
    VAR_8->u.split_para.fmt = VAR_5->fmt;
    VAR_8->u.split_para.border = VAR_5->border;
    VAR_8->u.split_para.flags = VAR_5->prev_para->member.para.nFlags & ~VAR_1;

    if (VAR_7)
    {
        VAR_8->u.split_para.cell_border = VAR_7->border;
        VAR_8->u.split_para.cell_right_boundary = VAR_7->nRightBoundary;
    }
    return VAR_2;
}
