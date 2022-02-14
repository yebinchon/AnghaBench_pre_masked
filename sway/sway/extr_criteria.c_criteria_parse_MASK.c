
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct criteria {char* raw; int window_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct criteria*) ;
 scalar_t__ FUNC_2 (struct criteria*) ;
 char* VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct criteria*,char*,char*) ;
 int FUNC_5 (char**) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,char*,char*,char*) ;
 int FUNC_9 (char*) ;

struct criteria *FUNC_10(char *VAR_3, char **VAR_4) {
 *VAR_4 = ((void*)0);
 VAR_2 = ((void*)0);

 char *VAR_5 = VAR_3;
 FUNC_5(&VAR_5);
 if (*VAR_5 != '[') {
  *VAR_4 = FUNC_6("No criteria");
  return ((void*)0);
 }
 ++VAR_5;

 struct criteria *VAR_6 = FUNC_0(1, sizeof(struct criteria));



 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 bool VAR_9 = 0;

 while (*VAR_5 && *VAR_5 != ']') {
  FUNC_5(&VAR_5);

  char *VAR_10 = VAR_5;
  while ((*VAR_5 >= 'a' && *VAR_5 <= 'z') || *VAR_5 == '_') {
   ++VAR_5;
  }
  VAR_7 = FUNC_0(VAR_5 - VAR_10 + 1, 1);
  if (VAR_5 != VAR_10) {
   FUNC_7(VAR_7, VAR_10, VAR_5 - VAR_10);
  }

  FUNC_5(&VAR_5);
  VAR_8 = ((void*)0);
  if (*VAR_5 == '=') {
   ++VAR_5;
   FUNC_5(&VAR_5);
   if (*VAR_5 == '"') {
    VAR_9 = 1;
    ++VAR_5;
   }
   char *VAR_11 = VAR_5;
   if (VAR_9) {
    while (*VAR_5 && (*VAR_5 != '"' || *(VAR_5 - 1) == '\\')) {
     ++VAR_5;
    }
    if (!*VAR_5) {
     *VAR_4 = FUNC_6("Quote mismatch in criteria");
     goto cleanup;
    }
   } else {
    while (*VAR_5 && *VAR_5 != ' ' && *VAR_5 != ']') {
     ++VAR_5;
    }
   }
   VAR_8 = FUNC_0(VAR_5 - VAR_11 + 1, 1);
   FUNC_7(VAR_8, VAR_11, VAR_5 - VAR_11);
   if (VAR_9) {
    ++VAR_5;
    VAR_9 = 0;
   }
   FUNC_9(VAR_8);
   FUNC_8(VAR_1, "Found pair: %s=%s", VAR_7, VAR_8);
  }
  if (!FUNC_4(VAR_6, VAR_7, VAR_8)) {
   *VAR_4 = VAR_2;
   goto cleanup;
  }
  FUNC_5(&VAR_5);
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
  VAR_7 = ((void*)0);
  VAR_8 = ((void*)0);
 }
 if (*VAR_5 != ']') {
  *VAR_4 = FUNC_6("No closing brace found in criteria");
  goto cleanup;
 }

 if (FUNC_2(VAR_6)) {
  *VAR_4 = FUNC_6("Criteria is empty");
  goto cleanup;
 }

 ++VAR_5;
 int VAR_12 = VAR_5 - VAR_3;
 VAR_6->raw = FUNC_0(VAR_12 + 1, 1);
 FUNC_7(VAR_6->raw, VAR_3, VAR_12);
 return VAR_6;

cleanup:
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 FUNC_1(VAR_6);
 return ((void*)0);
}
