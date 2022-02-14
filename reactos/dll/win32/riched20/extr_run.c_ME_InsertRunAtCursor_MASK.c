
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_29__ {int text; scalar_t__ nCharOfs; } ;
struct TYPE_28__ {scalar_t__ nOffset; TYPE_5__* pRun; } ;
struct TYPE_23__ {scalar_t__ len; TYPE_8__* para; scalar_t__ nCharOfs; } ;
struct TYPE_24__ {TYPE_1__ run; } ;
struct TYPE_27__ {TYPE_2__ member; } ;
struct TYPE_26__ {int nCursors; TYPE_3__* pCursors; } ;
struct TYPE_25__ {int nOffset; TYPE_5__* pRun; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef int ME_Style ;
typedef TYPE_5__ ME_DisplayItem ;
typedef TYPE_6__ ME_Cursor ;


 TYPE_5__* FUNC_0 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (int ,scalar_t__,int const*,int) ;
 TYPE_5__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_4__*,int ) ;

ME_DisplayItem *
FUNC_11(ME_TextEditor *VAR_1, ME_Cursor *VAR_2, ME_Style *VAR_3,
                     const WCHAR *VAR_4, int VAR_5, int VAR_6)
{
  ME_DisplayItem *VAR_7, *VAR_8 = VAR_2->pRun, *VAR_9;

  if (VAR_2->nOffset)
  {
    if (VAR_2->nOffset == VAR_2->pRun->member.run.len)
    {
      VAR_8 = FUNC_1( VAR_2->pRun, VAR_0 );
      if (!VAR_8) VAR_8 = VAR_2->pRun;
    }
    else
    {
      FUNC_6( VAR_1, VAR_2 );
      VAR_8 = VAR_2->pRun;
    }
  }

  FUNC_8( VAR_1, VAR_8->member.run.para->nCharOfs +
                       VAR_8->member.run.nCharOfs, VAR_5 );

  VAR_7 = FUNC_4(VAR_3, VAR_6);
  VAR_7->member.run.nCharOfs = VAR_8->member.run.nCharOfs;
  VAR_7->member.run.len = VAR_5;
  VAR_7->member.run.para = VAR_8->member.run.para;
  FUNC_3( VAR_7->member.run.para->text, VAR_7->member.run.nCharOfs, VAR_4, VAR_5 );
  FUNC_2( VAR_8, VAR_7 );
  FUNC_7("Shift length:%d\n", VAR_5);
  FUNC_5( VAR_8, VAR_5 );
  FUNC_10(VAR_1, FUNC_9(VAR_8->member.run.para));


  VAR_9 = FUNC_0( VAR_7, VAR_0 );
  if (VAR_9)
  {
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_1->nCursors; VAR_10++)
    {
      if (VAR_1->pCursors[VAR_10].pRun == VAR_9 &&
          VAR_1->pCursors[VAR_10].nOffset == VAR_9->member.run.len)
      {
        VAR_1->pCursors[VAR_10].pRun = VAR_7;
        VAR_1->pCursors[VAR_10].nOffset = VAR_5;
      }
    }
  }

  return VAR_7;
}
