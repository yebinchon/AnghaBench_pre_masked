
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int tsearch_readline_state ;
struct TYPE_9__ {int usecompound; int useFlagAliases; scalar_t__ flagMode; int nCompoundAffixFlag; char** AffixData; int lenAffixData; int nAffixData; scalar_t__ CompoundAffixFlags; } ;
typedef TYPE_1__ IspellDict ;
typedef int CompoundAffixFlag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (TYPE_1__*,char*,char,char*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* VAR_16 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_17 ;
 char* FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 char* FUNC_10 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*,char*,char*,char*,char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (void*,int,int,int ) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,char) ;
 scalar_t__ FUNC_19 (char*) ;
 char* FUNC_20 (int *) ;
 int FUNC_21 (int *,char const*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void
FUNC_23(IspellDict *VAR_18, const char *VAR_19)
{
 char VAR_20[VAR_0],
      *VAR_21 = ((void*)0);
 char VAR_22[VAR_0];
 char VAR_23[VAR_0],
      *VAR_24;
 char VAR_25[VAR_0],
      *VAR_26;
 char VAR_27[VAR_0],
      *VAR_28;
 bool VAR_29 = 0;
 int VAR_30 = 0,
    VAR_31 = 0;
 int VAR_32 = 0;
 char VAR_33 = 0;
 tsearch_readline_state VAR_34;
 char *VAR_35;


 VAR_18->usecompound = 0;
 VAR_18->useFlagAliases = 0;
 VAR_18->flagMode = VAR_13;

 if (!FUNC_21(&VAR_34, VAR_19))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("could not open affix file \"%s\": %m",
      VAR_19)));

 while ((VAR_35 = FUNC_20(&VAR_34)) != ((void*)0))
 {
  if (*VAR_35 == '\0' || FUNC_19(VAR_35) || FUNC_18(VAR_35, '#'))
  {
   FUNC_13(VAR_35);
   continue;
  }

  if (FUNC_1(VAR_35, "COMPOUNDFLAG") == 0)
   FUNC_2(VAR_18, VAR_35 + FUNC_17("COMPOUNDFLAG"),
           VAR_4);
  else if (FUNC_1(VAR_35, "COMPOUNDBEGIN") == 0)
   FUNC_2(VAR_18, VAR_35 + FUNC_17("COMPOUNDBEGIN"),
           VAR_3);
  else if (FUNC_1(VAR_35, "COMPOUNDLAST") == 0)
   FUNC_2(VAR_18, VAR_35 + FUNC_17("COMPOUNDLAST"),
           VAR_6);

  else if (FUNC_1(VAR_35, "COMPOUNDEND") == 0)
   FUNC_2(VAR_18, VAR_35 + FUNC_17("COMPOUNDEND"),
           VAR_6);
  else if (FUNC_1(VAR_35, "COMPOUNDMIDDLE") == 0)
   FUNC_2(VAR_18, VAR_35 + FUNC_17("COMPOUNDMIDDLE"),
           VAR_7);
  else if (FUNC_1(VAR_35, "ONLYINCOMPOUND") == 0)
   FUNC_2(VAR_18, VAR_35 + FUNC_17("ONLYINCOMPOUND"),
           VAR_8);
  else if (FUNC_1(VAR_35, "COMPOUNDPERMITFLAG") == 0)
   FUNC_2(VAR_18,
           VAR_35 + FUNC_17("COMPOUNDPERMITFLAG"),
           VAR_9);
  else if (FUNC_1(VAR_35, "COMPOUNDFORBIDFLAG") == 0)
   FUNC_2(VAR_18,
           VAR_35 + FUNC_17("COMPOUNDFORBIDFLAG"),
           VAR_5);
  else if (FUNC_1(VAR_35, "FLAG") == 0)
  {
   char *VAR_36 = VAR_35 + FUNC_17("FLAG");

   while (*VAR_36 && FUNC_19(VAR_36))
    VAR_36 += FUNC_14(VAR_36);

   if (*VAR_36)
   {
    if (FUNC_1(VAR_36, "long") == 0)
     VAR_18->flagMode = VAR_14;
    else if (FUNC_1(VAR_36, "num") == 0)
     VAR_18->flagMode = VAR_15;
    else if (FUNC_1(VAR_36, "default") != 0)
     FUNC_5(VAR_2,
       (FUNC_6(VAR_1),
        FUNC_7("Ispell dictionary supports only "
         "\"default\", \"long\", "
         "and \"num\" flag values")));
   }
  }

  FUNC_13(VAR_35);
 }
 FUNC_22(&VAR_34);

 if (VAR_18->nCompoundAffixFlag > 1)
  FUNC_15((void *) VAR_18->CompoundAffixFlags, VAR_18->nCompoundAffixFlag,
     sizeof(CompoundAffixFlag), VAR_17);

 if (!FUNC_21(&VAR_34, VAR_19))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("could not open affix file \"%s\": %m",
      VAR_19)));

 while ((VAR_35 = FUNC_20(&VAR_34)) != ((void*)0))
 {
  int VAR_37;

  if (*VAR_35 == '\0' || FUNC_19(VAR_35) || FUNC_18(VAR_35, '#'))
   goto nextline;

  VAR_37 = FUNC_12(VAR_35, VAR_20, VAR_22, VAR_25, VAR_27, VAR_23);

  if (VAR_21)
   FUNC_13(VAR_21);
  VAR_21 = FUNC_10(VAR_18, VAR_20);


  if (FUNC_1(VAR_21, "af") == 0)
  {

   if (!VAR_18->useFlagAliases)
   {
    VAR_18->useFlagAliases = 1;
    VAR_30 = FUNC_3(VAR_22);
    if (VAR_30 <= 0)
     FUNC_5(VAR_2,
       (FUNC_6(VAR_1),
        FUNC_7("invalid number of flag vector aliases")));


    VAR_30++;

    VAR_18->AffixData = (char **) FUNC_11(VAR_30 * sizeof(char *));
    VAR_18->lenAffixData = VAR_18->nAffixData = VAR_30;


    VAR_18->AffixData[VAR_31] = VAR_16;
    VAR_31++;
   }

   else
   {
    if (VAR_31 < VAR_30)
    {
     VAR_18->AffixData[VAR_31] = FUNC_4(VAR_18, VAR_22);
     VAR_31++;
    }
    else
     FUNC_5(VAR_2,
       (FUNC_6(VAR_1),
        FUNC_7("number of aliases exceeds specified number %d",
         VAR_30 - 1)));
   }
   goto nextline;
  }

  if (VAR_37 < 4 ||
   (FUNC_1(VAR_21, "sfx") != 0 && FUNC_1(VAR_21, "pfx") != 0))
   goto nextline;

  VAR_32 = FUNC_17(VAR_22);
  if (VAR_32 == 0
   || (VAR_32 > 1 && VAR_18->flagMode == VAR_13)
   || (VAR_32 > 2 && VAR_18->flagMode == VAR_14))
   goto nextline;






  if (VAR_37 == 4)
  {
   VAR_29 = (FUNC_1(VAR_21, "sfx") == 0);
   if (FUNC_18(VAR_25, 'y') || FUNC_18(VAR_25, 'Y'))
    VAR_33 = VAR_10;
   else
    VAR_33 = 0;
  }





  else
  {
   char *VAR_38;
   int VAR_39 = 0;


   if ((VAR_38 = FUNC_16(VAR_27, '/')) != ((void*)0))
    VAR_39 |= FUNC_9(VAR_18,
              FUNC_8(VAR_18,
                  VAR_38 + 1));

   VAR_28 = FUNC_10(VAR_18, VAR_27);
   if ((VAR_38 = FUNC_16(VAR_28, '/')) != ((void*)0))
    *VAR_38 = '\0';
   VAR_26 = FUNC_10(VAR_18, VAR_25);
   VAR_24 = FUNC_10(VAR_18, VAR_23);
   if (FUNC_18(VAR_25, '0'))
    *VAR_26 = '\0';
   if (FUNC_18(VAR_27, '0'))
    *VAR_28 = '\0';

   FUNC_0(VAR_18, VAR_22, VAR_33 | VAR_39, VAR_24, VAR_26, VAR_28,
        VAR_29 ? VAR_12 : VAR_11);
   FUNC_13(VAR_28);
   FUNC_13(VAR_26);
   FUNC_13(VAR_24);
  }

nextline:
  FUNC_13(VAR_35);
 }

 FUNC_22(&VAR_34);
 if (VAR_21)
  FUNC_13(VAR_21);
}
