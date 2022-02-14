
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mqtt_proto_data {int last_control_time; } ;
struct TYPE_2__ {char* buf; char const len; } ;
struct mg_connection {scalar_t__ proto_data; TYPE_1__ send_mbuf; } ;
typedef int data ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const,int) ;
 int FUNC_2 (int ,double const) ;
 int FUNC_3 (char const*,char*) ;
 int VAR_0 ;
 char const FUNC_4 (char const) ;
 char const FUNC_5 (int) ;
 char const VAR_1 ;
 struct mg_connection* FUNC_6 () ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_connection*,char*,int,char const,char*,int) ;
 int FUNC_9 (struct mg_connection*) ;
 double FUNC_10 () ;
 int FUNC_11 (int) ;
 char const FUNC_12 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_13(void) {
  struct mg_connection *VAR_2 = FUNC_6();
  const double VAR_3 = FUNC_10();
  char VAR_4[] = "dummy";
  const char *VAR_5;

  FUNC_9(VAR_2);
  FUNC_11(2);
  FUNC_8(VAR_2, "/test", 42, FUNC_5(1) | VAR_1, VAR_4,
                  sizeof(VAR_4));
  VAR_5 = VAR_2->send_mbuf.buf;
  FUNC_1(VAR_2->send_mbuf.len, 17);

  FUNC_0(VAR_5[0] & VAR_1);
  FUNC_1((VAR_5[0] & 0xf0), (VAR_0 << 4));
  FUNC_1(FUNC_4(VAR_5[0]), 1);
  FUNC_1((size_t) VAR_5[1], (VAR_2->send_mbuf.len - 2));

  FUNC_1(VAR_5[2], 0);
  FUNC_1(VAR_5[3], 5);
  FUNC_3(&VAR_5[4], "/test");

  FUNC_1(VAR_5[9], 0);
  FUNC_1(VAR_5[10], 42);

  FUNC_1(FUNC_12(&VAR_5[11], VAR_4, sizeof(VAR_4)), 0);

  FUNC_2(((struct mg_mqtt_proto_data *) VAR_2->proto_data)->last_control_time,
            VAR_3);

  FUNC_7(VAR_2);
  return ((void*)0);
}
