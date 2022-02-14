
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nTerms; int dfltColumn; int nextColumn; scalar_t__ nextIsOr; TYPE_1__* pTerms; } ;
struct TYPE_7__ {int nTerm; int iColumn; scalar_t__ isPrefix; scalar_t__ isOr; scalar_t__* pTerm; } ;
typedef TYPE_1__ QueryTerm ;
typedef TYPE_2__ Query ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;
 scalar_t__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(Query *VAR_0, const char *VAR_1, int VAR_2){
  QueryTerm *VAR_3;
  ++VAR_0->nTerms;
  VAR_0->pTerms = FUNC_3(VAR_0->pTerms, VAR_0->nTerms * sizeof(VAR_0->pTerms[0]));
  if( VAR_0->pTerms==0 ){
    VAR_0->nTerms = 0;
    return;
  }
  VAR_3 = &VAR_0->pTerms[VAR_0->nTerms - 1];
  FUNC_0(VAR_3);
  VAR_3->pTerm = FUNC_2(VAR_2+1);
  FUNC_1(VAR_3->pTerm, VAR_1, VAR_2);
  VAR_3->pTerm[VAR_2] = 0;
  VAR_3->nTerm = VAR_2;
  VAR_3->isOr = VAR_0->nextIsOr;
  VAR_3->isPrefix = 0;
  VAR_0->nextIsOr = 0;
  VAR_3->iColumn = VAR_0->nextColumn;
  VAR_0->nextColumn = VAR_0->dfltColumn;
}
