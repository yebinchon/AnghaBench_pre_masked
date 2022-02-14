
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* p; } ;
struct TYPE_7__ {int p4type; TYPE_1__ p4; } ;
typedef TYPE_2__ VdbeOp ;
struct TYPE_8__ {int nOp; TYPE_2__* aOp; TYPE_5__* db; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_9__ {scalar_t__ mallocFailed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int,void*) ;

void FUNC_2(Vdbe *VAR_3, void *VAR_4, int VAR_5){
  VdbeOp *VAR_6;
  FUNC_0( VAR_5!=VAR_0 && VAR_5!=VAR_2 );
  FUNC_0( VAR_5<=0 );
  if( VAR_3->db->mallocFailed ){
    FUNC_1(VAR_3->db, VAR_5, VAR_4);
  }else{
    FUNC_0( VAR_4!=0 );
    FUNC_0( VAR_3->nOp>0 );
    VAR_6 = &VAR_3->aOp[VAR_3->nOp-1];
    FUNC_0( VAR_6->p4type==VAR_1 );
    VAR_6->p4type = VAR_5;
    VAR_6->p4.p = VAR_4;
  }
}
