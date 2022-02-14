
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_24__ {int nOffset; TYPE_6__* pRun; } ;
struct TYPE_18__ {int len; int nFlags; TYPE_4__* style; scalar_t__ nCharOfs; TYPE_5__* para; } ;
struct TYPE_19__ {TYPE_1__ run; } ;
struct TYPE_23__ {TYPE_2__ member; } ;
struct TYPE_20__ {TYPE_4__* style; } ;
struct TYPE_22__ {TYPE_3__ para_num; scalar_t__ nCharOfs; } ;
struct TYPE_21__ {int fmt; } ;
typedef int ME_TextEditor ;
typedef TYPE_4__ ME_Style ;
typedef TYPE_5__ ME_Paragraph ;
typedef TYPE_6__ ME_DisplayItem ;
typedef TYPE_7__ ME_Cursor ;
typedef int CHARFORMAT2W ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,TYPE_4__*,int *) ;
 TYPE_6__* FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_6__* FUNC_3 (int *,TYPE_7__*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int *) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(ME_TextEditor *VAR_2, ME_Cursor *VAR_3, ME_Cursor *VAR_4, CHARFORMAT2W *VAR_5)
{
  ME_DisplayItem *VAR_6, *VAR_7 = VAR_3->pRun, *VAR_8 = ((void*)0);

  if (VAR_4 && VAR_3->pRun == VAR_4->pRun && VAR_3->nOffset == VAR_4->nOffset)
    return;

  if (VAR_3->nOffset == VAR_3->pRun->member.run.len)
    VAR_7 = FUNC_1( VAR_3->pRun, VAR_1 );
  else if (VAR_3->nOffset)
  {


    int VAR_9 = VAR_3->nOffset;
    ME_DisplayItem *VAR_10 = FUNC_3(VAR_2, VAR_3);
    VAR_7 = VAR_3->pRun;
    if (VAR_4 && VAR_4->pRun == VAR_10)
    {
      VAR_4->pRun = VAR_3->pRun;
      VAR_4->nOffset -= VAR_9;
    }
  }

  if (VAR_4)
  {
    if (VAR_4->nOffset == VAR_4->pRun->member.run.len)
      VAR_8 = FUNC_1( VAR_4->pRun, VAR_1 );
    else
    {
      if (VAR_4->nOffset) FUNC_3(VAR_2, VAR_4);
      VAR_8 = VAR_4->pRun;
    }
  }

  for (VAR_6 = VAR_7; VAR_6 != VAR_8; VAR_6 = FUNC_1( VAR_6, VAR_1 ))
  {
    ME_Style *VAR_11 = FUNC_0(VAR_2, VAR_6->member.run.style, VAR_5);
    ME_Paragraph *VAR_12 = VAR_6->member.run.para;

    FUNC_4( VAR_2, VAR_6->member.run.para->nCharOfs + VAR_6->member.run.nCharOfs,
                           VAR_6->member.run.len, &VAR_6->member.run.style->fmt );
    FUNC_2(VAR_6->member.run.style);
    VAR_6->member.run.style = VAR_11;


    if ((VAR_6->member.run.nFlags & VAR_0) && VAR_12->para_num.style)
    {
      FUNC_2(VAR_12->para_num.style);
      VAR_12->para_num.style = ((void*)0);
    }
    FUNC_6(VAR_2, FUNC_5(VAR_12));
  }
}
