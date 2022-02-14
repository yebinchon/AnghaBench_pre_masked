
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WordEntryPos ;
struct TYPE_3__ {char* word; char* prsbuf; int bufstart; scalar_t__ oprisdelim; scalar_t__ is_web; } ;
typedef TYPE_1__* TSVectorParseState ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,char) ;
 scalar_t__ FUNC_18 (char*) ;

bool
FUNC_19(TSVectorParseState VAR_13,
      char **VAR_14, int *VAR_15,
      WordEntryPos **VAR_16, int *VAR_17,
      char **VAR_18)
{
 int VAR_19 = 0;
 char *VAR_20 = VAR_13->word;
 int VAR_21 = VAR_12;





 WordEntryPos *VAR_22 = ((void*)0);
 int VAR_23 = 0;
 int VAR_24 = 0;

 while (1)
 {
  if (VAR_21 == VAR_12)
  {
   if (*(VAR_13->prsbuf) == '\0')
    return 0;
   else if (!VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '\''))
    VAR_21 = VAR_7;
   else if (!VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '\\'))
   {
    VAR_21 = VAR_9;
    VAR_19 = VAR_8;
   }
   else if ((VAR_13->oprisdelim && FUNC_2(VAR_13->prsbuf)) ||
      (VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '"')))
    VAR_3;
   else if (!FUNC_18(VAR_13->prsbuf))
   {
    FUNC_1(VAR_20, VAR_13->prsbuf);
    VAR_20 += FUNC_14(VAR_13->prsbuf);
    VAR_21 = VAR_8;
   }
  }
  else if (VAR_21 == VAR_9)
  {
   if (*(VAR_13->prsbuf) == '\0')
    FUNC_10(VAR_1,
      (FUNC_11(VAR_0),
       FUNC_12("there is no escaped character: \"%s\"",
        VAR_13->bufstart)));
   else
   {
    VAR_4;
    FUNC_1(VAR_20, VAR_13->prsbuf);
    VAR_20 += FUNC_14(VAR_13->prsbuf);
    FUNC_0(VAR_19 != 0);
    VAR_21 = VAR_19;
   }
  }
  else if (VAR_21 == VAR_8)
  {
   if (!VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '\\'))
   {
    VAR_21 = VAR_9;
    VAR_19 = VAR_8;
   }
   else if (FUNC_18(VAR_13->prsbuf) || *(VAR_13->prsbuf) == '\0' ||
      (VAR_13->oprisdelim && FUNC_2(VAR_13->prsbuf)) ||
      (VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '"')))
   {
    VAR_4;
    if (VAR_20 == VAR_13->word)
     VAR_3;
    *(VAR_20) = '\0';
    VAR_5;
   }
   else if (FUNC_17(VAR_13->prsbuf, ':'))
   {
    if (VAR_20 == VAR_13->word)
     VAR_3;
    *(VAR_20) = '\0';
    if (VAR_13->oprisdelim)
     VAR_5;
    else
     VAR_21 = VAR_2;
   }
   else
   {
    VAR_4;
    FUNC_1(VAR_20, VAR_13->prsbuf);
    VAR_20 += FUNC_14(VAR_13->prsbuf);
   }
  }
  else if (VAR_21 == VAR_7)
  {
   if (!VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '\''))
   {
    VAR_21 = VAR_6;
   }
   else if (!VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '\\'))
   {
    VAR_21 = VAR_9;
    VAR_19 = VAR_7;
   }
   else if (*(VAR_13->prsbuf) == '\0')
    VAR_3;
   else
   {
    VAR_4;
    FUNC_1(VAR_20, VAR_13->prsbuf);
    VAR_20 += FUNC_14(VAR_13->prsbuf);
   }
  }
  else if (VAR_21 == VAR_6)
  {
   if (!VAR_13->is_web && FUNC_17(VAR_13->prsbuf, '\''))
   {
    VAR_4;
    FUNC_1(VAR_20, VAR_13->prsbuf);
    VAR_20 += FUNC_14(VAR_13->prsbuf);
    VAR_21 = VAR_7;
   }
   else
   {
    VAR_4;
    *(VAR_20) = '\0';
    if (VAR_20 == VAR_13->word)
     VAR_3;
    if (VAR_13->oprisdelim)
    {

     VAR_5;
    }
    else
     VAR_21 = VAR_11;
    continue;
   }
  }
  else if (VAR_21 == VAR_11)
  {
   if (FUNC_17(VAR_13->prsbuf, ':'))
    VAR_21 = VAR_2;
   else
    VAR_5;
  }
  else if (VAR_21 == VAR_2)
  {
   if (FUNC_16(VAR_13->prsbuf))
   {
    if (VAR_24 == 0)
    {
     VAR_24 = 4;
     VAR_22 = (WordEntryPos *) FUNC_13(sizeof(WordEntryPos) * VAR_24);
     VAR_23 = 0;
    }
    else if (VAR_23 + 1 >= VAR_24)
    {
     VAR_24 *= 2;
     VAR_22 = (WordEntryPos *) FUNC_15(VAR_22, sizeof(WordEntryPos) * VAR_24);
    }
    VAR_23++;
    FUNC_6(VAR_22[VAR_23 - 1], FUNC_3(FUNC_8(VAR_13->prsbuf)));

    if (FUNC_4(VAR_22[VAR_23 - 1]) == 0)
     FUNC_10(VAR_1,
       (FUNC_11(VAR_0),
        FUNC_12("wrong position info in tsvector: \"%s\"",
         VAR_13->bufstart)));
    FUNC_7(VAR_22[VAR_23 - 1], 0);
    VAR_21 = VAR_10;
   }
   else
    VAR_3;
  }
  else if (VAR_21 == VAR_10)
  {
   if (FUNC_17(VAR_13->prsbuf, ','))
    VAR_21 = VAR_2;
   else if (FUNC_17(VAR_13->prsbuf, 'a') || FUNC_17(VAR_13->prsbuf, 'A') || FUNC_17(VAR_13->prsbuf, '*'))
   {
    if (FUNC_5(VAR_22[VAR_23 - 1]))
     VAR_3;
    FUNC_7(VAR_22[VAR_23 - 1], 3);
   }
   else if (FUNC_17(VAR_13->prsbuf, 'b') || FUNC_17(VAR_13->prsbuf, 'B'))
   {
    if (FUNC_5(VAR_22[VAR_23 - 1]))
     VAR_3;
    FUNC_7(VAR_22[VAR_23 - 1], 2);
   }
   else if (FUNC_17(VAR_13->prsbuf, 'c') || FUNC_17(VAR_13->prsbuf, 'C'))
   {
    if (FUNC_5(VAR_22[VAR_23 - 1]))
     VAR_3;
    FUNC_7(VAR_22[VAR_23 - 1], 1);
   }
   else if (FUNC_17(VAR_13->prsbuf, 'd') || FUNC_17(VAR_13->prsbuf, 'D'))
   {
    if (FUNC_5(VAR_22[VAR_23 - 1]))
     VAR_3;
    FUNC_7(VAR_22[VAR_23 - 1], 0);
   }
   else if (FUNC_18(VAR_13->prsbuf) ||
      *(VAR_13->prsbuf) == '\0')
    VAR_5;
   else if (!FUNC_16(VAR_13->prsbuf))
    VAR_3;
  }
  else
   FUNC_9(VAR_1, "unrecognized state in gettoken_tsvector: %d",
     VAR_21);


  VAR_13->prsbuf += FUNC_14(VAR_13->prsbuf);
 }
}
