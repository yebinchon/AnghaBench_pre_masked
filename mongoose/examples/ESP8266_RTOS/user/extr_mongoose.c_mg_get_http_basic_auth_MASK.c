
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;
struct http_message {int dummy; } ;


 struct mg_str* FUNC_0 (struct http_message*,char*) ;
 int FUNC_1 (struct mg_str*,char*,size_t,char*,size_t) ;

int FUNC_2(struct http_message *VAR_0, char *VAR_1, size_t VAR_2,
                           char *VAR_3, size_t VAR_4) {
  struct mg_str *VAR_5 = FUNC_0(VAR_0, "Authorization");
  if (VAR_5 == ((void*)0)) return -1;
  return FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
