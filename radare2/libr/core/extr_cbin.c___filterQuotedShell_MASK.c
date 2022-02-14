
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0) {
 FUNC_1 (VAR_0, ((void*)0));
 char *VAR_1 = FUNC_0 (FUNC_2 (VAR_0) + 1);
 if (!VAR_1) {
  return ((void*)0);
 }
 char *VAR_2 = VAR_1;
 while (*VAR_0) {
  switch (*VAR_0) {
  case ' ':
  case '=':
  case '"':
  case '\\':
  case '\r':
  case '\n':
   break;
  default:
   *VAR_2++ = *VAR_0;
   break;
  }
  VAR_0++;
 }
 *VAR_2 = 0;
 return VAR_1;
}
