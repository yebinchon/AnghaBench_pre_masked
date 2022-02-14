
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {int size; scalar_t__ data; } ;
struct mg_str {char* member_0; int member_1; } ;
struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;






 int FUNC_0 (struct mg_connection*,struct mg_str) ;
 int FUNC_1 (struct mg_connection*) ;
 struct mg_str FUNC_2 (char*) ;
 int FUNC_3 (struct mg_connection*,struct http_message*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  switch (VAR_2) {
    case 128: {

      FUNC_0(VAR_1, FUNC_2("++ joined"));
      break;
    }
    case 129: {
      struct websocket_message *VAR_4 = (struct websocket_message *) VAR_3;

      struct mg_str VAR_5 = {(char *) VAR_4->data, VAR_4->size};
      FUNC_0(VAR_1, VAR_5);
      break;
    }
    case 130: {
      FUNC_3(VAR_1, (struct http_message *) VAR_3, VAR_0);
      break;
    }
    case 131: {

      if (FUNC_1(VAR_1)) {
        FUNC_0(VAR_1, FUNC_2("-- left"));
      }
      break;
    }
  }
}
