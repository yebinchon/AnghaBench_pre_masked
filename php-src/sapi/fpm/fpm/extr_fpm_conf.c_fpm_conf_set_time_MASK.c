
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(zval *VAR_0, void **VAR_1, intptr_t VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_2(VAR_3);
 char VAR_5;
 int VAR_6;
 if (!VAR_4) {
  return "invalid time value";
 }

 VAR_5 = VAR_3[VAR_4-1];
 switch (VAR_5) {
  case 'm' :
   VAR_3[VAR_4-1] = '\0';
   VAR_6 = 60 * FUNC_1(VAR_3);
   break;
  case 'h' :
   VAR_3[VAR_4-1] = '\0';
   VAR_6 = 60 * 60 * FUNC_1(VAR_3);
   break;
  case 'd' :
   VAR_3[VAR_4-1] = '\0';
   VAR_6 = 24 * 60 * 60 * FUNC_1(VAR_3);
   break;
  case 's' :
   VAR_3[VAR_4-1] = '\0';
   VAR_5 = '0';
  default :
   if (VAR_5 < '0' || VAR_5 > '9') {
    return "unknown suffix used in time value";
   }
   VAR_6 = FUNC_1(VAR_3);
   break;
 }

 * (int *) ((char *) *VAR_1 + VAR_2) = VAR_6;
 return ((void*)0);
}
