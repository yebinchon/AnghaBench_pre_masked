
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nLTerm; scalar_t__ nSkip; scalar_t__ rRun; scalar_t__ nOut; scalar_t__* aLTerm; } ;
typedef TYPE_1__ WhereLoop ;



__attribute__((used)) static int FUNC_0(
  const WhereLoop *VAR_0,
  const WhereLoop *VAR_1
){
  int VAR_2, VAR_3;
  if( VAR_0->nLTerm-VAR_0->nSkip >= VAR_1->nLTerm-VAR_1->nSkip ){
    return 0;
  }
  if( VAR_1->nSkip > VAR_0->nSkip ) return 0;
  if( VAR_0->rRun >= VAR_1->rRun ){
    if( VAR_0->rRun > VAR_1->rRun ) return 0;
    if( VAR_0->nOut > VAR_1->nOut ) return 0;
  }
  for(VAR_2=VAR_0->nLTerm-1; VAR_2>=0; VAR_2--){
    if( VAR_0->aLTerm[VAR_2]==0 ) continue;
    for(VAR_3=VAR_1->nLTerm-1; VAR_3>=0; VAR_3--){
      if( VAR_1->aLTerm[VAR_3]==VAR_0->aLTerm[VAR_2] ) break;
    }
    if( VAR_3<0 ) return 0;
  }
  return 1;
}
