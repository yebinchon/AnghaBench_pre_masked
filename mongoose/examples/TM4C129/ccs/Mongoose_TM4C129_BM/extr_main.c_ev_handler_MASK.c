
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {int flags; int sa; } ;
struct TYPE_2__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_1__ uri; } ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,struct mg_connection*,...) ;
 int FUNC_2 (struct mg_connection*,char*,char*,int,int ) ;
 int FUNC_3 (struct mg_connection*,int,char*) ;
 int FUNC_4 (int *,char*,int,int) ;

void FUNC_5(struct mg_connection *VAR_5, int VAR_6, void *VAR_7) {
  static int VAR_8 = 0;
  if (VAR_6 == VAR_1) return;

  switch (VAR_6) {
    case 130: {
      char VAR_9[32];
      FUNC_4(&VAR_5->sa, VAR_9, sizeof(VAR_9),
                          VAR_3 | VAR_4);
      FUNC_1("%p: Connection from %s\r\n", VAR_5, VAR_9);
      break;
    }
    case 128: {
      struct http_message *VAR_10 = (struct http_message *) VAR_7;
      char VAR_11[32];
      FUNC_4(&VAR_5->sa, VAR_11, sizeof(VAR_11),
                          VAR_3 | VAR_4);
      FUNC_1("%p: HTTP request\r\n", VAR_5);
      FUNC_3(VAR_5, 200,
                            "Content-Type: text/html\r\n"
                            "Connection: close");
      FUNC_2(VAR_5,
                "\r\n<h1>Hello, %s!</h1>\r\n"
                "You asked for %.*s\r\n",
                VAR_11, (int) VAR_10->uri.len, VAR_10->uri.p);
      VAR_5->flags |= VAR_2;
      VAR_8 ^= VAR_0;
      FUNC_0(VAR_0, VAR_8);
      break;
    }
    case 129: {
      FUNC_1("%p: Connection closed\r\n", VAR_5);
      break;
    }
  }
}
