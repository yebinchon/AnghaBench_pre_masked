
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* aOp; int* aArg; int nAlloc; } ;
typedef TYPE_1__ ReCompiled ;


 void* FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(ReCompiled *VAR_0, int VAR_1){
  char *VAR_2;
  int *VAR_3;
  VAR_2 = FUNC_0(VAR_0->aOp, VAR_1*sizeof(VAR_0->aOp[0]));
  if( VAR_2==0 ) return 1;
  VAR_0->aOp = VAR_2;
  VAR_3 = FUNC_0(VAR_0->aArg, VAR_1*sizeof(VAR_0->aArg[0]));
  if( VAR_3==0 ) return 1;
  VAR_0->aArg = VAR_3;
  VAR_0->nAlloc = VAR_1;
  return 0;
}
