
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_7__ {scalar_t__ iRowid; } ;
struct TYPE_6__ {TYPE_2__* pIter; struct TYPE_6__* pSynonym; } ;
typedef TYPE_1__ Fts5ExprTerm ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  Fts5ExprTerm *VAR_1,
  int VAR_2,
  i64 *VAR_3,
  int *VAR_4
){
  int VAR_5 = VAR_0;
  i64 VAR_6 = *VAR_3;
  Fts5ExprTerm *VAR_7;
  int VAR_8 = 0;

  for(VAR_7=VAR_1; VAR_5==VAR_0 && VAR_7; VAR_7=VAR_7->pSynonym){
    if( FUNC_1(VAR_7->pIter)==0 ){
      i64 VAR_9 = VAR_7->pIter->iRowid;
      if( (VAR_2==0 && VAR_6>VAR_9) || (VAR_2 && VAR_6<VAR_9) ){
        VAR_5 = FUNC_2(VAR_7->pIter, VAR_6);
      }
    }
  }

  if( VAR_5!=VAR_0 ){
    *VAR_4 = VAR_5;
    VAR_8 = 1;
  }else{
    *VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_8);
  }
  return VAR_8;
}
