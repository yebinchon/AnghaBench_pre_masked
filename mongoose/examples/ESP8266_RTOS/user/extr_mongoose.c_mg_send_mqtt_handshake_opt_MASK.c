
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mg_send_mqtt_handshake_opts {char const* user_name; int flags; char const* password; char const* will_topic; char const* will_message; int keep_alive; } ;
struct mg_mqtt_proto_data {int keep_alive; } ;
struct mg_connection {scalar_t__ proto_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mg_connection*,...) ;
 int FUNC_2 (struct mg_connection*,int ,int ,size_t) ;
 int FUNC_3 (char const*) ;

void FUNC_4(struct mg_connection *VAR_4, const char *VAR_5,
                                struct mg_send_mqtt_handshake_opts VAR_6) {
  struct mg_mqtt_proto_data *VAR_7 = (struct mg_mqtt_proto_data *) VAR_4->proto_data;
  uint16_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
  uint16_t VAR_13;
  size_t VAR_14;

  if (VAR_5 != ((void*)0)) {
    VAR_8 = FUNC_3(VAR_5);
  }

  VAR_14 = 7 + 1 + 2 + 2 + VAR_8;

  if (VAR_6.user_name != ((void*)0)) {
    VAR_6.flags |= VAR_2;
  }
  if (VAR_6.password != ((void*)0)) {
    VAR_6.flags |= VAR_1;
  }
  if (VAR_6.will_topic != ((void*)0) && VAR_6.will_message != ((void*)0)) {
    VAR_9 = FUNC_3(VAR_6.will_topic);
    VAR_10 = FUNC_3(VAR_6.will_message);
    VAR_6.flags |= VAR_3;
  }
  if (VAR_6.keep_alive == 0) {
    VAR_6.keep_alive = 60;
  }

  if (VAR_6.flags & VAR_3) {
    VAR_14 += 2 + VAR_9 + 2 + VAR_10;
  }
  if (VAR_6.flags & VAR_2) {
    VAR_11 = FUNC_3(VAR_6.user_name);
    VAR_14 += 2 + VAR_11;
  }
  if (VAR_6.flags & VAR_1) {
    VAR_12 = FUNC_3(VAR_6.password);
    VAR_14 += 2 + VAR_12;
  }

  FUNC_2(VAR_4, VAR_0, 0, VAR_14);
  FUNC_1(VAR_4, "\00\04MQTT\04", 7);
  FUNC_1(VAR_4, &VAR_6.flags, 1);

  VAR_13 = FUNC_0(VAR_6.keep_alive);
  FUNC_1(VAR_4, &VAR_13, 2);

  VAR_13 = FUNC_0(VAR_8);
  FUNC_1(VAR_4, &VAR_13, 2);
  FUNC_1(VAR_4, VAR_5, VAR_8);

  if (VAR_6.flags & VAR_3) {
    VAR_13 = FUNC_0(VAR_9);
    FUNC_1(VAR_4, &VAR_13, 2);
    FUNC_1(VAR_4, VAR_6.will_topic, VAR_9);

    VAR_13 = FUNC_0(VAR_10);
    FUNC_1(VAR_4, &VAR_13, 2);
    FUNC_1(VAR_4, VAR_6.will_message, VAR_10);
  }

  if (VAR_6.flags & VAR_2) {
    VAR_13 = FUNC_0(VAR_11);
    FUNC_1(VAR_4, &VAR_13, 2);
    FUNC_1(VAR_4, VAR_6.user_name, VAR_11);
  }
  if (VAR_6.flags & VAR_1) {
    VAR_13 = FUNC_0(VAR_12);
    FUNC_1(VAR_4, &VAR_13, 2);
    FUNC_1(VAR_4, VAR_6.password, VAR_12);
  }

  if (VAR_7 != ((void*)0)) {
    VAR_7->keep_alive = VAR_6.keep_alive;
  }
}
