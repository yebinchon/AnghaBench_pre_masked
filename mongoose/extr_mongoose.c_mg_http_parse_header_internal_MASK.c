
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; int len; } ;
struct altbuf {scalar_t__ len; } ;


 int FUNC_0 (struct altbuf*,char) ;
 int FUNC_1 (struct altbuf*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_4(struct mg_str *VAR_0,
                                          const char *VAR_1,
                                          struct altbuf *VAR_2) {
  int VAR_3 = ' ', VAR_4 = ',', VAR_5 = ';', VAR_6 = FUNC_2(VAR_1);
  const char *VAR_7, *VAR_8 = VAR_0 ? VAR_0->p + VAR_0->len : ((void*)0), *VAR_9 = ((void*)0);


  for (VAR_9 = VAR_0->p; VAR_9 != ((void*)0) && VAR_9 + VAR_6 < VAR_8; VAR_9++) {
    if ((VAR_9 == VAR_0->p || VAR_9[-1] == VAR_3 || VAR_9[-1] == VAR_4 || VAR_9[-1] == ';') &&
        VAR_9[VAR_6] == '=' && !FUNC_3(VAR_9, VAR_1, VAR_6))
      break;
  }

  if (VAR_9 != ((void*)0) && &VAR_9[VAR_6 + 1] < VAR_8) {
    VAR_9 += VAR_6 + 1;
    if (*VAR_9 == '"' || *VAR_9 == '\'') {
      VAR_3 = VAR_4 = VAR_5 = *VAR_9++;
    }
    VAR_7 = VAR_9;
    while (VAR_7 < VAR_8 && VAR_7[0] != VAR_3 && VAR_7[0] != VAR_4 && VAR_7[0] != VAR_5) {
      if (VAR_3 != ' ' && VAR_7[0] == '\\' && VAR_7[1] == VAR_3) VAR_7++;
      FUNC_0(VAR_2, *VAR_7++);
    }

    if (VAR_3 != ' ' && *VAR_7 != VAR_3) {
      FUNC_1(VAR_2);
    }
  }


  if (VAR_2->len > 0) {
    FUNC_0(VAR_2, '\0');
  }
}
