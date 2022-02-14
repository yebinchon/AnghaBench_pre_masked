
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char**,int) ;

__attribute__((used)) static int FUNC_6(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
   char VAR_5[VAR_0];
   char *VAR_6;
   int VAR_7 = 0;

   if (FUNC_1(VAR_1) == 0) {
       FUNC_2( VAR_1 );
       return 0;
   }

   for(;;) {
      VAR_6 = FUNC_0(VAR_1,VAR_5);
      if (VAR_6[0] == 0) break;
      if (FUNC_3(VAR_6, "FORMAT=32-bit_rle_rgbe") == 0) VAR_7 = 1;
   }

   if (!VAR_7) {
       FUNC_2( VAR_1 );
       return 0;
   }
   VAR_6 = FUNC_0(VAR_1,VAR_5);
   if (FUNC_4(VAR_6, "-Y ", 3)) {
       FUNC_2( VAR_1 );
       return 0;
   }
   VAR_6 += 3;
   *VAR_3 = (int) FUNC_5(VAR_6, &VAR_6, 10);
   while (*VAR_6 == ' ') ++VAR_6;
   if (FUNC_4(VAR_6, "+X ", 3)) {
       FUNC_2( VAR_1 );
       return 0;
   }
   VAR_6 += 3;
   *VAR_2 = (int) FUNC_5(VAR_6, ((void*)0), 10);
   *VAR_4 = 3;
   return 1;
}
