
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (char const*,char,size_t) ;
 int FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (char const*,size_t,char*,size_t,int) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(const struct mg_str *VAR_0, const char *VAR_1, char *VAR_2,
                    size_t VAR_3) {
  const char *VAR_4, *VAR_5, *VAR_6;
  size_t VAR_7;
  int VAR_8;
  if (VAR_2 == ((void*)0) || VAR_3 == 0) {
    VAR_8 = -2;
  } else if (VAR_0->p == ((void*)0) || VAR_1 == ((void*)0) || VAR_0->len == 0) {
    VAR_8 = -1;
    VAR_2[0] = '\0';
  } else {
    VAR_7 = FUNC_3(VAR_1);
    VAR_5 = VAR_0->p + VAR_0->len;
    VAR_8 = -4;
    VAR_2[0] = '\0';

    for (VAR_4 = VAR_0->p; VAR_4 + VAR_7 < VAR_5; VAR_4++) {
      if ((VAR_4 == VAR_0->p || VAR_4[-1] == '&') && VAR_4[VAR_7] == '=' &&
          !FUNC_1(VAR_1, VAR_4, VAR_7)) {
        VAR_4 += VAR_7 + 1;
        VAR_6 = (const char *) FUNC_0(VAR_4, '&', (size_t)(VAR_5 - VAR_4));
        if (VAR_6 == ((void*)0)) {
          VAR_6 = VAR_5;
        }
        VAR_8 = FUNC_2(VAR_4, (size_t)(VAR_6 - VAR_4), VAR_2, VAR_3, 1);

        if (VAR_8 == -1) {
          VAR_8 = -3;
        }
        break;
      }
    }
  }

  return VAR_8;
}
