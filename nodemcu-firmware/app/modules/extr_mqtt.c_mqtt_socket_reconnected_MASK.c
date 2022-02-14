
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct espconn {scalar_t__ reverse; } ;
typedef int sint8_t ;
struct TYPE_3__ {scalar_t__ secure; scalar_t__ event_timeout; int mqttTimer; } ;
typedef TYPE_1__ lmqtt_userdata ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct espconn*) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, sint8_t VAR_2)
{
  FUNC_0("enter mqtt_socket_reconnected.\n");

  struct espconn *VAR_3 = VAR_1;
  if(VAR_3 == ((void*)0))
    return;
  lmqtt_userdata *VAR_4 = (lmqtt_userdata *)VAR_3->reverse;
  if(VAR_4 == ((void*)0))
    return;

  FUNC_5(&VAR_4->mqttTimer);

  VAR_4->event_timeout = 0;






  {
    FUNC_1(VAR_3);
  }

  FUNC_3(VAR_4, VAR_0);

  FUNC_4(VAR_1);
  FUNC_0("leave mqtt_socket_reconnected.\n");
}
