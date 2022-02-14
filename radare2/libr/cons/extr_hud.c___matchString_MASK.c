
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(char *VAR_0, char *VAR_1, char *VAR_2, const int VAR_3) {
 char *VAR_4, *VAR_5 = VAR_1;
 const char *VAR_6 = VAR_1 + FUNC_1 (VAR_1);


 for (VAR_4 = VAR_1; VAR_4 <= VAR_6; VAR_4++) {
  if (*VAR_4 == ' ' || *VAR_4 == '\0') {
   const char *VAR_7, *VAR_8 = VAR_0;
   char VAR_9 = *VAR_4;
   int VAR_10;


   if (VAR_4 == VAR_5) {
    VAR_5++;
    continue;
   }
   *VAR_4 = 0;
   VAR_10 = FUNC_1 (VAR_5);

   while ((VAR_7 = FUNC_0 (VAR_8, VAR_5))) {
    int VAR_11;
    for (VAR_11 = VAR_7 - VAR_0;
         (VAR_11 < VAR_7 - VAR_0 + VAR_10) && VAR_11 < VAR_3;
         VAR_11++) {
     VAR_2[VAR_11] = 'x';
    }
    VAR_8 += VAR_10;
   }
   *VAR_4 = VAR_9;
   if (VAR_8 == VAR_0) {

    return 0;
   }
   VAR_5 = VAR_4 + 1;
  }
 }
 return 1;
}
