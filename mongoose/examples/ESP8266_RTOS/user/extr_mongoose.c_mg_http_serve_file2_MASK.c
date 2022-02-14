
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_serve_http_opts {int extra_headers; int ssi_pattern; } ;
struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;


 int FUNC_0 (char const*,char*,struct mg_serve_http_opts*) ;
 int FUNC_1 (struct mg_connection*,struct http_message*,char const*,struct mg_serve_http_opts*) ;
 int FUNC_2 (struct mg_connection*,struct http_message*,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mg_connection *VAR_0, const char *VAR_1,
                                struct http_message *VAR_2,
                                struct mg_serve_http_opts *VAR_3) {






  FUNC_2(VAR_0, VAR_2, VAR_1, FUNC_0(VAR_1, "text/plain", VAR_3),
                     FUNC_4(VAR_3->extra_headers));
}
