
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char const* p; int len; } ;



__attribute__((used)) static void FUNC_0(const char **VAR_0, const char *VAR_1,
                                const char *VAR_2, struct mg_str *VAR_3) {
  const char *VAR_4;
  VAR_3->p = *VAR_0;
  for (; *VAR_0 < VAR_1; (*VAR_0)++) {
    for (VAR_4 = VAR_2; *VAR_4 != '\0'; VAR_4++) {
      if (**VAR_0 == *VAR_4) break;
    }
    if (*VAR_4 != '\0') break;
  }
  VAR_3->len = (*VAR_0) - VAR_3->p;
  if (*VAR_0 < VAR_1) (*VAR_0)++;
}
