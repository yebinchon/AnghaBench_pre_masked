
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* aTerm; scalar_t__ nTerm; } ;
struct TYPE_4__ {int bFirst; } ;
typedef TYPE_2__ Fts5ExprPhrase ;



void FUNC_0(Fts5ExprPhrase *VAR_0){
  if( VAR_0 && VAR_0->nTerm ){
    VAR_0->aTerm[0].bFirst = 1;
  }
}
