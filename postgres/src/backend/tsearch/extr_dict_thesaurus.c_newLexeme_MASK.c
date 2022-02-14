
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_6__ {char* lexeme; TYPE_2__* entries; } ;
typedef TYPE_1__ TheLexeme ;
struct TYPE_8__ {int nwrds; int ntwrds; TYPE_1__* wrds; } ;
struct TYPE_7__ {int posinsubst; int idsubst; int * nextentry; } ;
typedef TYPE_2__ LexemeInfo ;
typedef TYPE_3__ DictThesaurus ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(DictThesaurus *VAR_0, char *VAR_1, char *VAR_2, uint32 VAR_3, uint16 VAR_4)
{
 TheLexeme *VAR_5;

 if (VAR_0->nwrds >= VAR_0->ntwrds)
 {
  if (VAR_0->ntwrds == 0)
  {
   VAR_0->ntwrds = 16;
   VAR_0->wrds = (TheLexeme *) FUNC_1(sizeof(TheLexeme) * VAR_0->ntwrds);
  }
  else
  {
   VAR_0->ntwrds *= 2;
   VAR_0->wrds = (TheLexeme *) FUNC_2(VAR_0->wrds, sizeof(TheLexeme) * VAR_0->ntwrds);
  }
 }

 VAR_5 = VAR_0->wrds + VAR_0->nwrds;
 VAR_0->nwrds++;

 VAR_5->lexeme = FUNC_1(VAR_2 - VAR_1 + 1);

 FUNC_0(VAR_5->lexeme, VAR_1, VAR_2 - VAR_1);
 VAR_5->lexeme[VAR_2 - VAR_1] = '\0';

 VAR_5->entries = (LexemeInfo *) FUNC_1(sizeof(LexemeInfo));

 VAR_5->entries->nextentry = ((void*)0);
 VAR_5->entries->idsubst = VAR_3;
 VAR_5->entries->posinsubst = VAR_4;
}
