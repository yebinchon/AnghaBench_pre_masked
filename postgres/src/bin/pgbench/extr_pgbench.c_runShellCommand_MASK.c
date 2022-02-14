
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef int FILE ;
typedef int CState ;


 int VAR_0 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int ,char*,char*,...) ;
 char* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (int *,char*,char*,int) ;
 int VAR_1 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char**,int) ;
 scalar_t__ FUNC_11 (char*) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_12(CState *VAR_3, char *VAR_4, char **VAR_5, int VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8,
    VAR_9 = 0;
 FILE *VAR_10;
 char VAR_11[64];
 char *VAR_12;
 int VAR_13;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  char *VAR_14;
  int VAR_15;

  if (VAR_5[VAR_8][0] != ':')
  {
   VAR_14 = VAR_5[VAR_8];
  }
  else if (VAR_5[VAR_8][1] == ':')
  {
   VAR_14 = VAR_5[VAR_8] + 1;
  }
  else if ((VAR_14 = FUNC_2(VAR_3, VAR_5[VAR_8] + 1)) == ((void*)0))
  {
   FUNC_1(VAR_1, "%s: undefined variable \"%s\"\n",
     VAR_5[0], VAR_5[VAR_8]);
   return 0;
  }

  VAR_15 = FUNC_9(VAR_14);
  if (VAR_9 + VAR_15 + (VAR_8 > 0 ? 1 : 0) >= VAR_0 - 1)
  {
   FUNC_1(VAR_1, "%s: shell command is too long\n", VAR_5[0]);
   return 0;
  }

  if (VAR_8 > 0)
   VAR_7[VAR_9++] = ' ';
  FUNC_4(VAR_7 + VAR_9, VAR_14, VAR_15);
  VAR_9 += VAR_15;
 }

 VAR_7[VAR_9] = '\0';


 if (VAR_4 == ((void*)0))
 {
  if (FUNC_11(VAR_7))
  {
   if (!VAR_2)
    FUNC_1(VAR_1, "%s: could not launch shell command\n", VAR_5[0]);
   return 0;
  }
  return 1;
 }


 if ((VAR_10 = FUNC_6(VAR_7, "r")) == ((void*)0))
 {
  FUNC_1(VAR_1, "%s: could not launch shell command\n", VAR_5[0]);
  return 0;
 }
 if (FUNC_0(VAR_11, sizeof(VAR_11), VAR_10) == ((void*)0))
 {
  if (!VAR_2)
   FUNC_1(VAR_1, "%s: could not read result of shell command\n", VAR_5[0]);
  (void) FUNC_5(VAR_10);
  return 0;
 }
 if (FUNC_5(VAR_10) < 0)
 {
  FUNC_1(VAR_1, "%s: could not close shell command\n", VAR_5[0]);
  return 0;
 }


 VAR_13 = (int) FUNC_10(VAR_11, &VAR_12, 10);
 while (*VAR_12 != '\0' && FUNC_3((unsigned char) *VAR_12))
  VAR_12++;
 if (*VAR_11 == '\0' || *VAR_12 != '\0')
 {
  FUNC_1(VAR_1, "%s: shell command must return an integer (not \"%s\")\n",
    VAR_5[0], VAR_11);
  return 0;
 }
 if (!FUNC_8(VAR_3, "setshell", VAR_4, VAR_13))
  return 0;




 return 1;
}
