
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t len; } ;
struct mg_mqtt_message {TYPE_2__ payload; int topic; } ;
struct TYPE_3__ {char* buf; } ;
struct mg_connection {TYPE_1__ recv_mbuf; scalar_t__ user_data; } ;





 int FUNC_0 (int *,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_2, int VAR_3, void *VAR_4) {
  int *VAR_5 = (int *) VAR_2->user_data;
  struct mg_mqtt_message *VAR_6 = (struct mg_mqtt_message *) VAR_4;
  size_t VAR_7;
  (void) VAR_2;
  (void) VAR_4;

  switch (VAR_3) {
    case 128:
      *VAR_5 = 1;
      break;
    case 129:
      *VAR_5 = 0;
      if (FUNC_0(&VAR_6->topic, "/topic")) {
        *VAR_5 = -1;
        break;
      }

      for (VAR_7 = 0; VAR_7 < VAR_6->payload.len; VAR_7++) {
        if (VAR_2->recv_mbuf.buf[10 + VAR_7] != 'A') {
          *VAR_5 = -1;
          break;
        }
      }

      if (VAR_6->payload.len == VAR_0) {
        *VAR_5 = 2;
      } else if (VAR_6->payload.len == VAR_1) {
        *VAR_5 = 3;
      }
      break;
    case 130:
      *VAR_5 = 4;
      break;
  }
}
