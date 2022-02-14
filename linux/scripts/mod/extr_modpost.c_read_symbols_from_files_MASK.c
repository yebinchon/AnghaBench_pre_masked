
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_2)
{
 FILE *VAR_3 = VAR_1;
 char VAR_4[VAR_0];

 if (FUNC_5(VAR_2, "-") != 0) {
  VAR_3 = FUNC_3(VAR_2, "r");
  if (!VAR_3)
   FUNC_0("Can't open filenames file %s: %m", VAR_2);
 }

 while (FUNC_2(VAR_4, VAR_0, VAR_3) != ((void*)0)) {
  if (FUNC_6(VAR_4, "\n"))
   VAR_4[FUNC_7(VAR_4)-1] = '\0';
  FUNC_4(VAR_4);
 }

 if (VAR_3 != VAR_1)
  FUNC_1(VAR_3);
}
