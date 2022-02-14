
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_20__ {TYPE_10__* pRun; int nOffset; int pPara; } ;
struct TYPE_19__ {TYPE_5__* pBuffer; } ;
struct TYPE_18__ {TYPE_11__* pLast; } ;
struct TYPE_16__ {int prev_para; } ;
struct TYPE_17__ {TYPE_3__ para; } ;
struct TYPE_14__ {int len; } ;
struct TYPE_15__ {TYPE_1__ run; } ;
struct TYPE_13__ {TYPE_4__ member; } ;
struct TYPE_12__ {TYPE_2__ member; } ;
typedef TYPE_6__ ME_TextEditor ;
typedef TYPE_7__ ME_Cursor ;
typedef scalar_t__ BOOL ;


 TYPE_10__* FUNC_0 (TYPE_11__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(ME_TextEditor *VAR_1, ME_Cursor *VAR_2, BOOL VAR_3)
{
  VAR_2->pPara = VAR_1->pBuffer->pLast->member.para.prev_para;
  VAR_2->pRun = FUNC_0(VAR_1->pBuffer->pLast, VAR_0);
  VAR_2->nOffset = VAR_3 ? VAR_2->pRun->member.run.len : 0;
}
