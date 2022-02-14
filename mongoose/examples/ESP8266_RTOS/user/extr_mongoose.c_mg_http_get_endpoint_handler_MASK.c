
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;
struct mg_http_proto_data {struct mg_http_endpoint* endpoints; } ;
struct mg_http_endpoint {struct mg_http_endpoint* next; int uri_pattern; } ;
struct mg_connection {int dummy; } ;


 struct mg_http_proto_data* FUNC_0 (struct mg_connection*) ;
 int FUNC_1 (int ,struct mg_str) ;

struct mg_http_endpoint *FUNC_2(struct mg_connection *VAR_0,
                                                      struct mg_str *VAR_1) {
  struct mg_http_proto_data *VAR_2;
  struct mg_http_endpoint *VAR_3 = ((void*)0);
  int VAR_4, VAR_5 = 0;
  struct mg_http_endpoint *VAR_6;

  if (VAR_0 == ((void*)0)) return ((void*)0);

  VAR_2 = FUNC_0(VAR_0);

  if (VAR_2 == ((void*)0)) return ((void*)0);

  VAR_6 = VAR_2->endpoints;
  while (VAR_6 != ((void*)0)) {
    if ((VAR_4 = FUNC_1(VAR_6->uri_pattern, *VAR_1)) > 0) {
      if (VAR_4 > VAR_5) {

        VAR_3 = VAR_6;
        VAR_5 = VAR_4;
      }
    }

    VAR_6 = VAR_6->next;
  }

  return VAR_3;
}
