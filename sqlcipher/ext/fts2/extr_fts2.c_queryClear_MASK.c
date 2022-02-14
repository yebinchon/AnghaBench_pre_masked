
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pTerm; } ;
struct TYPE_5__ {int nTerms; TYPE_2__* pTerms; } ;
typedef TYPE_1__ Query ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(Query *VAR_0){
  int VAR_1;
  for(VAR_1 = 0; VAR_1 < VAR_0->nTerms; ++VAR_1){
    FUNC_1(VAR_0->pTerms[VAR_1].pTerm);
  }
  FUNC_1(VAR_0->pTerms);
  FUNC_0(VAR_0);
}
