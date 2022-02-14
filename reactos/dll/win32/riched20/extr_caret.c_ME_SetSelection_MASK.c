
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ nOffset; TYPE_3__* pRun; } ;
struct TYPE_21__ {TYPE_7__* pCursors; } ;
struct TYPE_18__ {int nFlags; scalar_t__ len; } ;
struct TYPE_19__ {TYPE_1__ run; } ;
struct TYPE_20__ {TYPE_2__ member; } ;
typedef TYPE_4__ ME_TextEditor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int,TYPE_7__*) ;
 int FUNC_1 (TYPE_4__*,int*,int*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_7__*,int,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_7__*) ;
 int VAR_2 ;

int FUNC_8(ME_TextEditor *VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  const int VAR_7 = FUNC_2(VAR_3);


  if (VAR_4 < 0)
    VAR_4 = -1;
  if (VAR_5 < 0)
    VAR_5 = -1;


  if (VAR_4 == 0 && VAR_5 == -1)
  {
    FUNC_7(VAR_3, &VAR_3->pCursors[1]);
    FUNC_6(VAR_3, &VAR_3->pCursors[0], VAR_2);
    FUNC_3(VAR_3);
    return VAR_7 + 1;
  }



  if ((VAR_4 == VAR_5) && (VAR_5 < 0 || VAR_5 > VAR_7))
  {
    VAR_6 = 1;
  }
  else
  {


    if (VAR_4 < 0)
    {
      int VAR_8, VAR_9;
      FUNC_1(VAR_3, &VAR_8, &VAR_9);
      if (VAR_8 != VAR_9)
      {
          if (VAR_9 > VAR_7)
          {
              VAR_3->pCursors[0].nOffset = 0;
              VAR_9 --;
          }
          VAR_3->pCursors[1] = VAR_3->pCursors[0];
          FUNC_5(VAR_3);
      }
      return VAR_9;
    }


    if (VAR_5 < 0)
      VAR_5 = VAR_7 + 1;


    if (VAR_4>VAR_5)
    {
      int VAR_10 = VAR_4;
      VAR_4 = VAR_5;
      VAR_5 = VAR_10;
    }


    if (VAR_4 > VAR_7)
      VAR_6 = 1;

    else if (VAR_5 > VAR_7)
      VAR_5 = VAR_7 + 1;
  }

  if (VAR_6)
  {
    FUNC_6(VAR_3, &VAR_3->pCursors[0], VAR_0);
    VAR_3->pCursors[1] = VAR_3->pCursors[0];
    FUNC_3(VAR_3);
    return VAR_7;
  }

  FUNC_0(VAR_3, VAR_4, &VAR_3->pCursors[1]);
  VAR_3->pCursors[0] = VAR_3->pCursors[1];
  FUNC_4(VAR_3, &VAR_3->pCursors[0], VAR_5 - VAR_4, VAR_0);

  if (VAR_3->pCursors[1].pRun->member.run.nFlags & VAR_1)
    VAR_3->pCursors[1].nOffset = 0;
  if (VAR_3->pCursors[0].pRun->member.run.nFlags & VAR_1)
  {
    if (VAR_5 > VAR_7)
      VAR_3->pCursors[0].nOffset = VAR_3->pCursors[0].pRun->member.run.len;
    else
      VAR_3->pCursors[0].nOffset = 0;
  }
  return VAR_5;
}
