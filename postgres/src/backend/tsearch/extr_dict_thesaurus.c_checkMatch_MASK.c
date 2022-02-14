
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_8__ {scalar_t__ lastlexeme; } ;
struct TYPE_7__ {size_t nsubst; TYPE_3__* subst; } ;
struct TYPE_6__ {size_t idsubst; struct TYPE_6__* nextvariant; } ;
typedef int TSLexeme ;
typedef TYPE_1__ LexemeInfo ;
typedef TYPE_2__ DictThesaurus ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static TSLexeme *
FUNC_2(DictThesaurus *VAR_0, LexemeInfo *VAR_1, uint16 VAR_2, bool *VAR_3)
{
 *VAR_3 = 0;
 while (VAR_1)
 {
  FUNC_0(VAR_1->idsubst < VAR_0->nsubst);
  if (VAR_1->nextvariant)
   *VAR_3 = 1;
  if (VAR_0->subst[VAR_1->idsubst].lastlexeme == VAR_2)
   return FUNC_1(VAR_0->subst + VAR_1->idsubst);
  VAR_1 = VAR_1->nextvariant;
 }

 return ((void*)0);
}
