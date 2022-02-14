
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mg_connection {int flags; } ;
struct mg_coap_message {int msg_id; int msg_type; } ;
typedef int cm ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct mg_coap_message*,int ,int) ;
 int FUNC_1 (struct mg_connection*,struct mg_coap_message*) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_3, int VAR_4, void *VAR_5) {
  switch (VAR_4) {
    case 128: {
      struct mg_coap_message VAR_6;
      uint32_t VAR_7;

      FUNC_0(&VAR_6, 0, sizeof(VAR_6));
      VAR_6.msg_id = 1;
      VAR_6.msg_type = VAR_0;
      FUNC_2("Sending CON...\n");
      VAR_7 = FUNC_1(VAR_3, &VAR_6);
      if (VAR_7 == 0) {
        FUNC_2("Sent CON with msg_id = %d\n", VAR_6.msg_id);
      } else {
        FUNC_2("Error: %d\n", VAR_7);
        VAR_2 = 1;
      }
      break;
    }
    case 130:
    case 129: {
      struct mg_coap_message *VAR_8 = (struct mg_coap_message *) VAR_5;
      FUNC_2("ACK/RST for message with msg_id = %d received\n", VAR_8->msg_id);
      VAR_3->flags |= VAR_1;
      VAR_2 = 1;
      break;
    }
    case 131: {
      if (VAR_2 == 0) {
        FUNC_2("Server closed connection\n");
        VAR_2 = 1;
      }
      break;
    }
  }
}
