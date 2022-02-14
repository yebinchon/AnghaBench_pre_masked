
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {int flags; scalar_t__ user_data; } ;
struct TYPE_2__ {int p; scalar_t__ len; } ;
struct http_message {int resp_code; TYPE_1__ message; } ;




 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,char*,char*,int,int ) ;
 int FUNC_1 (struct mg_connection*,char*,int ) ;
 int FUNC_2 (struct mg_connection*) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct http_message *VAR_4 = (struct http_message *) VAR_3;
  struct mg_connection *VAR_5 = (struct mg_connection *) VAR_1->user_data;

  switch (VAR_2) {
    case 128:
      if (VAR_5 != ((void*)0)) {
        FUNC_0(VAR_5, "%s%.*s",
                             (VAR_4->resp_code == 200 ? "" : "Error: "),
                             (int) VAR_4->message.len, VAR_4->message.p);
        FUNC_1(VAR_5, "", 0);
      }
      FUNC_2(VAR_1);
      VAR_1->flags |= VAR_0;
      break;
    case 129:
      FUNC_2(VAR_1);
      break;
    default:
      break;
  }
}
