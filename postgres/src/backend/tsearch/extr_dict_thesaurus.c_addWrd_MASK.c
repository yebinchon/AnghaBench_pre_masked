
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_6__ {char* lexeme; struct TYPE_6__* res; scalar_t__ flags; scalar_t__ nvariant; scalar_t__ lastlexeme; } ;
typedef TYPE_1__ TheSubstitute ;
struct TYPE_7__ {int nsubst; TYPE_1__* subst; } ;
typedef TYPE_1__ TSLexeme ;
typedef TYPE_3__ DictThesaurus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(DictThesaurus *VAR_1, char *VAR_2, char *VAR_3, uint32 VAR_4, uint16 VAR_5, uint16 VAR_6, bool VAR_7)
{
 static int VAR_8 = 0;
 static int VAR_9 = 0;
 TheSubstitute *VAR_10;

 if (VAR_5 == 0)
 {
  VAR_8 = VAR_9 = 0;

  if (VAR_4 >= VAR_1->nsubst)
  {
   if (VAR_1->nsubst == 0)
   {
    VAR_1->nsubst = 16;
    VAR_1->subst = (TheSubstitute *) FUNC_1(sizeof(TheSubstitute) * VAR_1->nsubst);
   }
   else
   {
    VAR_1->nsubst *= 2;
    VAR_1->subst = (TheSubstitute *) FUNC_2(VAR_1->subst, sizeof(TheSubstitute) * VAR_1->nsubst);
   }
  }
 }

 VAR_10 = VAR_1->subst + VAR_4;

 VAR_10->lastlexeme = VAR_6 - 1;

 if (VAR_8 + 1 >= VAR_9)
 {
  if (VAR_9 == 0)
  {
   VAR_9 = 2;
   VAR_10->res = (TSLexeme *) FUNC_1(sizeof(TSLexeme) * VAR_9);
  }
  else
  {
   VAR_9 *= 2;
   VAR_10->res = (TSLexeme *) FUNC_2(VAR_10->res, sizeof(TSLexeme) * VAR_9);
  }
 }

 VAR_10->res[VAR_8].lexeme = FUNC_1(VAR_3 - VAR_2 + 1);
 FUNC_0(VAR_10->res[VAR_8].lexeme, VAR_2, VAR_3 - VAR_2);
 VAR_10->res[VAR_8].lexeme[VAR_3 - VAR_2] = '\0';

 VAR_10->res[VAR_8].nvariant = VAR_5;
 if (VAR_7)
  VAR_10->res[VAR_8].flags = VAR_0;
 else
  VAR_10->res[VAR_8].flags = 0;

 VAR_10->res[++VAR_8].lexeme = ((void*)0);
}
