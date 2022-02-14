
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mg_mqtt_proto_data {int last_control_time; } ;
struct mg_connection {scalar_t__ proto_data; } ;


 int FUNC_0 (struct mg_connection*,int*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_0, uint8_t VAR_1,
                                uint8_t VAR_2, size_t VAR_3) {
  struct mg_mqtt_proto_data *VAR_4 = (struct mg_mqtt_proto_data *) VAR_0->proto_data;
  uint8_t VAR_5[1 + sizeof(size_t)];
  uint8_t *VAR_6 = &VAR_5[1];

  VAR_5[0] = (VAR_1 << 4) | VAR_2;


  do {
    *VAR_6 = VAR_3 % 0x80;
    VAR_3 /= 0x80;
    if (VAR_3 > 0) *VAR_6 |= 0x80;
    VAR_6++;
  } while (VAR_3 > 0);

  FUNC_0(VAR_0, VAR_5, VAR_6 - VAR_5);
  VAR_4->last_control_time = FUNC_1();
}
