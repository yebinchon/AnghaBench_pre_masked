
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int iOp; TYPE_1__* pVdbe; } ;
typedef TYPE_3__ sqlite3_context ;
struct TYPE_7__ {int * pColl; } ;
struct TYPE_9__ {scalar_t__ opcode; scalar_t__ p4type; TYPE_2__ p4; } ;
typedef TYPE_4__ VdbeOp ;
struct TYPE_6__ {TYPE_4__* aOp; } ;
typedef int CollSeq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static CollSeq *FUNC_1(sqlite3_context *VAR_2){
  VdbeOp *VAR_3;
  FUNC_0( VAR_2->pVdbe!=0 );
  VAR_3 = &VAR_2->pVdbe->aOp[VAR_2->iOp-1];
  FUNC_0( VAR_3->opcode==VAR_0 );
  FUNC_0( VAR_3->p4type==VAR_1 );
  return VAR_3->p4.pColl;
}
