
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ nOffset; TYPE_4__* pRun; TYPE_4__* pPara; } ;
struct TYPE_13__ {scalar_t__ nCharOfs; scalar_t__ len; } ;
struct TYPE_12__ {scalar_t__ nCharOfs; TYPE_4__* next_para; TYPE_4__* prev_para; } ;
struct TYPE_14__ {TYPE_2__ run; TYPE_1__ para; } ;
struct TYPE_15__ {TYPE_3__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;
typedef TYPE_5__ ME_Cursor ;
typedef scalar_t__ BOOL ;


 void* FUNC_0 (TYPE_4__*,int ) ;
 void* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_5__*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int VAR_0 ;

int FUNC_6(ME_TextEditor *VAR_1, ME_Cursor *VAR_2, int VAR_3, BOOL VAR_4)
{
  VAR_2->nOffset += VAR_3;
  if (VAR_2->nOffset < 0)
  {
    VAR_2->nOffset += VAR_2->pRun->member.run.nCharOfs;
    if (VAR_2->nOffset >= 0)
    {

      do {
        VAR_2->pRun = FUNC_0(VAR_2->pRun, VAR_0);
      } while (VAR_2->nOffset < VAR_2->pRun->member.run.nCharOfs);
      VAR_2->nOffset -= VAR_2->pRun->member.run.nCharOfs;
      return VAR_3;
    }

    VAR_2->nOffset += VAR_2->pPara->member.para.nCharOfs;
    if (VAR_2->nOffset <= 0)
    {

      VAR_3 -= VAR_2->nOffset;
      FUNC_5(VAR_1, VAR_2);
      return VAR_3;
    }


    do {
      VAR_2->pPara = VAR_2->pPara->member.para.prev_para;
    } while (VAR_2->nOffset < VAR_2->pPara->member.para.nCharOfs);
    VAR_2->nOffset -= VAR_2->pPara->member.para.nCharOfs;

    VAR_2->pRun = FUNC_0(VAR_2->pPara->member.para.next_para, VAR_0);
    while (VAR_2->nOffset < VAR_2->pRun->member.run.nCharOfs) {
      VAR_2->pRun = FUNC_0(VAR_2->pRun, VAR_0);
    }
    VAR_2->nOffset -= VAR_2->pRun->member.run.nCharOfs;
  } else if (VAR_2->nOffset >= VAR_2->pRun->member.run.len) {
    ME_DisplayItem *VAR_5;
    int VAR_6;

    VAR_6 = FUNC_2(VAR_2);
    VAR_5 = VAR_2->pPara->member.para.next_para;
    if (VAR_6 < VAR_5->member.para.nCharOfs)
    {

      do {
        VAR_2->nOffset -= VAR_2->pRun->member.run.len;
        VAR_2->pRun = FUNC_1(VAR_2->pRun, VAR_0);
      } while (VAR_2->nOffset >= VAR_2->pRun->member.run.len);
      return VAR_3;
    }

    if (VAR_6 >= FUNC_3(VAR_1) + (VAR_4 ? 1 : 0))
    {

      FUNC_4(VAR_1, VAR_2, VAR_4);
      VAR_3 -= VAR_6 - (FUNC_3(VAR_1) + (VAR_4 ? 1 : 0));
      return VAR_3;
    }


    do {
      VAR_2->pPara = VAR_5;
      VAR_5 = VAR_5->member.para.next_para;
    } while (VAR_6 >= VAR_5->member.para.nCharOfs);

    VAR_2->nOffset = VAR_6 - VAR_2->pPara->member.para.nCharOfs;
    VAR_2->pRun = FUNC_1(VAR_2->pPara, VAR_0);
    while (VAR_2->nOffset >= VAR_2->pRun->member.run.len)
    {
      VAR_2->nOffset -= VAR_2->pRun->member.run.len;
      VAR_2->pRun = FUNC_1(VAR_2->pRun, VAR_0);
    }
  }
  return VAR_3;
}
