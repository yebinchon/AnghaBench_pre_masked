
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z; int p; } ;
struct TYPE_7__ {int opcode; TYPE_1__ p4; int p4type; } ;
typedef TYPE_2__ VdbeOp ;
struct TYPE_8__ {int nOp; TYPE_5__* db; TYPE_2__* aOp; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_9__ {scalar_t__ mallocFailed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;

int FUNC_2(Vdbe *VAR_2, int VAR_3){
  VdbeOp *VAR_4;
  if( VAR_2->db->mallocFailed ) return 0;
  FUNC_0( VAR_3>=0 && VAR_3<VAR_2->nOp );
  VAR_4 = &VAR_2->aOp[VAR_3];
  FUNC_1(VAR_2->db, VAR_4->p4type, VAR_4->p4.p);
  VAR_4->p4type = VAR_1;
  VAR_4->p4.z = 0;
  VAR_4->opcode = VAR_0;
  return 1;
}
