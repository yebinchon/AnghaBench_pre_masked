
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mg_str {int p; scalar_t__ len; } ;
struct mg_connection {int flags; } ;
struct TYPE_6__ {int p; scalar_t__ len; } ;
struct TYPE_5__ {int p; scalar_t__ len; } ;
struct TYPE_4__ {int p; scalar_t__ len; } ;
struct http_message {struct mg_str* header_values; struct mg_str* header_names; TYPE_3__ body; TYPE_2__ method; TYPE_1__ uri; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,char*,...) ;
 int FUNC_1 (struct mg_connection*,int,char*) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_2, int VAR_3, void *VAR_4) {
  struct http_message *VAR_5 = (struct http_message *) VAR_4;
  int VAR_6;

  switch (VAR_3) {
    case 128:
      FUNC_1(VAR_2, 200,
                            "Content-Type: text/html\r\n"
                            "Connection: close\r\n");
      FUNC_0(VAR_2,
                "{\"uri\": \"%.*s\", \"method\": \"%.*s\", \"body\": \"%.*s\", "
                "\"headers\": {",
                (int) VAR_5->uri.len, VAR_5->uri.p, (int) VAR_5->method.len,
                VAR_5->method.p, (int) VAR_5->body.len, VAR_5->body.p);

      for (VAR_6 = 0; VAR_6 < VAR_1 && VAR_5->header_names[VAR_6].len > 0; VAR_6++) {
        struct mg_str VAR_7 = VAR_5->header_names[VAR_6];
        struct mg_str VAR_8 = VAR_5->header_values[VAR_6];
        FUNC_0(VAR_2, "%s\"%.*s\": \"%.*s\"", (VAR_6 != 0 ? "," : ""), (int) VAR_7.len,
                  VAR_7.p, (int) VAR_8.len, VAR_8.p);
      }

      FUNC_0(VAR_2, "}}");

      VAR_2->flags |= VAR_0;
      break;
    default:
      break;
  }
}
