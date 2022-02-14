
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nBasis; int n; int * zBasis; TYPE_2__* pRule; } ;
typedef TYPE_1__ fuzzer_stem ;
struct TYPE_5__ {int nTo; int nFrom; int * zTo; } ;
typedef TYPE_2__ fuzzer_rule ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(
  fuzzer_stem *VAR_2,
  char **VAR_3,
  int *VAR_4
){
  const fuzzer_rule *VAR_5 = VAR_2->pRule;
  int VAR_6;
  char *VAR_7;

  VAR_6 = VAR_2->nBasis + VAR_5->nTo - VAR_5->nFrom;
  if( (*VAR_4)<VAR_6+1 ){
    (*VAR_3) = FUNC_2((*VAR_3), VAR_6+100);
    if( (*VAR_3)==0 ) return VAR_0;
    (*VAR_4) = VAR_6+100;
  }
  VAR_6 = VAR_2->n;
  VAR_7 = *VAR_3;
  if( VAR_6<0 ){
    FUNC_1(VAR_7, VAR_2->zBasis, VAR_2->nBasis+1);
  }else{
    FUNC_1(VAR_7, VAR_2->zBasis, VAR_6);
    FUNC_1(&VAR_7[VAR_6], VAR_5->zTo, VAR_5->nTo);
    FUNC_1(&VAR_7[VAR_6+VAR_5->nTo], &VAR_2->zBasis[VAR_6+VAR_5->nFrom],
           VAR_2->nBasis-VAR_6-VAR_5->nFrom+1);
  }

  FUNC_0( VAR_7[VAR_2->nBasis + VAR_5->nTo - VAR_5->nFrom]==0 );
  return VAR_1;
}
