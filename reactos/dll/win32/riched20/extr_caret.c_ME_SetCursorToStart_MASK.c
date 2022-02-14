
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ nOffset; int pPara; int pRun; } ;
struct TYPE_13__ {TYPE_4__* pBuffer; } ;
struct TYPE_12__ {TYPE_3__* pFirst; } ;
struct TYPE_9__ {int next_para; } ;
struct TYPE_10__ {TYPE_1__ para; } ;
struct TYPE_11__ {TYPE_2__ member; } ;
typedef TYPE_5__ ME_TextEditor ;
typedef TYPE_6__ ME_Cursor ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

void FUNC_1(ME_TextEditor *VAR_1, ME_Cursor *VAR_2)
{
  VAR_2->pPara = VAR_1->pBuffer->pFirst->member.para.next_para;
  VAR_2->pRun = FUNC_0(VAR_2->pPara, VAR_0);
  VAR_2->nOffset = 0;
}
