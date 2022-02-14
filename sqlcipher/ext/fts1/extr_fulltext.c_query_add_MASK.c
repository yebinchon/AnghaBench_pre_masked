
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nTerms; TYPE_1__* pTerm; } ;
struct TYPE_6__ {int is_phrase; char const* zTerm; } ;
typedef TYPE_1__ QueryTerm ;
typedef TYPE_2__ Query ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(Query *VAR_0, int VAR_1, const char *VAR_2){
  QueryTerm *VAR_3;
  ++VAR_0->nTerms;
  VAR_0->pTerm = FUNC_0(VAR_0->pTerm, VAR_0->nTerms * sizeof(VAR_0->pTerm[0]));
  VAR_3 = &VAR_0->pTerm[VAR_0->nTerms - 1];
  VAR_3->is_phrase = VAR_1;
  VAR_3->zTerm = VAR_2;
}
