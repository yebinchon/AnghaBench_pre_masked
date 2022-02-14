
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {int flags; } ;
struct mg_connection {int user_data; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,int ,int ,int ,struct websocket_message*) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_2,
                                               struct websocket_message *VAR_3) {
  if (VAR_3->flags & 0x8) {
    FUNC_0(VAR_2, VAR_2->handler, VAR_2->user_data, VAR_0, VAR_3);
  } else {
    FUNC_0(VAR_2, VAR_2->handler, VAR_2->user_data, VAR_1, VAR_3);
  }
}
