
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


struct TYPE_30__ {int nOffset; TYPE_8__* pRun; TYPE_8__* pPara; } ;
struct TYPE_28__ {int nFlags; int nCharOfs; int len; } ;
struct TYPE_24__ {int dwMask; int wEffects; } ;
struct TYPE_25__ {int nCharOfs; scalar_t__ pCell; int nFlags; TYPE_8__* prev_para; TYPE_3__ fmt; TYPE_8__* next_para; } ;
struct TYPE_26__ {TYPE_7__ run; TYPE_4__ para; } ;
struct TYPE_29__ {TYPE_5__ member; } ;
struct TYPE_27__ {int bEmulateVersion10; } ;
struct TYPE_22__ {TYPE_8__* next_para; } ;
struct TYPE_23__ {TYPE_1__ para; } ;
struct TYPE_21__ {TYPE_2__ member; } ;
typedef TYPE_6__ ME_TextEditor ;
typedef TYPE_7__ ME_Run ;
typedef TYPE_8__ ME_DisplayItem ;
typedef TYPE_9__ ME_Cursor ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_0 (TYPE_8__*,int ) ;
 TYPE_8__* FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_9__*) ;
 TYPE_14__* FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_9__*,int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int) ;

void FUNC_8(ME_TextEditor *VAR_9, ME_Cursor *VAR_10, int *VAR_11)
{
  int VAR_12 = FUNC_2(VAR_10);
  ME_Cursor VAR_13 = *VAR_10;
  ME_DisplayItem *VAR_14 = VAR_10->pPara;
  ME_DisplayItem *VAR_15;

  FUNC_4(VAR_9, &VAR_13, *VAR_11, VAR_0);
  VAR_15 = VAR_13;
  if (VAR_13->member.run.nFlags & VAR_3) {




    int VAR_16 = VAR_12 + *VAR_11 - VAR_13->member.run.nCharOfs
                    - VAR_15->member.para.nCharOfs;
    if (VAR_16)
    {
      FUNC_5(VAR_16 < VAR_13->member.run.len);
      VAR_15 = VAR_15->member.para.next_para;
    }
  }
  if (!VAR_9->bEmulateVersion10) {
    if (VAR_14->member.para.pCell != VAR_15->member.para.pCell ||
        ((VAR_14->member.para.nFlags|VAR_15->member.para.nFlags)
         & (VAR_2|VAR_1)))
    {
      while (VAR_14 != VAR_15)
      {
        ME_DisplayItem *VAR_17 = VAR_14->member.para.next_para;
        BOOL VAR_18 = VAR_0;
        if (VAR_14->member.para.nFlags & VAR_2) {



          VAR_17 = VAR_14;
          VAR_14 = VAR_14->member.para.prev_para;
        } else if (VAR_17->member.para.pCell != VAR_14->member.para.pCell
                   || VAR_14->member.para.nFlags & VAR_1)
        {

          VAR_18 = VAR_7;
        }
        while (!VAR_18 &&
               VAR_17->member.para.nFlags & VAR_2)
        {
          VAR_17 = FUNC_3(VAR_17)->member.para.next_para;
          if (VAR_17->member.para.nCharOfs > VAR_12 + *VAR_11)
          {

            VAR_17 = VAR_14->member.para.next_para;


            if (VAR_14->member.para.nCharOfs >= VAR_12)
            {
              VAR_17 = VAR_17->member.para.next_para;
            }
            VAR_18 = VAR_7;
          } else {
            VAR_14 = VAR_17->member.para.prev_para;
          }
        }
        if (VAR_18)
        {
          ME_Run *VAR_19 = &FUNC_0(VAR_17, VAR_8)->member.run;
          int VAR_20 = (VAR_17->member.para.nCharOfs - VAR_12
                           - VAR_19->len);
          VAR_20 = FUNC_6(VAR_20, 0);
          FUNC_5(VAR_20 <= *VAR_11);
          *VAR_11 = VAR_20;
          break;
        }
        VAR_14 = VAR_17;
      }
    }
  } else {
    ME_DisplayItem *VAR_21;
    int VAR_22;

    if ((VAR_14->member.para.nCharOfs != VAR_12 || VAR_14 == VAR_15) &&
        VAR_14->member.para.fmt.dwMask & VAR_6 &&
        VAR_14->member.para.fmt.wEffects & VAR_5)
    {
      VAR_21 = VAR_10->pRun;

      while (!(VAR_21->member.run.nFlags & (VAR_4|VAR_3)))
        VAR_21 = FUNC_1(VAR_21, VAR_8);
      VAR_22 = VAR_21->member.run.nCharOfs
                         - VAR_10->pRun->member.run.nCharOfs
                         - VAR_10->nOffset;
      *VAR_11 = FUNC_7(*VAR_11, VAR_22);
    } else if (VAR_15->member.para.fmt.dwMask & VAR_6 &&
               VAR_15->member.para.fmt.wEffects & VAR_5)
    {


      ME_DisplayItem *VAR_23;
      VAR_21 = ((void*)0);
      if (VAR_12 > VAR_14->member.para.nCharOfs) {
        VAR_21 = FUNC_0(VAR_15, VAR_8);
        VAR_23 = VAR_15->member.para.prev_para;
      }
      if (!VAR_21) {
        VAR_21 = FUNC_1(VAR_15, VAR_8);
        VAR_23 = VAR_15;
      }
      if (VAR_21)
      {
        VAR_22 = VAR_23->member.para.nCharOfs
                           + VAR_21->member.run.nCharOfs
                           - VAR_12;
        if (VAR_22 >= 0)
          *VAR_11 = FUNC_7(*VAR_11, VAR_22);
      }
    }
    if (*VAR_11 < 0)
      *VAR_11 = 0;
  }
}
