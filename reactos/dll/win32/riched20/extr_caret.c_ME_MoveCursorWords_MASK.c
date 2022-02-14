
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int len; int nFlags; } ;
struct TYPE_14__ {int nOffset; TYPE_3__* pRun; TYPE_3__* pPara; } ;
struct TYPE_11__ {int nFlags; TYPE_3__* next_para; TYPE_3__* prev_para; } ;
struct TYPE_12__ {TYPE_1__ para; TYPE_5__ run; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_DisplayItem ;
typedef TYPE_4__ ME_Cursor ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int ,int,int,int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,scalar_t__) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_5__*,int ) ;

BOOL
FUNC_4(ME_TextEditor *VAR_12, ME_Cursor *VAR_13, int VAR_14)
{
  ME_DisplayItem *VAR_15 = VAR_13->pRun, *VAR_16;
  ME_DisplayItem *VAR_17 = VAR_13->pPara;
  int VAR_18 = VAR_13->nOffset;

  if (VAR_14 == -1)
  {

    while (VAR_3)
    {
      VAR_18 = FUNC_0(VAR_12, FUNC_3( &VAR_15->member.run, 0 ),
                                     VAR_15->member.run.len, VAR_18, VAR_5);
      if (VAR_18)
        break;
      VAR_16 = FUNC_1(VAR_15, VAR_9);
      if (VAR_16->type == VAR_8)
      {
        if (FUNC_0(VAR_12, FUNC_3( &VAR_16->member.run, 0 ),
                                 VAR_16->member.run.len,
                                 VAR_16->member.run.len - 1,
                                 VAR_4)
            && !(VAR_15->member.run.nFlags & VAR_2)
            && !(VAR_13->pRun == VAR_15 && VAR_13->nOffset == 0)
            && !FUNC_0(VAR_12, FUNC_3( &VAR_15->member.run, 0 ),
                                     VAR_15->member.run.len, 0,
                                     VAR_4))
          break;
        VAR_15 = VAR_16;
        VAR_18 = VAR_16->member.run.len;
      }
      else if (VAR_16->type == VAR_7)
      {
        if (VAR_13->pRun == VAR_15 && VAR_13->nOffset == 0)
        {
          VAR_17 = VAR_16;

          if (VAR_17->member.para.prev_para->member.para.nFlags & VAR_1)
            VAR_17 = VAR_17->member.para.prev_para;

          if (VAR_17->member.para.prev_para->type == VAR_11)
            return VAR_0;

          VAR_15 = FUNC_1(VAR_17, VAR_8);
          VAR_17 = VAR_17->member.para.prev_para;
        }
        break;
      }
    }
  }
  else
  {

    BOOL VAR_19 = VAR_0;

    while (VAR_3)
    {
      if (VAR_19 && !FUNC_0(VAR_12, FUNC_3( &VAR_15->member.run, 0 ),
                                              VAR_15->member.run.len, VAR_18, VAR_4))
        break;
      VAR_18 = FUNC_0(VAR_12, FUNC_3( &VAR_15->member.run, 0 ),
                                     VAR_15->member.run.len, VAR_18, VAR_6);
      if (VAR_18 < VAR_15->member.run.len)
        break;
      VAR_16 = FUNC_2(VAR_15, VAR_10);
      if (VAR_16->type == VAR_8)
      {
        VAR_19 = FUNC_0(VAR_12, FUNC_3( &VAR_15->member.run, 0 ),
                                          VAR_15->member.run.len, VAR_18 - 1, VAR_4);
        VAR_15 = VAR_16;
        VAR_18 = 0;
      }
      else if (VAR_16->type == VAR_7)
      {
        if (VAR_16->member.para.nFlags & VAR_1)
            VAR_16 = VAR_16->member.para.next_para;
        if (VAR_13->pRun == VAR_15) {
          VAR_17 = VAR_16;
          VAR_15 = FUNC_2(VAR_17, VAR_8);
        }
        VAR_18 = 0;
        break;
      }
      else
      {
        if (VAR_13->pRun == VAR_15)
          return VAR_0;
        VAR_18 = 0;
        break;
      }
    }
  }
  VAR_13->pPara = VAR_17;
  VAR_13->pRun = VAR_15;
  VAR_13->nOffset = VAR_18;
  return VAR_3;
}
