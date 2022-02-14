
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char*,char const*,...) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_1, const char *VAR_2) {
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = FUNC_3 (VAR_0);
 if (!VAR_1) {
  VAR_1 = "";
 }
 if (*VAR_1 == '$') {
  char *VAR_6 = FUNC_3 (VAR_1 + 1);
  VAR_3 = VAR_6? VAR_6: FUNC_5 ("");
 } else {
  VAR_3 = FUNC_5 (VAR_1);
  if (!VAR_3) {
   FUNC_0 (VAR_5);
   return ((void*)0);
  }
 }

 if (VAR_5) {
  char *VAR_7, *VAR_8 = FUNC_4 (VAR_5, ':');

  VAR_7 = VAR_5;
  while (VAR_7) {
   if (VAR_8) {
    *VAR_8 = 0;
   }
   FUNC_0 (VAR_4);
   VAR_4 = FUNC_2 (((void*)0), "%s/%s", VAR_3, VAR_2);
   {
    char *VAR_9 = FUNC_2 (((void*)0), "%s/%s/%s", VAR_7, VAR_3, VAR_2);

    if (FUNC_1 (VAR_9)) {
     FUNC_0 (VAR_5);
     FUNC_0 (VAR_3);
     FUNC_0 (VAR_4);
     return VAR_9;
    }
    FUNC_0 (VAR_9);
   }
   if (!VAR_8) {
    break;
   }
   VAR_7 = VAR_8 + 1;
   VAR_8 = FUNC_4 (VAR_7, ':');
  }
  FUNC_0 (VAR_5);
 } else {
  VAR_4 = FUNC_2 (((void*)0), "%s/%s", VAR_3, VAR_2);
 }
 FUNC_0 (VAR_3);
 return VAR_4;
}
