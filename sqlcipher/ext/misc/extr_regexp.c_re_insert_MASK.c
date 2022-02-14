
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nAlloc; int nState; char* aOp; int* aArg; } ;
typedef TYPE_1__ ReCompiled ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(ReCompiled *VAR_0, int VAR_1, int VAR_2, int VAR_3){
  int VAR_4;
  if( VAR_0->nAlloc<=VAR_0->nState && FUNC_0(VAR_0, VAR_0->nAlloc*2) ) return 0;
  for(VAR_4=VAR_0->nState; VAR_4>VAR_1; VAR_4--){
    VAR_0->aOp[VAR_4] = VAR_0->aOp[VAR_4-1];
    VAR_0->aArg[VAR_4] = VAR_0->aArg[VAR_4-1];
  }
  VAR_0->nState++;
  VAR_0->aOp[VAR_1] = (char)VAR_2;
  VAR_0->aArg[VAR_1] = VAR_3;
  return VAR_1;
}
