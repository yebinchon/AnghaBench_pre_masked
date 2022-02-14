
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ nOffset; int pRun; TYPE_4__* pPara; } ;
struct TYPE_13__ {int nCharOfs; TYPE_4__* next_para; TYPE_4__* prev_para; } ;
struct TYPE_14__ {TYPE_1__ para; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__ member; } ;
struct TYPE_15__ {int AutoURLDetect_bEnable; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;
typedef TYPE_5__ ME_Cursor ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__**,TYPE_5__**) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(ME_TextEditor *VAR_2)
{
  ME_DisplayItem *VAR_3, *VAR_4;
  ME_DisplayItem *VAR_5;
  ME_Cursor *VAR_6, *VAR_7;
  ME_Cursor VAR_8;
  int VAR_9;

  if (!VAR_2->AutoURLDetect_bEnable) return;

  FUNC_1(VAR_2, &VAR_6, &VAR_7);


  VAR_3 = VAR_6->pPara;
  VAR_5 = VAR_3->member.para.prev_para;
  if (VAR_5->type == VAR_0) VAR_3 = VAR_5;


  VAR_4 = VAR_7->pPara->member.para.next_para;

  VAR_8.pPara = VAR_3;
  VAR_8.pRun = FUNC_0(VAR_3, VAR_1);
  VAR_8.nOffset = 0;
  VAR_9 = VAR_4->member.para.nCharOfs - VAR_3->member.para.nCharOfs;

  FUNC_2(VAR_2, &VAR_8, VAR_9);
}
