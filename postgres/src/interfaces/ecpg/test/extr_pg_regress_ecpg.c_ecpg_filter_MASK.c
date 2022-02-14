
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,char*,char*) ;
 int VAR_1 ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_2, const char *VAR_3)
{




 FILE *VAR_4,
      *VAR_5;
 char VAR_6[VAR_0];

 VAR_4 = FUNC_4(VAR_2, "r");
 if (!VAR_4)
 {
  FUNC_5(VAR_1, "Could not open file %s for reading\n", VAR_2);
  FUNC_1(2);
 }
 VAR_5 = FUNC_4(VAR_3, "w");
 if (!VAR_5)
 {
  FUNC_5(VAR_1, "Could not open file %s for writing\n", VAR_3);
  FUNC_1(2);
 }

 while (FUNC_3(VAR_6, VAR_0, VAR_4))
 {

  if (FUNC_10(VAR_6, "#line ") == VAR_6)
  {
   char *VAR_7 = FUNC_9(VAR_6, '"');
   char *VAR_8;
   int VAR_9 = 1;

   while (*VAR_7 && (*(VAR_7 + VAR_9) == '.' || FUNC_9(VAR_7 + VAR_9, '/') != ((void*)0)))
   {
    VAR_9++;
   }

   if (VAR_9 > 1)
   {
    VAR_8 = (char *) FUNC_7(VAR_9);
    FUNC_0(VAR_8, VAR_7 + 1, VAR_9);
    FUNC_8(VAR_6, VAR_8, "");
   }
  }
  FUNC_6(VAR_6, VAR_5);
 }
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
}
