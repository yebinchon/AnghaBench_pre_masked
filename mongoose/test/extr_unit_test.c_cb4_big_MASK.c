
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {int size; int data; } ;
struct mg_connection {scalar_t__ user_data; } ;
struct big_payload_params {int size; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,char,int ) ;
 int FUNC_4 (struct mg_connection*,int ,char*,int ,char*) ;
 int FUNC_5 (struct mg_connection*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  struct websocket_message *VAR_7 = (struct websocket_message *) VAR_6;
  struct big_payload_params *VAR_8 =
      (struct big_payload_params *) VAR_4->user_data;

  if (VAR_5 == VAR_0) {
    FUNC_2(VAR_8->buf, VAR_7->data, VAR_7->size);
    FUNC_5(VAR_4, VAR_2, ((void*)0), 0);
  } else if (VAR_5 == VAR_1) {

    char *VAR_9 = (char *) FUNC_1(VAR_8->size);
    FUNC_3(VAR_9, 'x', VAR_8->size);
    FUNC_4(VAR_4, VAR_3, "%.*s", VAR_8->size,
                              VAR_9);
    FUNC_0(VAR_9);
  }
}
