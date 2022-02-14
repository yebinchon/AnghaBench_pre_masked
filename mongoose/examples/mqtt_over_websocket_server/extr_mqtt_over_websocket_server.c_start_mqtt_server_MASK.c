
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mqtt_broker {int dummy; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {struct mg_mqtt_broker* user_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 int FUNC_3 (struct mg_mqtt_broker*,int *) ;
 int FUNC_4 (struct mg_connection*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct mg_mgr *VAR_3, const char *VAR_4) {
  struct mg_connection *VAR_5;
  static struct mg_mqtt_broker VAR_6;
  if ((VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_1)) == ((void*)0)) {
    FUNC_1(VAR_2, "Cannot start MQTT server on port [%s]\n", VAR_4);
    FUNC_0(VAR_0);
  }
  FUNC_3(&VAR_6, ((void*)0));
  VAR_5->user_data = &VAR_6;
  FUNC_4(VAR_5);
  FUNC_5("MQTT server started on %s\n", VAR_4);
}
