
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t p2; } ;
typedef TYPE_1__ VdbeOp ;
struct TYPE_13__ {size_t nMem; size_t nCursor; TYPE_3__* aMem; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static Mem *FUNC_4(Vdbe *VAR_1, VdbeOp *VAR_2){
  Mem *VAR_3;
  FUNC_1( VAR_2->p2>0 );
  FUNC_1( VAR_2->p2<=(VAR_1->nMem+1 - VAR_1->nCursor) );
  VAR_3 = &VAR_1->aMem[VAR_2->p2];
  FUNC_2(VAR_1, VAR_3);
  if( FUNC_0(VAR_3) ){
    return FUNC_3(VAR_3);
  }else{
    VAR_3->flags = VAR_0;
    return VAR_3;
  }
}
