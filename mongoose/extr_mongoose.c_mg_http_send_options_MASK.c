
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_serve_http_opts {int extra_headers; } ;
struct mg_connection {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,char*,char*) ;
 int FUNC_1 (struct mg_connection*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_1,
                                 struct mg_serve_http_opts *VAR_2) {
  FUNC_1(VAR_1, 200, VAR_2->extra_headers);
  FUNC_0(VAR_1, "%s",
            "Allow: GET, POST, HEAD, CONNECT, OPTIONS"



            "\r\n\r\n");
  VAR_1->flags |= VAR_0;
}
