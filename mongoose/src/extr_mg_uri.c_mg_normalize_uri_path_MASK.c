
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; int len; } ;


 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (struct mg_str*,char*) ;
 int FUNC_2 (char const**,char const*,char*,struct mg_str*) ;

int FUNC_3(const struct mg_str *VAR_0, struct mg_str *VAR_1) {
  const char *VAR_2 = VAR_0->p, *VAR_3 = VAR_2 + VAR_0->len;
  char *VAR_4 = (char *) VAR_1->p, *VAR_5;

  if (VAR_0->len == 0 || *VAR_2 != '/') {
    VAR_1->len = 0;
    return 0;
  }

  VAR_5 = VAR_4;

  while (VAR_2 < VAR_3) {
    const char *VAR_6 = VAR_2;
    struct mg_str VAR_7;
    FUNC_2(&VAR_6, VAR_3, "/", &VAR_7);
    if (FUNC_1(&VAR_7, ".") == 0) {

    } else if (FUNC_1(&VAR_7, "..") == 0) {

      if (VAR_5 > VAR_4 + 1 && *(VAR_5 - 1) == '/') VAR_5--;
      while (VAR_5 > VAR_4 && *(VAR_5 - 1) != '/') VAR_5--;
    } else {
      FUNC_0(VAR_5, VAR_2, VAR_6 - VAR_2);
      VAR_5 += VAR_6 - VAR_2;
    }
    VAR_2 = VAR_6;
  }
  if (VAR_5 == VAR_4) *VAR_5++ = '/';

  VAR_1->p = VAR_4;
  VAR_1->len = VAR_5 - VAR_4;
  return 1;
}
