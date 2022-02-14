
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nState; int* aState; } ;
typedef TYPE_1__ ReStateSet ;
typedef int ReStateNumber ;



__attribute__((used)) static void FUNC_0(ReStateSet *VAR_0, int VAR_1){
  unsigned VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nState; VAR_2++) if( VAR_0->aState[VAR_2]==VAR_1 ) return;
  VAR_0->aState[VAR_0->nState++] = (ReStateNumber)VAR_1;
}
