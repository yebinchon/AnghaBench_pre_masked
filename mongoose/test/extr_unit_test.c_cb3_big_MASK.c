
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {size_t size; char* data; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_2, int VAR_3, void *VAR_4) {
  struct websocket_message *VAR_5 = (struct websocket_message *) VAR_4;

  if (VAR_3 == VAR_0) {
    int VAR_6 = 1;
    size_t VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_5->size; VAR_7++) {
      if (VAR_5->data[VAR_7] != 'x') {
        VAR_6 = 0;
        break;
      }
    }
    FUNC_0(VAR_2, VAR_1, "%s",
                              VAR_6 ? "success" : "fail");
  }
}
