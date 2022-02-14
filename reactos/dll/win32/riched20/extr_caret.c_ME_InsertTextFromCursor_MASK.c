
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_24__ {scalar_t__ nOffset; TYPE_4__* pRun; TYPE_4__* pPara; } ;
struct TYPE_20__ {scalar_t__ len; } ;
struct TYPE_21__ {TYPE_1__ run; } ;
struct TYPE_23__ {TYPE_2__ member; } ;
struct TYPE_22__ {int nModifyStep; int nCursors; int nTextLimit; int styleFlags; TYPE_5__* pCursors; int bEmulateVersion10; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef int ME_Style ;
typedef TYPE_4__ ME_DisplayItem ;
typedef TYPE_5__ ME_Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,char const*,int,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,TYPE_4__*,int *,char const*,int,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int FUNC_9 (char const*) ;

void FUNC_10(ME_TextEditor *VAR_3, int VAR_4,
  const WCHAR *VAR_5, int VAR_6, ME_Style *VAR_7)
{
  const WCHAR *VAR_8;
  ME_Cursor *VAR_9 = ((void*)0);
  int VAR_10;


  if (FUNC_5(VAR_3))
    FUNC_0(VAR_3);



  VAR_10 = FUNC_3(VAR_3);


  VAR_3->nModifyStep = 1;

  FUNC_8(*VAR_7);

  FUNC_8(VAR_4>=0 && VAR_4<VAR_3->nCursors);
  if (VAR_6 == -1)
    VAR_6 = FUNC_9(VAR_5);


  if(VAR_3->nTextLimit < VAR_10 +VAR_6)
    VAR_3->nTextLimit = VAR_10 + VAR_6;

  VAR_8 = VAR_5;

  while (VAR_6)
  {

    while(VAR_8 - VAR_5 < VAR_6 && *VAR_8 != '\r' && *VAR_8 != '\n' && *VAR_8 != '\t')
      VAR_8++;

    if (VAR_8 != VAR_5) {
      FUNC_4(VAR_3, VAR_4, VAR_5, VAR_8-VAR_5, VAR_7, 0);
    } else if (*VAR_8 == '\t') {
      WCHAR VAR_11 = '\t';
      FUNC_4(VAR_3, VAR_4, &VAR_11, 1, VAR_7, VAR_1);
      VAR_8++;
    } else {
      ME_DisplayItem *VAR_12, *VAR_13, *VAR_14, *VAR_15;
      int VAR_16 = 0;


      if (!(VAR_3->styleFlags & VAR_0))
        break;


      if (*VAR_8 =='\r')
      {
        if (VAR_6 > 1 && VAR_8[1] == '\n')
          VAR_16 = 2;
        else if (VAR_6 > 2 && VAR_8[1] == '\r' && VAR_8[2] == '\n')
          VAR_16 = 3;
        else
          VAR_16 = 1;
      } else {
        FUNC_8(*VAR_8 == '\n');
        VAR_16 = 1;
      }
      VAR_8 += VAR_16;

      if (!VAR_3->bEmulateVersion10 && VAR_16 == 3)
      {

        WCHAR VAR_17 = ' ';
        FUNC_4(VAR_3, VAR_4, &VAR_17, 1, VAR_7, 0);
      } else {
        const WCHAR VAR_18 = '\r', *VAR_19 = VAR_5;

        if (!VAR_3->bEmulateVersion10)
        {
          VAR_19 = &VAR_18;
          VAR_16 = 1;
        }

        VAR_9 = &VAR_3->pCursors[VAR_4];

        if (VAR_9->nOffset == VAR_9->pRun->member.run.len)
        {
           VAR_14 = FUNC_2( VAR_9->pRun, VAR_2 );
           if (!VAR_14) VAR_14 = VAR_9->pRun;
        }
        else
        {
          if (VAR_9->nOffset) FUNC_7(VAR_3, VAR_9);
          VAR_14 = VAR_9->pRun;
        }

        VAR_12 = FUNC_6(VAR_3, VAR_14, VAR_7, VAR_19, VAR_16, 0);

        VAR_13 = FUNC_1(VAR_12, VAR_2);


        VAR_15 = FUNC_1( VAR_13, VAR_2 );
        if (VAR_15)
        {
          int VAR_20;
          for (VAR_20 = 0; VAR_20 < VAR_3->nCursors; VAR_20++)
          {
            if (VAR_3->pCursors[VAR_20].pRun == VAR_15 &&
                VAR_3->pCursors[VAR_20].nOffset == VAR_15->member.run.len)
            {
              VAR_3->pCursors[VAR_20].pPara = VAR_12;
              VAR_3->pCursors[VAR_20].pRun = VAR_14;
              VAR_3->pCursors[VAR_20].nOffset = 0;
            }
          }
        }

      }
    }
    VAR_6 -= VAR_8 - VAR_5;
    VAR_5 = VAR_8;
  }
}
