
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {scalar_t__ p; } ;
struct TYPE_10__ {int p1; int p2; int p3; scalar_t__ iSrcLine; scalar_t__ cnt; scalar_t__ cycles; scalar_t__ zComment; int p4type; TYPE_1__ p4; scalar_t__ p5; scalar_t__ opcode; } ;
typedef TYPE_3__ VdbeOp ;
struct TYPE_11__ {int nOp; scalar_t__ magic; int nOpAlloc; TYPE_3__* aOp; TYPE_2__* db; } ;
typedef TYPE_4__ Vdbe ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,int,int,int) ;
 int FUNC_2 (int ,int,TYPE_3__*) ;
 int FUNC_3 () ;

int FUNC_4(Vdbe *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7){
  int VAR_8;
  VdbeOp *VAR_9;

  VAR_8 = VAR_3->nOp;
  FUNC_0( VAR_3->magic==VAR_2 );
  FUNC_0( VAR_4>=0 && VAR_4<0xff );
  if( VAR_3->nOpAlloc<=VAR_8 ){
    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  }
  VAR_3->nOp++;
  VAR_9 = &VAR_3->aOp[VAR_8];
  VAR_9->opcode = (u8)VAR_4;
  VAR_9->p5 = 0;
  VAR_9->p1 = VAR_5;
  VAR_9->p2 = VAR_6;
  VAR_9->p3 = VAR_7;
  VAR_9->p4.p = 0;
  VAR_9->p4type = VAR_0;
  return VAR_8;
}
