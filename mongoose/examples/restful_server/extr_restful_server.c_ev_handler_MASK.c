
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {int dummy; } ;
struct TYPE_2__ {int len; int p; } ;
struct http_message {TYPE_1__ body; int uri; } ;
typedef int buf ;



 int FUNC_0 (struct mg_connection*,struct http_message*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct mg_connection*,struct http_message*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct http_message *VAR_4 = (struct http_message *) VAR_3;

  switch (VAR_2) {
    case 128:
      if (FUNC_3(&VAR_4->uri, "/api/v1/sum") == 0) {
        FUNC_0(VAR_1, VAR_4);
      } else if (FUNC_3(&VAR_4->uri, "/printcontent") == 0) {
        char VAR_5[100] = {0};
        FUNC_1(VAR_5, VAR_4->body.p,
               sizeof(VAR_5) - 1 < VAR_4->body.len ? sizeof(VAR_5) - 1 : VAR_4->body.len);
        FUNC_4("%s\n", VAR_5);
      } else {
        FUNC_2(VAR_1, VAR_4, VAR_0);
      }
      break;
    default:
      break;
  }
}
