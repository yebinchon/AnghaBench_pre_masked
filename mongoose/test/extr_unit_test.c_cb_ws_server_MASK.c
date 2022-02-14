
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {int data; scalar_t__ size; int flags; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mg_connection*,int ,char*,char*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_3, int VAR_4, void *VAR_5) {
  struct websocket_message *VAR_6 = (struct websocket_message *) VAR_5;

  if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {
    FUNC_0(
        VAR_3, VAR_2, "%s%.2x:{%.*s}",
        (VAR_4 == VAR_0 ? "CONTROL:" : ""), VAR_6->flags,
        (int) VAR_6->size, VAR_6->data);
  }
}
