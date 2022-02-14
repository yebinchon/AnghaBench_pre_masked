
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nLTerm; scalar_t__ nSkip; scalar_t__ rRun; scalar_t__ nOut; scalar_t__* aLTerm; int wsFlags; } ;
typedef TYPE_1__ WhereLoop ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
  const WhereLoop *VAR_1,
  const WhereLoop *VAR_2
){
  int VAR_3, VAR_4;
  if( VAR_1->nLTerm-VAR_1->nSkip >= VAR_2->nLTerm-VAR_2->nSkip ){
    return 0;
  }
  if( VAR_2->nSkip > VAR_1->nSkip ) return 0;
  if( VAR_1->rRun >= VAR_2->rRun ){
    if( VAR_1->rRun > VAR_2->rRun ) return 0;
    if( VAR_1->nOut > VAR_2->nOut ) return 0;
  }
  for(VAR_3=VAR_1->nLTerm-1; VAR_3>=0; VAR_3--){
    if( VAR_1->aLTerm[VAR_3]==0 ) continue;
    for(VAR_4=VAR_2->nLTerm-1; VAR_4>=0; VAR_4--){
      if( VAR_2->aLTerm[VAR_4]==VAR_1->aLTerm[VAR_3] ) break;
    }
    if( VAR_4<0 ) return 0;
  }
  if( (VAR_1->wsFlags&VAR_0)!=0
   && (VAR_2->wsFlags&VAR_0)==0 ){
    return 0;
  }
  return 1;
}
