
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(DIR *VAR_0, char *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));
 if (FUNC_1(VAR_0))
 {
  FUNC_3("could not close directory \"%s\": %m", VAR_1);
  FUNC_2(1);
 }
}
