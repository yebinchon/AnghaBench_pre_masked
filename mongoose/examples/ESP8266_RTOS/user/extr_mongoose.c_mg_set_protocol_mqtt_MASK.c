
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mqtt_proto_data {int dummy; } ;
struct mg_connection {int proto_data_destructor; int proto_data; int proto_handler; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct mg_connection *VAR_2) {
  VAR_2->proto_handler = VAR_1;
  VAR_2->proto_data = FUNC_0(1, sizeof(struct mg_mqtt_proto_data));
  VAR_2->proto_data_destructor = VAR_0;
}
