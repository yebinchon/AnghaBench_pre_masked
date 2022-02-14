
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mqtt_broker {int dummy; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {struct mg_mqtt_broker* priv_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*,int *) ;
 int FUNC_4 (struct mg_mgr*,int) ;
 int FUNC_5 (struct mg_mqtt_broker*,int *) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (char*,char*) ;
 char* VAR_2 ;
 int VAR_3 ;

int FUNC_8(void) {
  struct mg_mgr VAR_4;
  struct mg_connection *VAR_5;
  struct mg_mqtt_broker VAR_6;

  FUNC_3(&VAR_4, ((void*)0));

  if ((VAR_5 = FUNC_2(&VAR_4, VAR_2, VAR_1)) == ((void*)0)) {
    FUNC_1(VAR_3, "mg_bind(%s) failed\n", VAR_2);
    FUNC_0(VAR_0);
  }
  FUNC_5(&VAR_6, ((void*)0));
  VAR_5->priv_2 = &VAR_6;
  FUNC_6(VAR_5);

  FUNC_7("MQTT broker started on %s\n", VAR_2);






  for (;;) {
    FUNC_4(&VAR_4, 1000);
  }
}
