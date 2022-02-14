
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonNode ;


 int FUNC_0 (char const**,char*) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 () ;
 int * FUNC_3 (double) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char const**,int **) ;
 int FUNC_6 (char const**,double*) ;
 int FUNC_7 (char const**,int **) ;
 int FUNC_8 (char const**,char**) ;

__attribute__((used)) static bool FUNC_9(const char **VAR_0, JsonNode **VAR_1)
{
 const char *VAR_2 = *VAR_0;

 switch (*VAR_2) {
  case 'n':
   if (FUNC_0(&VAR_2, "null")) {
    if (VAR_1)
     *VAR_1 = FUNC_2();
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;

  case 'f':
   if (FUNC_0(&VAR_2, "false")) {
    if (VAR_1)
     *VAR_1 = FUNC_1(0);
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;

  case 't':
   if (FUNC_0(&VAR_2, "true")) {
    if (VAR_1)
     *VAR_1 = FUNC_1(1);
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;

  case '"': {
   char *VAR_3;
   if (FUNC_8(&VAR_2, VAR_1 ? &VAR_3 : ((void*)0))) {
    if (VAR_1)
     *VAR_1 = FUNC_4(VAR_3);
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;
  }

  case '[':
   if (FUNC_5(&VAR_2, VAR_1)) {
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;

  case '{':
   if (FUNC_7(&VAR_2, VAR_1)) {
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;

  default: {
   double VAR_4;
   if (FUNC_6(&VAR_2, VAR_1 ? &VAR_4 : ((void*)0))) {
    if (VAR_1)
     *VAR_1 = FUNC_3(VAR_4);
    *VAR_0 = VAR_2;
    return 1;
   }
   return 0;
  }
 }
}
