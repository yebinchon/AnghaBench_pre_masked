
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t opcode; scalar_t__ p2; int p3; int p1; } ;
typedef TYPE_3__ VdbeOpList ;
struct TYPE_11__ {scalar_t__ p; } ;
struct TYPE_14__ {size_t opcode; scalar_t__ p2; int iSrcLine; scalar_t__ zComment; scalar_t__ p5; TYPE_1__ p4; int p4type; int p3; int p1; } ;
typedef TYPE_4__ VdbeOp ;
struct TYPE_15__ {scalar_t__ magic; int nOp; int nOpAlloc; TYPE_4__* aOp; TYPE_2__* db; } ;
typedef TYPE_5__ Vdbe ;
struct TYPE_12__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 int* VAR_4 ;
 int FUNC_2 (int ,int,TYPE_4__*) ;

VdbeOp *FUNC_3(
  Vdbe *VAR_5,
  int VAR_6,
  VdbeOpList const *VAR_7,
  int VAR_8
){
  int VAR_9;
  VdbeOp *VAR_10, *VAR_11;
  FUNC_0( VAR_6>0 );
  FUNC_0( VAR_5->magic==VAR_3 );
  if( VAR_5->nOp + VAR_6 > VAR_5->nOpAlloc && FUNC_1(VAR_5, VAR_6) ){
    return 0;
  }
  VAR_11 = VAR_10 = &VAR_5->aOp[VAR_5->nOp];
  for(VAR_9=0; VAR_9<VAR_6; VAR_9++, VAR_7++, VAR_10++){
    VAR_10->opcode = VAR_7->opcode;
    VAR_10->p1 = VAR_7->p1;
    VAR_10->p2 = VAR_7->p2;
    FUNC_0( VAR_7->p2>=0 );
    if( (VAR_4[VAR_7->opcode] & VAR_0)!=0 && VAR_7->p2>0 ){
      VAR_10->p2 += VAR_5->nOp;
    }
    VAR_10->p3 = VAR_7->p3;
    VAR_10->p4type = VAR_1;
    VAR_10->p4.p = 0;
    VAR_10->p5 = 0;






    (void)VAR_8;






  }
  VAR_5->nOp += VAR_6;
  return VAR_11;
}
