
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_bool ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_2, char *VAR_3, char **VAR_4, char **VAR_5, zend_bool VAR_6)
{
 char *VAR_7;

 *VAR_4 = ((void*)0);
 *VAR_5 = ((void*)0);
 while (*VAR_3 == '#') {
  if (FUNC_0(VAR_3, "#define FFI_SCOPE", sizeof("#define FFI_SCOPE") - 1) == 0
   && (VAR_3[sizeof("#define FFI_SCOPE") - 1] == ' '
    || VAR_3[sizeof("#define FFI_SCOPE") - 1] == '\t')) {
   VAR_7 = VAR_3 + sizeof("#define FFI_SCOPE");
   while (*VAR_7 == ' ' || *VAR_7 == '\t') {
    VAR_7++;
   }
   if (*VAR_7 != '"') {
    if (VAR_6) {
     FUNC_1(VAR_0, "FFI: failed pre-loading '%s', bad FFI_SCOPE define", VAR_2);
    } else {
     FUNC_2(VAR_1, "Failed loading '%s', bad FFI_SCOPE define", VAR_2);
    }
    return ((void*)0);
   }
   VAR_7++;
   if (*VAR_4) {
    if (VAR_6) {
     FUNC_1(VAR_0, "FFI: failed pre-loading '%s', FFI_SCOPE defined twice", VAR_2);
    } else {
     FUNC_2(VAR_1, "Failed loading '%s', FFI_SCOPE defined twice", VAR_2);
    }
    return ((void*)0);
   }
   *VAR_4 = VAR_7;
   while (1) {
    if (*VAR_7 == '\"') {
     *VAR_7 = 0;
     VAR_7++;
     break;
    } else if (*VAR_7 <= ' ') {
     if (VAR_6) {
      FUNC_1(VAR_0, "FFI: failed pre-loading '%s', bad FFI_SCOPE define", VAR_2);
     } else {
      FUNC_2(VAR_1, "Failed loading '%s', bad FFI_SCOPE define", VAR_2);
     }
     return ((void*)0);
    }
    VAR_7++;
   }
   while (*VAR_7 == ' ' || *VAR_7 == '\t') {
    VAR_7++;
   }
   while (*VAR_7 == '\r' || *VAR_7 == '\n') {
    VAR_7++;
   }
   VAR_3 = VAR_7;
  } else if (FUNC_0(VAR_3, "#define FFI_LIB", sizeof("#define FFI_LIB") - 1) == 0
   && (VAR_3[sizeof("#define FFI_LIB") - 1] == ' '
    || VAR_3[sizeof("#define FFI_LIB") - 1] == '\t')) {
   VAR_7 = VAR_3 + sizeof("#define FFI_LIB");
   while (*VAR_7 == ' ' || *VAR_7 == '\t') {
    VAR_7++;
   }
   if (*VAR_7 != '"') {
    if (VAR_6) {
     FUNC_1(VAR_0, "FFI: failed pre-loading '%s', bad FFI_LIB define", VAR_2);
    } else {
     FUNC_2(VAR_1, "Failed loading '%s', bad FFI_LIB define", VAR_2);
    }
    return ((void*)0);
   }
   VAR_7++;
   if (*VAR_5) {
    if (VAR_6) {
     FUNC_1(VAR_0, "FFI: failed pre-loading '%s', FFI_LIB defined twice", VAR_2);
    } else {
     FUNC_2(VAR_1, "Failed loading '%s', FFI_LIB defined twice", VAR_2);
    }
    return ((void*)0);
   }
   *VAR_5 = VAR_7;
   while (1) {
    if (*VAR_7 == '\"') {
     *VAR_7 = 0;
     VAR_7++;
     break;
    } else if (*VAR_7 <= ' ') {
     if (VAR_6) {
      FUNC_1(VAR_0, "FFI: failed pre-loading '%s', bad FFI_LIB define", VAR_2);
     } else {
      FUNC_2(VAR_1, "Failed loading '%s', bad FFI_LIB define", VAR_2);
     }
     return ((void*)0);
    }
    VAR_7++;
   }
   while (*VAR_7 == ' ' || *VAR_7 == '\t') {
    VAR_7++;
   }
   while (*VAR_7 == '\r' || *VAR_7 == '\n') {
    VAR_7++;
   }
   VAR_3 = VAR_7;
  } else {
   break;
  }
 }
 return VAR_3;
}
