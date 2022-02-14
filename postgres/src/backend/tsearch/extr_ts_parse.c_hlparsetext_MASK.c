
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int vectorpos; } ;
struct TYPE_10__ {int prsId; } ;
struct TYPE_9__ {int prsend; int prstoken; int prsstart; } ;
typedef int TSQuery ;
typedef TYPE_1__ TSParserCacheEntry ;
typedef int TSLexeme ;
typedef TYPE_2__ TSConfigCacheEntry ;
typedef int ParsedLex ;
typedef int Oid ;
typedef int LexizeData ;
typedef TYPE_3__ HeadlineParsedText ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int,char*,int) ;
 int * FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (void*) ;
 int FUNC_10 (TYPE_3__*,int ,int *,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*) ;
 TYPE_2__* FUNC_15 (int ) ;
 TYPE_1__* FUNC_16 (int ) ;

void
FUNC_17(Oid VAR_4, HeadlineParsedText *VAR_5, TSQuery VAR_6, char *VAR_7, int VAR_8)
{
 int VAR_9,
    VAR_10;
 char *VAR_11 = ((void*)0);
 LexizeData VAR_12;
 TSLexeme *VAR_13;
 ParsedLex *VAR_14;
 TSConfigCacheEntry *VAR_15;
 TSParserCacheEntry *VAR_16;
 void *VAR_17;

 VAR_15 = FUNC_15(VAR_4);
 VAR_16 = FUNC_16(VAR_15->prsId);

 VAR_17 = (void *) FUNC_1(FUNC_3(&(VAR_16->prsstart),
              FUNC_9(VAR_7),
              FUNC_5(VAR_8)));

 FUNC_8(&VAR_12, VAR_15);

 do
 {
  VAR_9 = FUNC_0(FUNC_4(&(VAR_16->prstoken),
             FUNC_9(VAR_17),
             FUNC_9(&VAR_11),
             FUNC_9(&VAR_10)));

  if (VAR_9 > 0 && VAR_10 >= VAR_2)
  {
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_14("word is too long to be indexed"),
      FUNC_13("Words longer than %d characters are ignored.",
          VAR_2)));

  }

  FUNC_6(&VAR_12, VAR_9, VAR_11, VAR_10);

  do
  {
   if ((VAR_13 = FUNC_7(&VAR_12, &VAR_14)) != ((void*)0))
   {
    VAR_5->vectorpos++;
    FUNC_10(VAR_5, VAR_6, VAR_14, VAR_13);
   }
   else
    FUNC_10(VAR_5, VAR_6, VAR_14, ((void*)0));
  } while (VAR_13);

 } while (VAR_9 > 0);

 FUNC_2(&(VAR_16->prsend), FUNC_9(VAR_17));
}
