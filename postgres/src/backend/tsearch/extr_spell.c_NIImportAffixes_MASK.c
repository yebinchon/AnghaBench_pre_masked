
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsearch_readline_state ;
struct TYPE_6__ {int usecompound; int useFlagAliases; int flagMode; } ;
typedef TYPE_1__ IspellDict ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,char*,char,char*,char*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (char*,char,char) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *) ;

void
FUNC_17(IspellDict *VAR_9, const char *VAR_10)
{
 char *VAR_11 = ((void*)0);
 char VAR_12[VAR_0];
 char VAR_13[VAR_0];
 char VAR_14[VAR_0];
 char VAR_15[VAR_0];
 char *VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 char VAR_19 = 0;
 tsearch_readline_state VAR_20;
 bool VAR_21 = 0;
 char *VAR_22 = ((void*)0);

 if (!FUNC_15(&VAR_20, VAR_10))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("could not open affix file \"%s\": %m",
      VAR_10)));

 VAR_9->usecompound = 0;
 VAR_9->useFlagAliases = 0;
 VAR_9->flagMode = VAR_8;

 while ((VAR_22 = FUNC_14(&VAR_20)) != ((void*)0))
 {
  VAR_11 = FUNC_9(VAR_22);


  if (*VAR_11 == '#' || *VAR_11 == '\n')
   goto nextline;

  if (FUNC_3(VAR_11, "compoundwords") == 0)
  {

   VAR_16 = FUNC_8(VAR_22, 'l', 'L');
   if (VAR_16)
   {
    while (*VAR_16 && !FUNC_13(VAR_16))
     VAR_16 += FUNC_12(VAR_16);
    while (*VAR_16 && FUNC_13(VAR_16))
     VAR_16 += FUNC_12(VAR_16);

    if (*VAR_16 && FUNC_12(VAR_16) == 1)
    {
     FUNC_4(VAR_9, VAR_16, VAR_3);
     VAR_9->usecompound = 1;
    }
    VAR_21 = 1;
    goto nextline;
   }
  }
  if (FUNC_3(VAR_11, "suffixes") == 0)
  {
   VAR_17 = 1;
   VAR_18 = 0;
   VAR_21 = 1;
   goto nextline;
  }
  if (FUNC_3(VAR_11, "prefixes") == 0)
  {
   VAR_17 = 0;
   VAR_18 = 1;
   VAR_21 = 1;
   goto nextline;
  }
  if (FUNC_3(VAR_11, "flag") == 0)
  {
   VAR_16 = VAR_22 + 4;
   VAR_19 = 0;

   while (*VAR_16 && FUNC_13(VAR_16))
    VAR_16 += FUNC_12(VAR_16);

   if (*VAR_16 == '*')
   {
    VAR_19 |= VAR_5;
    VAR_16++;
   }
   else if (*VAR_16 == '~')
   {
    VAR_19 |= VAR_4;
    VAR_16++;
   }

   if (*VAR_16 == '\\')
    VAR_16++;






   if (*VAR_16 && FUNC_12(VAR_16) == 1)
   {
    FUNC_0(VAR_12, VAR_16);
    VAR_12[1] = '\0';

    VAR_16++;
    if (*VAR_16 == '\0' || *VAR_16 == '#' || *VAR_16 == '\n' || *VAR_16 == ':' ||
     FUNC_13(VAR_16))
    {
     VAR_21 = 1;
     goto nextline;
    }
   }
   goto isnewformat;
  }
  if (FUNC_3(VAR_22, "COMPOUNDFLAG") == 0 ||
   FUNC_3(VAR_22, "COMPOUNDMIN") == 0 ||
   FUNC_3(VAR_22, "PFX") == 0 ||
   FUNC_3(VAR_22, "SFX") == 0)
   goto isnewformat;

  if ((!VAR_17) && (!VAR_18))
   goto nextline;

  if (!FUNC_10(VAR_11, VAR_13, VAR_14, VAR_15))
   goto nextline;

  FUNC_1(VAR_9, VAR_12, VAR_19, VAR_13, VAR_14, VAR_15, VAR_17 ? VAR_7 : VAR_6);

nextline:
  FUNC_11(VAR_22);
  FUNC_11(VAR_11);
 }
 FUNC_16(&VAR_20);
 return;

isnewformat:
 if (VAR_21)
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("affix file contains both old-style and new-style commands")));
 FUNC_16(&VAR_20);

 FUNC_2(VAR_9, VAR_10);
}
