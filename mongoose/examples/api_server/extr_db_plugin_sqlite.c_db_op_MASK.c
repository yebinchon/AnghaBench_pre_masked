
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;
struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;





 int FUNC_0 (struct mg_connection*,char*,char*) ;
 int FUNC_1 (struct mg_connection*,struct http_message const*,struct mg_str const*,void*) ;
 int FUNC_2 (struct mg_connection*,struct http_message const*,struct mg_str const*,void*) ;
 int FUNC_3 (struct mg_connection*,struct http_message const*,struct mg_str const*,void*) ;

void FUNC_4(struct mg_connection *VAR_0, const struct http_message *VAR_1,
           const struct mg_str *VAR_2, void *VAR_3, int VAR_4) {
  switch (VAR_4) {
    case 129:
      FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
      break;
    case 128:
      FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
      break;
    case 130:
      FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
      break;
    default:
      FUNC_0(VAR_0, "%s",
                "HTTP/1.0 501 Not Implemented\r\n"
                "Content-Length: 0\r\n\r\n");
      break;
  }
}
