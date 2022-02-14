
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mg_connection {int dummy; } ;
struct mg_coap_message {int msg_id; } ;






 int FUNC_0 (struct mg_connection*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_0, int VAR_1, void *VAR_2) {
  switch (VAR_1) {
    case 130: {
      uint32_t VAR_3;
      struct mg_coap_message *VAR_4 = (struct mg_coap_message *) VAR_2;
      FUNC_1("CON with msg_id = %d received\n", VAR_4->msg_id);
      VAR_3 = FUNC_0(VAR_0, VAR_4->msg_id);
      if (VAR_3 == 0) {
        FUNC_1("Successfully sent ACK for message with msg_id = %d\n",
               VAR_4->msg_id);
      } else {
        FUNC_1("Error: %d\n", VAR_3);
      }
      break;
    }
    case 129:
    case 131:
    case 128: {
      struct mg_coap_message *VAR_5 = (struct mg_coap_message *) VAR_2;
      FUNC_1("ACK/RST/NOC with msg_id = %d received\n", VAR_5->msg_id);
      break;
    }
  }
}
