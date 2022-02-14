
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {scalar_t__ size; int data; } ;
struct mg_str {char* p; int len; } ;
struct mg_connection {scalar_t__ user_data; } ;
struct http_message {int resp_code; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (struct mg_connection*,int ,int *,int ) ;
 int FUNC_3 (struct mg_connection*,int ,struct mg_str*,int) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  char *VAR_7 = (char *) VAR_4->user_data;
  if (VAR_5 == VAR_0) {
    struct websocket_message *VAR_8 = (struct websocket_message *) VAR_6;
    FUNC_0(("client data '%.*s'", (int) VAR_8->size, VAR_8->data));
    FUNC_1(VAR_7, VAR_8->data, VAR_8->size);
    FUNC_2(VAR_4, VAR_2, ((void*)0), 0);
  } else if (VAR_5 == VAR_1) {
    struct http_message *VAR_9 = (struct http_message *) VAR_6;
    FUNC_0(("code %d", VAR_9->resp_code));
    if (VAR_9->resp_code == 101) {

      struct mg_str VAR_10[2];
      VAR_10[0].p = "h";
      VAR_10[0].len = 1;
      VAR_10[1].p = "i";
      VAR_10[1].len = 1;
      FUNC_3(VAR_4, VAR_3, VAR_10, 2);
    } else {
      FUNC_4(VAR_7, 20, "code %d", VAR_9->resp_code);
    }
  }
}
