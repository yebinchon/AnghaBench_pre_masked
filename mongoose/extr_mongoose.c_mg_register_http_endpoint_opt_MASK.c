
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_http_proto_data {struct mg_http_endpoint* endpoints; } ;
struct mg_http_endpoint_opts {int user_data; int * auth_file; int * auth_domain; } ;
struct mg_http_endpoint {struct mg_http_endpoint* next; int user_data; int handler; void* auth_file; void* auth_domain; int uri_pattern; } ;
struct mg_connection {int dummy; } ;
typedef int mg_event_handler_t ;


 scalar_t__ FUNC_0 (int,int) ;
 struct mg_http_proto_data* FUNC_1 (struct mg_connection*) ;
 struct mg_http_proto_data* FUNC_2 (struct mg_connection*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int *) ;

void FUNC_6(struct mg_connection *VAR_0,
                                   const char *VAR_1,
                                   mg_event_handler_t VAR_2,
                                   struct mg_http_endpoint_opts VAR_3) {
  struct mg_http_proto_data *VAR_4 = ((void*)0);
  struct mg_http_endpoint *VAR_5 = ((void*)0);

  if (VAR_0 == ((void*)0)) return;
  VAR_5 = (struct mg_http_endpoint *) FUNC_0(1, sizeof(*VAR_5));
  if (VAR_5 == ((void*)0)) return;

  VAR_4 = FUNC_2(VAR_0);
  if (VAR_4 == ((void*)0)) VAR_4 = FUNC_1(VAR_0);
  VAR_5->uri_pattern = FUNC_4(FUNC_3(VAR_1));
  if (VAR_3.auth_domain != ((void*)0) && VAR_3.auth_file != ((void*)0)) {
    VAR_5->auth_domain = FUNC_5(VAR_3.auth_domain);
    VAR_5->auth_file = FUNC_5(VAR_3.auth_file);
  }
  VAR_5->handler = VAR_2;



  VAR_5->next = VAR_4->endpoints;
  VAR_4->endpoints = VAR_5;
}
