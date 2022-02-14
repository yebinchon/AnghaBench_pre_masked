
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lookup {int l_value; } ;
typedef int lineno_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;




 char* FUNC_0 (char*) ;
 struct lookup* FUNC_1 (char*,struct lookup const*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (char const*,int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char*,int,int *) ;
 int VAR_3 ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,char*,char*,...) ;
 int FUNC_9 (char**) ;
 char** FUNC_10 (char*) ;
 int FUNC_11 (char**,int) ;
 int FUNC_12 (char**,int) ;
 int FUNC_13 (char**,int) ;
 int FUNC_14 (char**,int) ;
 int FUNC_15 (char**,int) ;
 struct lookup* VAR_4 ;
 char const* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 char* FUNC_16 (char*,char) ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 char* FUNC_18 (int ) ;
 struct lookup* VAR_9 ;

__attribute__((used)) static void
FUNC_19(const char *VAR_10)
{
 FILE *VAR_11;
 char **VAR_12;
 char *VAR_13;
 const struct lookup *VAR_14;
 int VAR_15;
 bool VAR_16;
 lineno_t VAR_17;
 char VAR_18[VAR_0];

 if (FUNC_17(VAR_10, "-") == 0)
 {
  VAR_10 = FUNC_0("standard input");
  VAR_11 = VAR_8;
 }
 else if ((VAR_11 = FUNC_7(VAR_10, "r")) == ((void*)0))
 {
  const char *VAR_19 = FUNC_18(VAR_2);

  FUNC_8(VAR_7, FUNC_0("%s: Cannot open %s: %s\n"),
    VAR_6, VAR_10, VAR_19);
  FUNC_5(VAR_1);
 }
 VAR_16 = 0;
 for (VAR_17 = 1;; ++VAR_17)
 {
  FUNC_3(VAR_10, VAR_17);
  if (FUNC_6(VAR_18, sizeof VAR_18, VAR_11) != VAR_18)
   break;
  VAR_13 = FUNC_16(VAR_18, '\n');
  if (VAR_13 == ((void*)0))
  {
   FUNC_4(FUNC_0("line too long"));
   FUNC_5(VAR_1);
  }
  *VAR_13 = '\0';
  VAR_12 = FUNC_10(VAR_18);
  VAR_15 = 0;
  while (VAR_12[VAR_15] != ((void*)0))
  {
   static char VAR_20;

   if (FUNC_17(VAR_12[VAR_15], "-") == 0)
    VAR_12[VAR_15] = &VAR_20;
   ++VAR_15;
  }
  if (VAR_15 == 0)
  {

  }
  else if (VAR_16)
  {
   VAR_16 = FUNC_14(VAR_12, VAR_15);
  }
  else
  {
   struct lookup const *VAR_21
   = VAR_10 == VAR_5 ? VAR_4 : VAR_9;

   VAR_14 = FUNC_1(VAR_12[0], VAR_21);
   if (VAR_14 == ((void*)0))
    FUNC_4(FUNC_0("input line of unknown type"));
   else
    switch (VAR_14->l_value)
    {
     case 129:
      FUNC_13(VAR_12, VAR_15);
      VAR_16 = 0;
      break;
     case 128:
      VAR_16 = FUNC_15(VAR_12, VAR_15);
      break;
     case 130:
      FUNC_12(VAR_12, VAR_15);
      VAR_16 = 0;
      break;
     case 131:
      FUNC_11(VAR_12, VAR_15);
      VAR_16 = 0;
      break;
     default:
      FUNC_8(VAR_7,
        FUNC_0("%s: panic: Invalid l_value %d\n"),
        VAR_6, VAR_14->l_value);
      FUNC_5(VAR_1);
    }
  }
  FUNC_9(VAR_12);
 }
 FUNC_2(VAR_11, ((void*)0), VAR_3);
 if (VAR_16)
  FUNC_4(FUNC_0("expected continuation line not found"));
}
