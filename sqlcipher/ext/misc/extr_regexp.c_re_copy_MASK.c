
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nState; int nAlloc; int * aArg; int * aOp; } ;
typedef TYPE_1__ ReCompiled ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(ReCompiled *VAR_0, int VAR_1, int VAR_2){
  if( VAR_0->nState+VAR_2>=VAR_0->nAlloc && FUNC_1(VAR_0, VAR_0->nAlloc*2+VAR_2) ) return;
  FUNC_0(&VAR_0->aOp[VAR_0->nState], &VAR_0->aOp[VAR_1], VAR_2*sizeof(VAR_0->aOp[0]));
  FUNC_0(&VAR_0->aArg[VAR_0->nState], &VAR_0->aArg[VAR_1], VAR_2*sizeof(VAR_0->aArg[0]));
  VAR_0->nState += VAR_2;
}
