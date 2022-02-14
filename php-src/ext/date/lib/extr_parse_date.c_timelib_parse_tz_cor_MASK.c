
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_long ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static timelib_long FUNC_4(char **VAR_0)
{
 char *VAR_1 = *VAR_0, *VAR_2;
 timelib_long VAR_3;

 while (FUNC_0(**VAR_0) || **VAR_0 == ':') {
  ++*VAR_0;
 }
 VAR_2 = *VAR_0;
 switch (VAR_2 - VAR_1) {
  case 1:
  case 2:
   return FUNC_1(FUNC_3(VAR_1, ((void*)0), 10));
   break;
  case 3:
  case 4:
   if (VAR_1[1] == ':') {
    VAR_3 = FUNC_1(FUNC_3(VAR_1, ((void*)0), 10)) + FUNC_2(FUNC_3(VAR_1 + 2, ((void*)0), 10));
    return VAR_3;
   } else if (VAR_1[2] == ':') {
    VAR_3 = FUNC_1(FUNC_3(VAR_1, ((void*)0), 10)) + FUNC_2(FUNC_3(VAR_1 + 3, ((void*)0), 10));
    return VAR_3;
   } else {
    VAR_3 = FUNC_3(VAR_1, ((void*)0), 10);
    return FUNC_1(VAR_3 / 100) + FUNC_2(VAR_3 % 100);
   }
  case 5:
   VAR_3 = FUNC_1(FUNC_3(VAR_1, ((void*)0), 10)) + FUNC_2(FUNC_3(VAR_1 + 3, ((void*)0), 10));
   return VAR_3;
 }
 return 0;
}
