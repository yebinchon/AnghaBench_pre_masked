
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_15__ {int wtFlags; TYPE_4__* pWC; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_16__ {int iLikeRepCntr; } ;
typedef TYPE_6__ WhereLevel ;
struct TYPE_17__ {scalar_t__ opcode; int p3; scalar_t__ p5; } ;
typedef TYPE_7__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_14__ {TYPE_3__* pWInfo; } ;
struct TYPE_13__ {TYPE_2__* pParse; } ;
struct TYPE_12__ {TYPE_1__* db; } ;
struct TYPE_11__ {scalar_t__ mallocFailed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_7__* FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(
  Vdbe *VAR_2,
  WhereLevel *VAR_3,
  WhereTerm *VAR_4
){
  if( VAR_4->wtFlags & VAR_1 ){
    VdbeOp *VAR_5;
    FUNC_0( VAR_3->iLikeRepCntr>0 );
    VAR_5 = FUNC_1(VAR_2, -1);
    FUNC_0( VAR_5!=0 );
    FUNC_0( VAR_5->opcode==VAR_0
            || VAR_4->pWC->pWInfo->pParse->db->mallocFailed );
    VAR_5->p3 = (int)(VAR_3->iLikeRepCntr>>1);
    VAR_5->p5 = (u8)(VAR_3->iLikeRepCntr&1);
  }
}
