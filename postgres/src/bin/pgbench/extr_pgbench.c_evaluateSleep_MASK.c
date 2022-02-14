
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CState ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_4(CState *VAR_1, int VAR_2, char **VAR_3, int *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if (*VAR_3[1] == ':')
 {
  if ((VAR_5 = FUNC_2(VAR_1, VAR_3[1] + 1)) == ((void*)0))
  {
   FUNC_1(VAR_0, "%s: undefined variable \"%s\"\n",
     VAR_3[0], VAR_3[1]);
   return 0;
  }
  VAR_6 = FUNC_0(VAR_5);
 }
 else
  VAR_6 = FUNC_0(VAR_3[1]);

 if (VAR_2 > 2)
 {
  if (FUNC_3(VAR_3[2], "ms") == 0)
   VAR_6 *= 1000;
  else if (FUNC_3(VAR_3[2], "s") == 0)
   VAR_6 *= 1000000;
 }
 else
  VAR_6 *= 1000000;

 *VAR_4 = VAR_6;
 return 1;
}
