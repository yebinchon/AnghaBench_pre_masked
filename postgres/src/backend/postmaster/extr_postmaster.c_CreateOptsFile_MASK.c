
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static bool
FUNC_5(int VAR_2, char *VAR_3[], char *VAR_4)
{
 FILE *VAR_5;
 int VAR_6;



 if ((VAR_5 = FUNC_2("postmaster.opts", "w")) == ((void*)0))
 {
  FUNC_0(VAR_0, "could not create file \"%s\": %m", "postmaster.opts");
  return 0;
 }

 FUNC_3(VAR_5, "%s", VAR_4);
 for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++)
  FUNC_3(VAR_5, " \"%s\"", VAR_3[VAR_6]);
 FUNC_4("\n", VAR_5);

 if (FUNC_1(VAR_5))
 {
  FUNC_0(VAR_0, "could not write file \"%s\": %m", "postmaster.opts");
  return 0;
 }

 return 1;
}
