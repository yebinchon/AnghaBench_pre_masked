
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {struct TYPE_22__* lexeme; struct TYPE_22__* entries; struct TYPE_22__* nextentry; scalar_t__ idsubst; } ;
typedef TYPE_2__ TheLexeme ;
struct TYPE_24__ {int nwrds; int ntwrds; TYPE_2__* wrds; TYPE_1__* subdict; } ;
struct TYPE_23__ {int nvariant; scalar_t__ lexeme; } ;
struct TYPE_21__ {TYPE_2__* dictData; int lexize; } ;
typedef TYPE_3__ TSLexeme ;
typedef TYPE_4__ DictThesaurus ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int*,int*,TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int,int,int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int) ;
 scalar_t__ FUNC_15 (TYPE_2__*,char*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_17(DictThesaurus *VAR_3)
{
 int VAR_4,
    VAR_5 = 0,
    VAR_6 = 16;
 TheLexeme *VAR_7 = (TheLexeme *) FUNC_11(sizeof(TheLexeme) * VAR_6),
      *VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_3->nwrds; VAR_4++)
 {
  TSLexeme *VAR_9;

  if (FUNC_15(VAR_3->wrds[VAR_4].lexeme, "?") == 0)
   VAR_7 = FUNC_4(VAR_7, &VAR_5, &VAR_6, ((void*)0), VAR_3->wrds[VAR_4].entries, 0);
  else
  {
   VAR_9 = (TSLexeme *) FUNC_0(FUNC_1(&(VAR_3->subdict->lexize),
                FUNC_3(VAR_3->subdict->dictData),
                FUNC_3(VAR_3->wrds[VAR_4].lexeme),
                FUNC_2(FUNC_16(VAR_3->wrds[VAR_4].lexeme)),
                FUNC_3(((void*)0))));

   if (!VAR_9)
    FUNC_7(VAR_1,
      (FUNC_8(VAR_0),
       FUNC_10("thesaurus sample word \"%s\" isn't recognized by subdictionary (rule %d)",
        VAR_3->wrds[VAR_4].lexeme,
        VAR_3->wrds[VAR_4].entries->idsubst + 1)));
   else if (!(VAR_9->lexeme))
    FUNC_7(VAR_1,
      (FUNC_8(VAR_0),
       FUNC_10("thesaurus sample word \"%s\" is a stop word (rule %d)",
        VAR_3->wrds[VAR_4].lexeme,
        VAR_3->wrds[VAR_4].entries->idsubst + 1),
       FUNC_9("Use \"?\" to represent a stop word within a sample phrase.")));
   else
   {
    while (VAR_9->lexeme)
    {
     TSLexeme *VAR_10 = VAR_9 + 1;
     int VAR_11 = 1;
     int VAR_12 = VAR_9->nvariant;


     while (VAR_10->lexeme)
     {
      if (VAR_10->nvariant != (VAR_10 - 1)->nvariant)
       break;
      VAR_11++;
      VAR_10++;
     }

     VAR_10 = VAR_9;
     while (VAR_10->lexeme && VAR_10->nvariant == VAR_12)
     {
      VAR_7 = FUNC_4(VAR_7, &VAR_5, &VAR_6, VAR_10, VAR_3->wrds[VAR_4].entries, VAR_11);
      VAR_10++;
     }

     VAR_9 = VAR_10;
    }
   }
  }

  FUNC_12(VAR_3->wrds[VAR_4].lexeme);
  FUNC_12(VAR_3->wrds[VAR_4].entries);
 }

 if (VAR_3->wrds)
  FUNC_12(VAR_3->wrds);
 VAR_3->wrds = VAR_7;
 VAR_3->nwrds = VAR_5;
 VAR_3->ntwrds = VAR_6;

 if (VAR_3->nwrds > 1)
 {
  FUNC_13(VAR_3->wrds, VAR_3->nwrds, sizeof(TheLexeme), VAR_2);


  VAR_7 = VAR_3->wrds;
  VAR_8 = VAR_3->wrds + 1;
  while (VAR_8 - VAR_3->wrds < VAR_3->nwrds)
  {
   if (FUNC_5(VAR_8, VAR_7) == 0)
   {
    if (FUNC_6(VAR_8->entries, VAR_7->entries))
    {
     VAR_8->entries->nextentry = VAR_7->entries;
     VAR_7->entries = VAR_8->entries;
    }
    else
     FUNC_12(VAR_8->entries);

    if (VAR_8->lexeme)
     FUNC_12(VAR_8->lexeme);
   }
   else
   {
    VAR_7++;
    *VAR_7 = *VAR_8;
   }

   VAR_8++;
  }

  VAR_3->nwrds = VAR_7 - VAR_3->wrds + 1;
  VAR_3->wrds = (TheLexeme *) FUNC_14(VAR_3->wrds, sizeof(TheLexeme) * VAR_3->nwrds);
 }
}
