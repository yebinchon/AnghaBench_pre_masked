
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_24__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_19__ ;
typedef struct TYPE_46__ TYPE_15__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


struct TYPE_42__ {int flags; int cell_border; int cell_right_boundary; int border; int fmt; TYPE_8__* eol_str; int pos; } ;
struct TYPE_53__ {int pos; } ;
struct TYPE_52__ {int len; int pos; } ;
struct TYPE_51__ {int flags; int len; int str; int style; int pos; } ;
struct TYPE_50__ {int fmt; int len; int pos; } ;
struct TYPE_48__ {int border; int fmt; int pos; } ;
struct TYPE_43__ {TYPE_11__ split_para; TYPE_5__ join_paras; TYPE_4__ delete_run; TYPE_3__ insert_run; TYPE_2__ set_char_fmt; TYPE_1__ set_para_fmt; } ;
struct undo_item {int type; TYPE_12__ u; } ;
struct TYPE_57__ {int border; int nRightBoundary; } ;
struct TYPE_56__ {int nLen; int szData; } ;
struct TYPE_54__ {int style; } ;
struct TYPE_55__ {TYPE_6__ run; } ;
struct TYPE_49__ {TYPE_7__ member; } ;
struct TYPE_47__ {int nFlags; TYPE_14__* pCell; int border; int fmt; } ;
struct TYPE_46__ {TYPE_24__* pRun; TYPE_14__* pPara; int nOffset; } ;
struct TYPE_41__ {TYPE_9__ cell; TYPE_19__ para; } ;
struct TYPE_45__ {TYPE_10__ member; } ;
struct TYPE_44__ {scalar_t__ nUndoMode; } ;
typedef TYPE_13__ ME_TextEditor ;
typedef TYPE_14__ ME_DisplayItem ;
typedef TYPE_15__ ME_Cursor ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_13__*,int ,TYPE_15__*) ;
 TYPE_14__* FUNC_1 (TYPE_24__*,int ) ;
 int FUNC_2 (TYPE_13__*,TYPE_15__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_13__*,TYPE_15__*,int ,int ) ;
 int FUNC_4 (TYPE_13__*,TYPE_14__*,int ) ;
 int FUNC_5 (TYPE_13__*,TYPE_15__*,int ,int ) ;
 int FUNC_6 (TYPE_13__*,TYPE_15__*,TYPE_15__*,int *) ;
 TYPE_14__* FUNC_7 (TYPE_13__*,TYPE_24__*,int ,int ,int ,int) ;
 int FUNC_8 (TYPE_13__*,TYPE_15__*) ;
 int FUNC_9 (char*,int) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_13__*,TYPE_19__*) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_13__*,TYPE_14__*) ;
 scalar_t__ VAR_6 ;
__attribute__((used)) static void FUNC_13(ME_TextEditor *VAR_7, struct undo_item *VAR_8)
{

  if (VAR_7->nUndoMode == VAR_6)
    return;
  FUNC_9("Playing undo/redo item, id=%d\n", VAR_8->type);

  switch(VAR_8->type)
  {
  case 131:
  case 134:
    FUNC_11(0);
  case 129:
  {
    ME_Cursor VAR_9;
    ME_DisplayItem *VAR_10;
    FUNC_0(VAR_7, VAR_8->u.set_para_fmt.pos, &VAR_9);
    VAR_10 = FUNC_1(VAR_9.pRun, VAR_5);
    FUNC_10( VAR_7, &VAR_10->member.para );
    VAR_10->member.para.fmt = VAR_8->u.set_para_fmt.fmt;
    VAR_10->member.para.border = VAR_8->u.set_para_fmt.border;
    FUNC_12(VAR_7, VAR_10);
    break;
  }
  case 130:
  {
    ME_Cursor VAR_11, VAR_12;
    FUNC_0(VAR_7, VAR_8->u.set_char_fmt.pos, &VAR_11);
    VAR_12 = VAR_11;
    FUNC_5(VAR_7, &VAR_12, VAR_8->u.set_char_fmt.len, VAR_0);
    FUNC_6(VAR_7, &VAR_11, &VAR_12, &VAR_8->u.set_char_fmt.fmt);
    break;
  }
  case 133:
  {
    ME_Cursor VAR_13;
    FUNC_0(VAR_7, VAR_8->u.insert_run.pos, &VAR_13);
    FUNC_2(VAR_7, &VAR_13, VAR_8->u.insert_run.style,
                         VAR_8->u.insert_run.str,
                         VAR_8->u.insert_run.len,
                         VAR_8->u.insert_run.flags);
    break;
  }
  case 135:
  {
    ME_Cursor VAR_14;
    FUNC_0(VAR_7, VAR_8->u.delete_run.pos, &VAR_14);
    FUNC_3(VAR_7, &VAR_14, VAR_8->u.delete_run.len, VAR_4);
    break;
  }
  case 132:
  {
    ME_Cursor VAR_15;
    FUNC_0(VAR_7, VAR_8->u.join_paras.pos, &VAR_15);
    FUNC_4(VAR_7, VAR_15.pPara, VAR_4);
    break;
  }
  case 128:
  {
    ME_Cursor VAR_16;
    ME_DisplayItem *VAR_17, *VAR_18;
    BOOL VAR_19;
    int VAR_20 = VAR_8->u.split_para.flags & (VAR_3|VAR_1|VAR_2);
    FUNC_0(VAR_7, VAR_8->u.split_para.pos, &VAR_16);
    if (VAR_16.nOffset)
      FUNC_8(VAR_7, &VAR_16);
    VAR_17 = VAR_16.pPara;
    VAR_19 = VAR_17->member.para.nFlags & VAR_3;
    if (VAR_19)
    {


      VAR_17->member.para.nFlags &= ~VAR_3;
    }
    VAR_18 = FUNC_7(VAR_7, VAR_16.pRun, VAR_16.pRun->member.run.style,
                                 VAR_8->u.split_para.eol_str->szData, VAR_8->u.split_para.eol_str->nLen, VAR_20);
    if (VAR_19)
      VAR_18->member.para.nFlags |= VAR_3;
    VAR_18->member.para.fmt = VAR_8->u.split_para.fmt;
    VAR_18->member.para.border = VAR_8->u.split_para.border;
    if (VAR_20)
    {
      ME_DisplayItem *VAR_21 = VAR_18->member.para.pCell;
      VAR_21->member.cell.nRightBoundary = VAR_8->u.split_para.cell_right_boundary;
      VAR_21->member.cell.border = VAR_8->u.split_para.cell_border;
    }
    break;
  }
  }
}
