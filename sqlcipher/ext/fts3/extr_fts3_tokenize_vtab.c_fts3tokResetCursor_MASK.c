
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pVtab; } ;
struct TYPE_9__ {scalar_t__ iRowid; scalar_t__ iPos; scalar_t__ iEnd; scalar_t__ iStart; scalar_t__ nToken; scalar_t__ zToken; scalar_t__ zInput; scalar_t__ pCsr; TYPE_1__ base; } ;
struct TYPE_8__ {TYPE_2__* pMod; } ;
struct TYPE_7__ {int (* xClose ) (scalar_t__) ;} ;
typedef TYPE_3__ Fts3tokTable ;
typedef TYPE_4__ Fts3tokCursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(Fts3tokCursor *VAR_0){
  if( VAR_0->pCsr ){
    Fts3tokTable *VAR_1 = (Fts3tokTable *)(VAR_0->base.pVtab);
    VAR_1->pMod->xClose(VAR_0->pCsr);
    VAR_0->pCsr = 0;
  }
  FUNC_0(VAR_0->zInput);
  VAR_0->zInput = 0;
  VAR_0->zToken = 0;
  VAR_0->nToken = 0;
  VAR_0->iStart = 0;
  VAR_0->iEnd = 0;
  VAR_0->iPos = 0;
  VAR_0->iRowid = 0;
}
