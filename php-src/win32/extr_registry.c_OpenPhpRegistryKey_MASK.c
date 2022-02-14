
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 char** VAR_3 ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(char* VAR_4, HKEY *VAR_5)
{
 const char **VAR_6 = VAR_3;

 if (VAR_4) {
  size_t VAR_7;
  size_t VAR_8 = FUNC_4(VAR_4);
  char *VAR_9;

  while (*VAR_6) {
   LONG VAR_10;

   VAR_7 = FUNC_4(*VAR_6);
   VAR_9 = FUNC_2(VAR_7 + VAR_8 + 1);
   FUNC_3(VAR_9, *VAR_6, VAR_7);
   FUNC_3(VAR_9 + VAR_7, VAR_4, VAR_8 + 1);
   VAR_10 = FUNC_0(VAR_1, VAR_9, 0, VAR_2, VAR_5);
   FUNC_1(VAR_9);

   if (VAR_10 == VAR_0) {
    return 1;
   }
   ++VAR_6;
  }
 } else {
  while (*VAR_6) {
   if (FUNC_0(VAR_1, *VAR_6, 0, VAR_2, VAR_5) == VAR_0) {
    return 1;
   }
   ++VAR_6;
  }
 }
 return 0;
}
