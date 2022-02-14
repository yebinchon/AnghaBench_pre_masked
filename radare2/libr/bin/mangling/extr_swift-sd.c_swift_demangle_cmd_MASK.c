
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,char const*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_1) {

 static char *VAR_2 = ((void*)0);
 if (VAR_0 == -1) {
  if (!VAR_2) {
   VAR_0 = 0;
   VAR_2 = FUNC_1 ("swift-demangle");
   if (!VAR_2 || !FUNC_5 (VAR_2, "swift-demangle")) {
    char *VAR_3 = FUNC_1 ("xcrun");
    if (VAR_3) {
     if (FUNC_5 (VAR_3, "xcrun")) {
      FUNC_0 (VAR_2);
      VAR_2 = FUNC_2 ("%s swift-demangle", VAR_3);
      VAR_0 = 1;
     }
     FUNC_0 (VAR_3);
    }
   }
  }
 }
 if (VAR_2) {
  if (FUNC_6 (VAR_1, "'") || FUNC_6 (VAR_1, "\\")) {

   return ((void*)0);
  }

  char *VAR_4 = FUNC_4 ("%s -compact '%s'",
   VAR_2, VAR_1);
  if (VAR_4 && !*VAR_4) {
   FUNC_0 (VAR_4);
   VAR_4 = ((void*)0);
  }
  FUNC_3 (VAR_4);
  return VAR_4;
 }
 return ((void*)0);
}
