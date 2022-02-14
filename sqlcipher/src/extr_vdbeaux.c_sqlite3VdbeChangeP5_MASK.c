
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int nOp; TYPE_2__* aOp; TYPE_1__* db; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_6__ {int p5; } ;
struct TYPE_5__ {scalar_t__ mallocFailed; } ;


 int FUNC_0 (int) ;

void FUNC_1(Vdbe *VAR_0, u16 VAR_1){
  FUNC_0( VAR_0->nOp>0 || VAR_0->db->mallocFailed );
  if( VAR_0->nOp>0 ) VAR_0->aOp[VAR_0->nOp-1].p5 = VAR_1;
}
