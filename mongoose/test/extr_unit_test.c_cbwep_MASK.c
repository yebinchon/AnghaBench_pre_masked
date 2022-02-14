
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {int data; scalar_t__ size; } ;
struct mg_connection {scalar_t__ user_data; } ;





 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,int,char*) ;
 int FUNC_1 (struct mg_connection*,int ,char*,char*,int,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct websocket_message *VAR_4 = (struct websocket_message *) VAR_3;
  char *VAR_5 = (char *) VAR_1->user_data;

  switch (VAR_2) {
    case 128:
      FUNC_2(VAR_5, "R");
      if (VAR_5[0] != '0') {
        FUNC_0(VAR_1, 403, "I don't like you");
      }
      break;
    case 129:
      FUNC_2(VAR_5, "D");
      break;
    case 130:
      FUNC_2(VAR_5, "F");
      FUNC_1(VAR_1, VAR_0, "%s|%.*s", VAR_5,
                                (int) VAR_4->size, VAR_4->data);
      break;
  }
}
