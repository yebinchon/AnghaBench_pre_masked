
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nLeTerm; scalar_t__ bEof; scalar_t__ zLeTerm; scalar_t__ pIter; scalar_t__ rowid; } ;
typedef TYPE_1__ Fts5VocabCursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(Fts5VocabCursor *VAR_0){
  VAR_0->rowid = 0;
  FUNC_0(VAR_0->pIter);
  VAR_0->pIter = 0;
  FUNC_1(VAR_0->zLeTerm);
  VAR_0->nLeTerm = -1;
  VAR_0->zLeTerm = 0;
  VAR_0->bEof = 0;
}
