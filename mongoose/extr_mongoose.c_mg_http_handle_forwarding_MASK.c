
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int len; } ;
struct mg_serve_http_opts {char* url_rewrites; } ;
struct mg_connection {int dummy; } ;
struct http_message {struct mg_str uri; } ;


 struct mg_str FUNC_0 (char*) ;
 int FUNC_1 (struct mg_connection*,struct http_message*,struct mg_str,struct mg_str) ;
 char* FUNC_2 (char const*,struct mg_str*,struct mg_str*) ;
 scalar_t__ FUNC_3 (struct mg_str,struct mg_str,int ) ;

__attribute__((used)) static int FUNC_4(struct mg_connection *VAR_0,
                                     struct http_message *VAR_1,
                                     const struct mg_serve_http_opts *VAR_2) {
  const char *VAR_3 = VAR_2->url_rewrites;
  struct mg_str VAR_4, VAR_5;
  struct mg_str VAR_6 = FUNC_0("http://"), VAR_7 = FUNC_0("https://");

  while ((VAR_3 = FUNC_2(VAR_3, &VAR_4, &VAR_5)) != ((void*)0)) {
    if (FUNC_3(VAR_4, VAR_1->uri, VAR_4.len) == 0) {
      if (FUNC_3(VAR_5, VAR_6, VAR_6) == 0 || FUNC_3(VAR_5, VAR_7, VAR_7) == 0) {
        FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5);
        return 1;
      }
    }
  }

  return 0;
}
