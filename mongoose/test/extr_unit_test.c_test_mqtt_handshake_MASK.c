
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_send_mqtt_handshake_opts {char const* will_topic; char const* will_message; char const* user_name; char const* password; int keep_alive; } ;
struct mg_mqtt_proto_data {char const keep_alive; int last_control_time; } ;
struct TYPE_2__ {char* buf; char const len; } ;
struct mg_connection {TYPE_1__ send_mbuf; scalar_t__ proto_data; } ;
typedef int opts ;


 int FUNC_0 (char const,int) ;
 int FUNC_1 (int ,double) ;
 int FUNC_2 (char const*,char*) ;
 struct mg_connection* FUNC_3 () ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (TYPE_1__*,char const) ;
 int FUNC_6 (struct mg_send_mqtt_handshake_opts*,int ,int) ;
 int FUNC_7 (struct mg_connection*,char const*) ;
 int FUNC_8 (struct mg_connection*,char const*,struct mg_send_mqtt_handshake_opts) ;
 int FUNC_9 (struct mg_connection*) ;
 double FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*) ;
 char const FUNC_13 (char const*,char const*,int) ;

__attribute__((used)) static const char *FUNC_14(void) {
  struct mg_send_mqtt_handshake_opts VAR_0;
  struct mg_connection *VAR_1 = FUNC_3();
  const char *VAR_2 = "testclient";
  const char *VAR_3 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  const char *VAR_4 = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
  const char *VAR_5 = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
  const char *VAR_6 = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
  double VAR_7 = FUNC_10();
  const char *VAR_8;

  FUNC_11(2);
  FUNC_9(VAR_1);
  FUNC_7(VAR_1, VAR_2);
  VAR_8 = VAR_1->send_mbuf.buf;

  FUNC_0(VAR_1->send_mbuf.len,
            1 + 1 + 1 + 5 + 1 + 1 + 2 + 2 + FUNC_12(VAR_2));
  FUNC_0(VAR_8[0], 0x10);
  FUNC_0(VAR_8[1], (int) VAR_1->send_mbuf.len - 2);
  FUNC_0(VAR_8[2], 0);
  FUNC_0(VAR_8[3], 4);
  FUNC_2(&VAR_8[4], "MQTT");
  FUNC_0(VAR_8[8], 4);
  FUNC_0(VAR_8[9], 0);
  FUNC_0(VAR_8[10], 0);
  FUNC_0(VAR_8[11], 60);
  FUNC_0(VAR_8[12], 0);
  FUNC_0(VAR_8[13], (char) FUNC_12(VAR_2));
  FUNC_0(FUNC_13(&VAR_8[14], VAR_2, FUNC_12(VAR_2)), 0);
  FUNC_0(((struct mg_mqtt_proto_data *) VAR_1->proto_data)->keep_alive, 60);
  FUNC_1(((struct mg_mqtt_proto_data *) VAR_1->proto_data)->last_control_time,
            VAR_7);
  FUNC_5(&VAR_1->send_mbuf, VAR_1->send_mbuf.len);

  FUNC_6(&VAR_0, 0, sizeof(VAR_0));
  VAR_7 = FUNC_10();
  FUNC_11(2);
  VAR_0.will_topic = VAR_5;
  VAR_0.will_message = VAR_6;
  VAR_0.user_name = VAR_3;
  VAR_0.password = VAR_4;
  VAR_0.keep_alive = 0x1234;
  FUNC_8(VAR_1, VAR_2, VAR_0);
  VAR_8 = VAR_1->send_mbuf.buf;

  FUNC_0(VAR_1->send_mbuf.len, 1 + 2 + 1 + 5 + 1 + 1 + 2 + 2 +
                                   FUNC_12(VAR_2) + 2 + FUNC_12(VAR_5) +
                                   2 + FUNC_12(VAR_6) + 2 +
                                   FUNC_12(VAR_3) + 2 + FUNC_12(VAR_4));
  FUNC_0(VAR_8[0], 0x10);
  FUNC_0(((unsigned char *) VAR_8)[1], 223);
  FUNC_0(VAR_8[2], 1);
  FUNC_0(VAR_8[3], 0);
  FUNC_0(VAR_8[4], 4);
  FUNC_2(&VAR_8[5], "MQTT");
  FUNC_0(VAR_8[9], 4);
  FUNC_0(((unsigned char *) VAR_8)[10], 0xc4);
  FUNC_0(VAR_8[11], 0x12);
  FUNC_0(VAR_8[12], 0x34);
  FUNC_0(VAR_8[13], 0);
  FUNC_0(VAR_8[14], (char) FUNC_12(VAR_2));
  FUNC_0(FUNC_13(&VAR_8[15], VAR_2, FUNC_12(VAR_2)), 0);
  FUNC_0(((struct mg_mqtt_proto_data *) VAR_1->proto_data)->keep_alive, 0x1234);
  FUNC_1(((struct mg_mqtt_proto_data *) VAR_1->proto_data)->last_control_time,
            VAR_7);
  FUNC_5(&VAR_1->send_mbuf, VAR_1->send_mbuf.len);

  FUNC_4(VAR_1);
  return ((void*)0);
}
