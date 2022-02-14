
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int nsubst; TYPE_2__* subst; TYPE_1__* subdict; } ;
struct TYPE_14__ {int flags; struct TYPE_14__* lexeme; } ;
struct TYPE_13__ {int reslen; TYPE_3__* res; } ;
struct TYPE_12__ {TYPE_3__* dictData; int lexize; } ;
typedef TYPE_3__ TSLexeme ;
typedef TYPE_4__ DictThesaurus ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_12(DictThesaurus *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->nsubst; VAR_5++)
 {
  TSLexeme *VAR_6 = VAR_4->subst[VAR_5].res,
       *VAR_7,
       *VAR_8;
  int VAR_9 = 2;

  VAR_7 = VAR_4->subst[VAR_5].res = (TSLexeme *) FUNC_7(sizeof(TSLexeme) * VAR_9);
  VAR_7->lexeme = ((void*)0);
  VAR_8 = VAR_6;

  while (VAR_8 && VAR_8->lexeme)
  {
   TSLexeme *VAR_10,
      VAR_11[2];

   if (VAR_8->flags & VAR_0)
   {
    VAR_11[0] = *VAR_8;
    VAR_11[0].flags = 0;
    VAR_11[1].lexeme = ((void*)0);
    VAR_10 = VAR_11;
   }
   else
   {
    VAR_10 = (TSLexeme *) FUNC_0(
                FUNC_1(
                  &(VAR_4->subdict->lexize),
                  FUNC_3(VAR_4->subdict->dictData),
                  FUNC_3(VAR_8->lexeme),
                  FUNC_2(FUNC_11(VAR_8->lexeme)),
                  FUNC_3(((void*)0))
                  )
     );
   }

   if (VAR_10 && VAR_10->lexeme)
   {
    int VAR_12 = (VAR_10->lexeme && VAR_7 != VAR_4->subst[VAR_5].res) ? (VAR_7 - VAR_4->subst[VAR_5].res) : -1;

    while (VAR_10->lexeme)
    {
     if (VAR_7 - VAR_4->subst[VAR_5].res + 1 >= VAR_9)
     {
      int VAR_13 = VAR_7 - VAR_4->subst[VAR_5].res;

      VAR_9 *= 2;
      VAR_4->subst[VAR_5].res = (TSLexeme *) FUNC_10(VAR_4->subst[VAR_5].res, sizeof(TSLexeme) * VAR_9);
      VAR_7 = VAR_4->subst[VAR_5].res + VAR_13;
     }

     *VAR_7 = *VAR_10;
     VAR_7->lexeme = FUNC_9(VAR_10->lexeme);

     VAR_7++;
     VAR_10++;
    }

    if (VAR_12 > 0)
     VAR_4->subst[VAR_5].res[VAR_12].flags |= VAR_3;
   }
   else if (VAR_10)
   {
    FUNC_4(VAR_2,
      (FUNC_5(VAR_1),
       FUNC_6("thesaurus substitute word \"%s\" is a stop word (rule %d)",
        VAR_8->lexeme, VAR_5 + 1)));
   }
   else
   {
    FUNC_4(VAR_2,
      (FUNC_5(VAR_1),
       FUNC_6("thesaurus substitute word \"%s\" isn't recognized by subdictionary (rule %d)",
        VAR_8->lexeme, VAR_5 + 1)));
   }

   if (VAR_8->lexeme)
    FUNC_8(VAR_8->lexeme);
   VAR_8++;
  }

  if (VAR_7 == VAR_4->subst[VAR_5].res)
   FUNC_4(VAR_2,
     (FUNC_5(VAR_1),
      FUNC_6("thesaurus substitute phrase is empty (rule %d)",
       VAR_5 + 1)));

  VAR_4->subst[VAR_5].reslen = VAR_7 - VAR_4->subst[VAR_5].res;

  FUNC_8(VAR_6);
 }
}
