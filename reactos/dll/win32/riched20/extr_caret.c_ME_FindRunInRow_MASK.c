
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_18__ {TYPE_5__* pRun; void* pPara; scalar_t__ nOffset; } ;
struct TYPE_14__ {int x; } ;
struct TYPE_12__ {int nWidth; int nFlags; TYPE_2__ pt; } ;
struct TYPE_13__ {int x; } ;
struct TYPE_16__ {TYPE_1__ pt; } ;
struct TYPE_15__ {TYPE_11__ run; TYPE_4__ row; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_3__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_4__ ME_Row ;
typedef TYPE_5__ ME_DisplayItem ;
typedef TYPE_6__ ME_Cursor ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,TYPE_11__*,int ,int ) ;
 void* FUNC_1 (TYPE_5__*,scalar_t__) ;
 void* FUNC_2 (TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(ME_TextEditor *VAR_5, ME_DisplayItem *VAR_6,
                            int VAR_7, ME_Cursor *VAR_8, BOOL *VAR_9)
{
  ME_DisplayItem *VAR_10, *VAR_11;
  ME_Row *VAR_12 = &VAR_6->member.row;
  BOOL VAR_13 = VAR_2;

  if (VAR_7 < VAR_12->pt.x)
  {
      VAR_7 = VAR_12->pt.x;
      VAR_13 = VAR_0;
  }
  VAR_10 = FUNC_1(VAR_6, VAR_4);
  FUNC_3(VAR_10->type == VAR_3);
  if (VAR_9) *VAR_9 = VAR_0;
  VAR_8->nOffset = 0;
  do {
    int VAR_14 = VAR_10->member.run.pt.x;
    int VAR_15 = VAR_10->member.run.nWidth;

    if (VAR_7 >= VAR_14 && VAR_7 < VAR_14+VAR_15)
    {
      VAR_8->nOffset = FUNC_0(VAR_5, VAR_7-VAR_14, &VAR_10->member.run, VAR_2, VAR_2);
      VAR_8->pRun = VAR_10;
      VAR_8->pPara = FUNC_2( VAR_8->pRun );
      return VAR_13;
    }
    VAR_11 = VAR_10;
    VAR_10 = FUNC_1(VAR_10, VAR_4);
  } while(VAR_10 && VAR_10->type == VAR_3);

  if ((VAR_11->member.run.nFlags & VAR_1) == 0)
  {
    VAR_8->pRun = FUNC_1(VAR_10, VAR_3);
    if (VAR_9) *VAR_9 = VAR_2;
  }
  else
    VAR_8->pRun = VAR_11;

  VAR_8->pPara = FUNC_2( VAR_8->pRun );
  return VAR_0;
}
