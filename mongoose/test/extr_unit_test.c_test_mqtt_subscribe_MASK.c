
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mqtt_topic_expression {char* member_0; int const member_1; } ;
struct mg_mqtt_proto_data {int last_control_time; } ;
struct TYPE_2__ {char* buf; char const len; } ;
struct mg_connection {scalar_t__ proto_data; TYPE_1__ send_mbuf; } ;


 int FUNC_0 (char const,int const) ;
 int FUNC_1 (int ,double const) ;
 int FUNC_2 (char const*,char*) ;
 int VAR_0 ;
 struct mg_connection* FUNC_3 () ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*,struct mg_mqtt_topic_expression*,int,int) ;
 int FUNC_6 (struct mg_connection*) ;
 double FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static const char *FUNC_9(void) {
  struct mg_connection *VAR_1 = FUNC_3();
  const double VAR_2 = FUNC_7();
  const int VAR_3 = 1;
  const char *VAR_4;
  struct mg_mqtt_topic_expression VAR_5[] = {{"/stuff", VAR_3}};
  FUNC_6(VAR_1);
  FUNC_8(2);

  FUNC_5(VAR_1, VAR_5, 1, 42);
  VAR_4 = VAR_1->send_mbuf.buf;
  FUNC_0(VAR_1->send_mbuf.len, 13);
  FUNC_0((VAR_4[0] & 0xf0), (VAR_0 << 4));
  FUNC_0((size_t) VAR_4[1], (VAR_1->send_mbuf.len - 2));
  FUNC_0(VAR_4[2], 0);
  FUNC_0(VAR_4[3], 42);

  FUNC_0(VAR_4[4], 0);
  FUNC_0(VAR_4[5], 6);
  FUNC_2(&VAR_4[6], "/stuff");
  FUNC_0(VAR_4[12], VAR_3);

  FUNC_1(((struct mg_mqtt_proto_data *) VAR_1->proto_data)->last_control_time,
            VAR_2);

  FUNC_4(VAR_1);
  return ((void*)0);
}
