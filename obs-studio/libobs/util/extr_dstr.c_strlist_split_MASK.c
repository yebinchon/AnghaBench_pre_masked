
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,size_t) ;

char **FUNC_5(const char *VAR_0, char VAR_1, bool VAR_2)
{
 const char *VAR_3 = VAR_0;
 const char *VAR_4;
 char *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;
 size_t VAR_7 = 0;

 if (VAR_0) {
  char **VAR_8;
  char *VAR_9;
  size_t VAR_10 = 0;
  size_t VAR_11 = 0;

  VAR_4 = FUNC_1(VAR_0, VAR_1);

  while (VAR_4) {
   size_t VAR_12 = VAR_4 - VAR_3;

   if (VAR_12 || VAR_2) {
    ++VAR_6;
    VAR_7 += VAR_12 + 1;
   }

   VAR_3 = VAR_4 + 1;
   VAR_4 = FUNC_1(VAR_3, VAR_1);
  }

  if (*VAR_3 || VAR_2) {
   ++VAR_6;
   VAR_7 += FUNC_3(VAR_3) + 1;
  }



  VAR_11 = (VAR_6 + 1) * sizeof(char *);
  VAR_7 += VAR_11;
  VAR_5 = FUNC_0(VAR_7);
  VAR_9 = VAR_5 + VAR_11;
  VAR_8 = (char **)VAR_5;



  VAR_4 = FUNC_1(VAR_0, VAR_1);
  VAR_3 = VAR_0;

  while (VAR_4) {
   size_t VAR_13 = VAR_4 - VAR_3;

   if (VAR_13 || VAR_2) {
    VAR_8[VAR_10++] = VAR_9;
    FUNC_4(VAR_9, VAR_3, VAR_13);
    VAR_9[VAR_13] = 0;
    VAR_9 += VAR_13 + 1;
   }

   VAR_3 = VAR_4 + 1;
   VAR_4 = FUNC_1(VAR_3, VAR_1);
  }

  if (*VAR_3 || VAR_2) {
   VAR_8[VAR_10++] = VAR_9;
   FUNC_2(VAR_9, VAR_3);
  }

  VAR_8[VAR_10] = ((void*)0);
 }

 return (char **)VAR_5;
}
