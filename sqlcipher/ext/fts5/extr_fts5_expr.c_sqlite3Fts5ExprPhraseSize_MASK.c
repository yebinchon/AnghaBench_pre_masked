
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nPhrase; TYPE_1__** apExprPhrase; } ;
struct TYPE_4__ {int nTerm; } ;
typedef TYPE_2__ Fts5Expr ;



int FUNC_0(Fts5Expr *VAR_0, int VAR_1){
  if( VAR_1<0 || VAR_1>=VAR_0->nPhrase ) return 0;
  return VAR_0->apExprPhrase[VAR_1]->nTerm;
}
