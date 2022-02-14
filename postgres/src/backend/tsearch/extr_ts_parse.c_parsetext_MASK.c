
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {size_t curwords; size_t lenwords; int pos; TYPE_5__* words; } ;
struct TYPE_13__ {int pos; } ;
struct TYPE_17__ {int flags; TYPE_1__ pos; scalar_t__ alen; int nvariant; scalar_t__ word; int len; } ;
struct TYPE_16__ {int prsId; } ;
struct TYPE_15__ {int flags; int nvariant; scalar_t__ lexeme; } ;
struct TYPE_14__ {int prsend; int prstoken; int prsstart; } ;
typedef TYPE_2__ TSParserCacheEntry ;
typedef TYPE_3__ TSLexeme ;
typedef TYPE_4__ TSConfigCacheEntry ;
typedef TYPE_5__ ParsedWord ;
typedef TYPE_6__ ParsedText ;
typedef int Oid ;
typedef int LexizeData ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,char*,int) ;
 TYPE_3__* FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*) ;
 TYPE_4__* FUNC_15 (int ) ;
 TYPE_2__* FUNC_16 (int ) ;
 int FUNC_17 (TYPE_3__*) ;
 scalar_t__ FUNC_18 (void*,int) ;
 int FUNC_19 (scalar_t__) ;

void
FUNC_20(Oid VAR_6, ParsedText *VAR_7, char *VAR_8, int VAR_9)
{
 int VAR_10,
    VAR_11;
 char *VAR_12 = ((void*)0);
 LexizeData VAR_13;
 TSLexeme *VAR_14;
 TSConfigCacheEntry *VAR_15;
 TSParserCacheEntry *VAR_16;
 void *VAR_17;

 VAR_15 = FUNC_15(VAR_6);
 VAR_16 = FUNC_16(VAR_15->prsId);

 VAR_17 = (void *) FUNC_1(FUNC_3(&VAR_16->prsstart,
              FUNC_10(VAR_8),
              FUNC_5(VAR_9)));

 FUNC_9(&VAR_13, VAR_15);

 do
 {
  VAR_10 = FUNC_0(FUNC_4(&(VAR_16->prstoken),
             FUNC_10(VAR_17),
             FUNC_10(&VAR_12),
             FUNC_10(&VAR_11)));

  if (VAR_10 > 0 && VAR_11 >= VAR_2)
  {
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_14("word is too long to be indexed"),
      FUNC_13("Words longer than %d characters are ignored.",
          VAR_2)));

  }

  FUNC_7(&VAR_13, VAR_10, VAR_12, VAR_11);

  while ((VAR_14 = FUNC_8(&VAR_13, ((void*)0))) != ((void*)0))
  {
   TSLexeme *VAR_18 = VAR_14;

   VAR_7->pos++;

   while (VAR_18->lexeme)
   {
    if (VAR_7->curwords == VAR_7->lenwords)
    {
     VAR_7->lenwords *= 2;
     VAR_7->words = (ParsedWord *) FUNC_18((void *) VAR_7->words, VAR_7->lenwords * sizeof(ParsedWord));
    }

    if (VAR_18->flags & VAR_4)
     VAR_7->pos++;
    VAR_7->words[VAR_7->curwords].len = FUNC_19(VAR_18->lexeme);
    VAR_7->words[VAR_7->curwords].word = VAR_18->lexeme;
    VAR_7->words[VAR_7->curwords].nvariant = VAR_18->nvariant;
    VAR_7->words[VAR_7->curwords].flags = VAR_18->flags & VAR_5;
    VAR_7->words[VAR_7->curwords].alen = 0;
    VAR_7->words[VAR_7->curwords].pos.pos = FUNC_6(VAR_7->pos);
    VAR_18++;
    VAR_7->curwords++;
   }
   FUNC_17(VAR_14);
  }
 } while (VAR_10 > 0);

 FUNC_2(&(VAR_16->prsend), FUNC_10(VAR_17));
}
