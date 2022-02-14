
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_connection {int flags; int sa; } ;
struct TYPE_4__ {int p; scalar_t__ len; } ;
struct TYPE_3__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_2__ uri; TYPE_1__ method; } ;
typedef int addr ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct mg_connection*,...) ;
 int FUNC_1 (struct mg_connection*,char*,char*,int,int ) ;
 int FUNC_2 (struct mg_connection*,int,char*) ;
 int FUNC_3 (int *,char*,int,int) ;

void FUNC_4(struct mg_connection *VAR_3, int VAR_4, void *VAR_5) {
 switch (VAR_4) {
    case 130: {
      char VAR_6[32];
      FUNC_3(&VAR_3->sa, VAR_6, sizeof(VAR_6),
                          VAR_1 | VAR_2);
      FUNC_0("%p: Connection from %s\r\n", VAR_3, VAR_6);
      break;
    }
    case 128: {
      struct http_message *VAR_7 = (struct http_message *) VAR_5;
      char VAR_8[32];
      FUNC_3(&VAR_3->sa, VAR_8, sizeof(VAR_8),
                          VAR_1 | VAR_2);
      FUNC_0("%p: %.*s %.*s\r\n", VAR_3, (int) VAR_7->method.len, VAR_7->method.p,
             (int) VAR_7->uri.len, VAR_7->uri.p);
      FUNC_2(VAR_3, 200,
                            "Content-Type: text/html\r\n"
                            "Connection: close");
      FUNC_1(VAR_3,
                "\r\n<h1>Hello, %s!</h1>\r\n"
                "You asked for %.*s\r\n",
                VAR_8, (int) VAR_7->uri.len, VAR_7->uri.p);
      VAR_3->flags |= VAR_0;
      break;
    }
    case 129: {
      FUNC_0("%p: Connection closed\r\n", VAR_3);
      break;
    }
  }
}
