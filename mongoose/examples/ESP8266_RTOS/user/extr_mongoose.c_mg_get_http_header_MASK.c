
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; int * p; } ;
struct http_message {struct mg_str* header_values; struct mg_str* header_names; } ;


 int FUNC_0 (int *,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

struct mg_str *FUNC_2(struct http_message *VAR_0, const char *VAR_1) {
  size_t VAR_2, VAR_3 = FUNC_1(VAR_1);

  for (VAR_2 = 0; VAR_0->header_names[VAR_2].len > 0; VAR_2++) {
    struct mg_str *VAR_4 = &VAR_0->header_names[VAR_2], *VAR_5 = &VAR_0->header_values[VAR_2];
    if (VAR_4->p != ((void*)0) && VAR_4->len == VAR_3 && !FUNC_0(VAR_4->p, VAR_1, VAR_3))
      return VAR_5;
  }

  return ((void*)0);
}
