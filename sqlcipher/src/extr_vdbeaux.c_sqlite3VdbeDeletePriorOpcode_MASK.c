
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int nOp; TYPE_1__* aOp; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_5__ {scalar_t__ opcode; } ;


 int FUNC_0 (TYPE_2__*,int) ;

int FUNC_1(Vdbe *VAR_0, u8 VAR_1){
  if( VAR_0->nOp>0 && VAR_0->aOp[VAR_0->nOp-1].opcode==VAR_1 ){
    return FUNC_0(VAR_0, VAR_0->nOp-1);
  }else{
    return 0;
  }
}
