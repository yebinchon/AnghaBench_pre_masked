
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_magic {char* desc; scalar_t__ type; } ;
typedef int RMagic ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 char** VAR_4 ;

__attribute__((used)) static int FUNC_2(RMagic *VAR_5, struct r_magic *VAR_6) {
 char *VAR_7;

 for (VAR_7 = VAR_6->desc; *VAR_7; VAR_7++) {
  if (*VAR_7 == '%') {
   break;
  }
 }
 if (*VAR_7 == '\0') {

  return 1;
 }

 if (VAR_1 != VAR_2) {
  return -1;
 }

 if (VAR_6->type >= VAR_1) {
  FUNC_1(VAR_5, "Internal error inconsistency between "
      "m->type and format strings");
  return -1;
 }
 if (VAR_3[VAR_6->type] == VAR_0) {
  FUNC_1(VAR_5, "No format string for `%s' with description "
      "`%s'", VAR_6->desc, VAR_4[VAR_6->type]);
  return -1;
 }

 VAR_7++;
 if (VAR_7 && FUNC_0(VAR_7, VAR_3[VAR_6->type]) == -1) {




  FUNC_1(VAR_5, "Printf format `%c' is not valid for type "
      "`%s' in description `%s'",
      VAR_7 && *VAR_7 ? *VAR_7 : '?',
      VAR_4[VAR_6->type], VAR_6->desc);
  return -1;
 }

 for (; *VAR_7; VAR_7++) {
  if (*VAR_7 == '%') {
   FUNC_1 (VAR_5,
       "Too many format strings (should have at most one) "
       "for `%s' with description `%s'",
       VAR_4[VAR_6->type], VAR_6->desc);
   return -1;
  }
 }
 return 0;
}
