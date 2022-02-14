
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_0, char **VAR_1)
{
 FILE *VAR_2;
 char **VAR_3;

 if ((VAR_2 = FUNC_2(VAR_0, "w")) == ((void*)0))
 {
  FUNC_5("could not open file \"%s\" for writing: %m", VAR_0);
  FUNC_0(1);
 }
 for (VAR_3 = VAR_1; *VAR_3 != ((void*)0); VAR_3++)
 {
  if (FUNC_3(*VAR_3, VAR_2) < 0)
  {
   FUNC_5("could not write file \"%s\": %m", VAR_0);
   FUNC_0(1);
  }
  FUNC_4(*VAR_3);
 }
 if (FUNC_1(VAR_2))
 {
  FUNC_5("could not write file \"%s\": %m", VAR_0);
  FUNC_0(1);
 }
}
