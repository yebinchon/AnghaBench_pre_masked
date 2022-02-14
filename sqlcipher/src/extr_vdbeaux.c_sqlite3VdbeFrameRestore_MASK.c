
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pc; scalar_t__ pAuxData; int nDbChange; int nChange; int lastRowid; int nCursor; int apCsr; int nMem; int aMem; int nOp; int aOp; int anExec; TYPE_2__* v; } ;
typedef TYPE_1__ VdbeFrame ;
struct TYPE_7__ {scalar_t__ pAuxData; TYPE_4__* db; int nChange; int nCursor; int apCsr; int nMem; int aMem; int nOp; int aOp; int anExec; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_8__ {int nChange; int lastRowid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,scalar_t__*,int,int ) ;

int FUNC_2(VdbeFrame *VAR_0){
  Vdbe *VAR_1 = VAR_0->v;
  FUNC_0(VAR_1);



  VAR_1->aOp = VAR_0->aOp;
  VAR_1->nOp = VAR_0->nOp;
  VAR_1->aMem = VAR_0->aMem;
  VAR_1->nMem = VAR_0->nMem;
  VAR_1->apCsr = VAR_0->apCsr;
  VAR_1->nCursor = VAR_0->nCursor;
  VAR_1->db->lastRowid = VAR_0->lastRowid;
  VAR_1->nChange = VAR_0->nChange;
  VAR_1->db->nChange = VAR_0->nDbChange;
  FUNC_1(VAR_1->db, &VAR_1->pAuxData, -1, 0);
  VAR_1->pAuxData = VAR_0->pAuxData;
  VAR_0->pAuxData = 0;
  return VAR_0->pc;
}
