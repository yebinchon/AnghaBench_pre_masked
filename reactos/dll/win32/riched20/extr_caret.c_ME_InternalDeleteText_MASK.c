
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_13__ ;


struct TYPE_41__ {int nOffset; TYPE_13__* pRun; TYPE_7__* pPara; } ;
struct TYPE_34__ {int nCharOfs; int nFlags; int fmt; TYPE_7__* prev_para; } ;
struct TYPE_35__ {TYPE_1__ para; } ;
struct TYPE_40__ {TYPE_2__ member; } ;
struct TYPE_39__ {int nCharOfs; int len; int nFlags; TYPE_3__* para; int style; } ;
struct TYPE_38__ {int nCursors; TYPE_8__* pCursors; int bEmulateVersion10; } ;
struct TYPE_37__ {TYPE_6__ run; } ;
struct TYPE_36__ {int text; } ;
struct TYPE_33__ {scalar_t__ type; TYPE_4__ member; } ;
typedef TYPE_5__ ME_TextEditor ;
typedef TYPE_6__ ME_Run ;
typedef TYPE_7__ ME_DisplayItem ;
typedef TYPE_8__ ME_Cursor ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int,TYPE_8__*) ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (TYPE_13__*,int ) ;
 void* FUNC_4 (TYPE_13__*,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__**,TYPE_13__**,int) ;
 int FUNC_9 (TYPE_13__*,int) ;
 int FUNC_10 (TYPE_5__*,TYPE_8__*,int*) ;
 int FUNC_11 (TYPE_13__*) ;
 int FUNC_12 (TYPE_5__*,int *) ;
 int FUNC_13 (TYPE_13__*,int) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (char*,...) ;
 int VAR_3 ;
 int FUNC_16 (TYPE_5__*,int,int ,int,int,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_19 (TYPE_6__*,int) ;
 int FUNC_20 (TYPE_5__*,int ) ;
 int FUNC_21 (int,int) ;

BOOL FUNC_22(ME_TextEditor *VAR_8, ME_Cursor *VAR_9,
                           int VAR_10, BOOL VAR_11)
{
  ME_Cursor VAR_12 = *VAR_9;
  int VAR_13 = FUNC_5(VAR_9), VAR_14 = FUNC_6( VAR_8 );
  int VAR_15 = 0;
  int VAR_16 = VAR_10;
  ME_DisplayItem *VAR_17;
  BOOL VAR_18 = VAR_0;


  VAR_10 = FUNC_21(VAR_10, VAR_14 - VAR_13);
  if (VAR_10 == VAR_14) VAR_18 = VAR_3;
  VAR_17 = VAR_12.pPara;

  if (!VAR_11)
  {
    FUNC_10(VAR_8, &VAR_12, &VAR_10);
    if (VAR_10 == 0)
      return VAR_0;
  }

  while(VAR_10 > 0)
  {
    ME_Run *VAR_19;
    FUNC_1(VAR_8, VAR_13+VAR_10, &VAR_12);
    if (!VAR_12.nOffset &&
        VAR_13+VAR_10 == (VAR_12.pRun->member.run.nCharOfs
                        + VAR_12.pPara->member.para.nCharOfs))
    {


      FUNC_8(&VAR_12.pPara, &VAR_12.pRun, VAR_3);
      VAR_12.nOffset = VAR_12.pRun->member.run.len;
    }
    VAR_19 = &VAR_12.pRun->member.run;
    if (VAR_19->nFlags & VAR_2) {
      int VAR_20 = VAR_12.pRun->member.run.len;
      BOOL VAR_21;

      if (!FUNC_4(VAR_12.pRun, VAR_4))
      {
        return VAR_3;
      }
      VAR_21 = (VAR_16 == VAR_10 && VAR_10 <= VAR_20 &&
                             VAR_19->nCharOfs);
      if (!VAR_8->bEmulateVersion10)
      {
        ME_DisplayItem *VAR_22 = FUNC_4(VAR_12.pRun, VAR_5);
        ME_DisplayItem *VAR_23 = VAR_22->member.para.prev_para;



        if (VAR_23 == VAR_17 &&
            VAR_22->member.para.nFlags & VAR_1)
        {




          if (VAR_13 > VAR_23->member.para.nCharOfs) {

            VAR_10 -= (VAR_20 < VAR_10) ? VAR_20 : VAR_10;
            continue;
          }
          VAR_21 = VAR_3;
        }
      }
      FUNC_7(VAR_8, VAR_12.pPara, VAR_21);

      FUNC_0(VAR_8);
      VAR_10 -= (VAR_20 < VAR_10) ? VAR_20 : VAR_10;
      continue;
    }
    else
    {
      ME_Cursor VAR_24;
      int VAR_25 = FUNC_21(VAR_10, VAR_12.nOffset);
      int VAR_26;

      VAR_12.nOffset -= VAR_25;

      FUNC_20(VAR_8, FUNC_3(VAR_12.pRun, VAR_4));

      VAR_24 = VAR_12;



      VAR_10 -= VAR_25;
      VAR_15 -= VAR_25;
      FUNC_15("Deleting %d (remaining %d) chars at %d in %s (%d)\n",
        VAR_25, VAR_10, VAR_12.nOffset,
        FUNC_18( VAR_19 ), VAR_19->len);



      FUNC_16( VAR_8, VAR_13 + VAR_10, FUNC_19( VAR_19, VAR_12.nOffset ), VAR_25, VAR_19->nFlags, VAR_19->style );

      FUNC_14(VAR_19->para->text, VAR_19->nCharOfs + VAR_12.nOffset, VAR_25);
      VAR_19->len -= VAR_25;
      FUNC_15("Post deletion string: %s (%d)\n", FUNC_18( VAR_19 ), VAR_19->len);
      FUNC_15("Shift value: %d\n", VAR_15);


      for (VAR_26=-1; VAR_26<VAR_8->nCursors; VAR_26++) {
        ME_Cursor *VAR_27 = VAR_8->pCursors + VAR_26;
        if (VAR_26 == -1) VAR_27 = &VAR_12;
        if (VAR_27->pRun == VAR_24.pRun) {
          if (VAR_27->nOffset > VAR_24.nOffset) {
            if (VAR_27->nOffset-VAR_24.nOffset < VAR_25)
              VAR_27->nOffset = VAR_24.nOffset;
            else
              VAR_27->nOffset -= VAR_25;
            FUNC_17(VAR_27->nOffset >= 0);
            FUNC_17(VAR_27->nOffset <= VAR_19->len);
          }
          if (VAR_27->nOffset == VAR_19->len)
          {
            VAR_27->pRun = FUNC_4(VAR_27->pRun, VAR_7);
            FUNC_17(VAR_27->pRun->type == VAR_6);
            VAR_27->nOffset = 0;
          }
        }
      }



      if (VAR_12.pRun == VAR_24.pRun)
        FUNC_13(VAR_12.pRun, VAR_15);
      else
        FUNC_9(VAR_12.pRun, VAR_15);

      if (!VAR_24.pRun->member.run.len)
      {
        FUNC_15("Removing empty run\n");
        FUNC_11(VAR_24.pRun);
        FUNC_2(VAR_24.pRun);
      }

      VAR_15 = 0;



      continue;
    }
  }
  if (VAR_18) FUNC_12( VAR_8, &VAR_17->member.para.fmt );
  return VAR_3;
}
