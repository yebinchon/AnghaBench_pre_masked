
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* lexeme; int * entries; } ;
typedef TYPE_1__ TheLexeme ;
struct TYPE_7__ {int nwrds; int wrds; } ;
typedef int LexemeInfo ;
typedef TYPE_2__ DictThesaurus ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static LexemeInfo *
FUNC_1(DictThesaurus *VAR_1, char *VAR_2)
{
 TheLexeme VAR_3,
      *VAR_4;

 if (VAR_1->nwrds == 0)
  return ((void*)0);

 VAR_3.lexeme = VAR_2;
 VAR_3.entries = ((void*)0);

 VAR_4 = FUNC_0(&VAR_3, VAR_1->wrds, VAR_1->nwrds, sizeof(TheLexeme), VAR_0);

 if (VAR_4 == ((void*)0))
  return ((void*)0);
 return VAR_4->entries;
}
