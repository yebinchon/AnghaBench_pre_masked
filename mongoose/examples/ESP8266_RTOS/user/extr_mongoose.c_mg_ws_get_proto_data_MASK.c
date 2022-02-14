
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_ws_proto_data {int dummy; } ;
struct mg_http_proto_data {struct mg_ws_proto_data ws_data; } ;
struct mg_connection {int dummy; } ;


 struct mg_http_proto_data* FUNC_0 (struct mg_connection*) ;

__attribute__((used)) static struct mg_ws_proto_data *FUNC_1(struct mg_connection *VAR_0) {
  struct mg_http_proto_data *VAR_1 = FUNC_0(VAR_0);
  return (VAR_1 != ((void*)0) ? &VAR_1->ws_data : ((void*)0));
}
