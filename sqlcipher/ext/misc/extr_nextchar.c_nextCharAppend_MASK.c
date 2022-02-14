
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nUsed; unsigned int* aResult; int nAlloc; int mallocFailed; } ;
typedef TYPE_1__ nextCharContext ;


 unsigned int* FUNC_0 (unsigned int*,int) ;

__attribute__((used)) static void FUNC_1(nextCharContext *VAR_0, unsigned VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nUsed; VAR_2++){
    if( VAR_0->aResult[VAR_2]==VAR_1 ) return;
  }
  if( VAR_0->nUsed+1 > VAR_0->nAlloc ){
    unsigned int *VAR_3;
    int VAR_4 = VAR_0->nAlloc*2 + 30;
    VAR_3 = FUNC_0(VAR_0->aResult, VAR_4*sizeof(unsigned int));
    if( VAR_3==0 ){
      VAR_0->mallocFailed = 1;
      return;
    }else{
      VAR_0->aResult = VAR_3;
      VAR_0->nAlloc = VAR_4;
    }
  }
  VAR_0->aResult[VAR_0->nUsed++] = VAR_1;
}
