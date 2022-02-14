
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct espconn {scalar_t__ reverse; } ;
typedef int sint8 ;
struct TYPE_2__ {int mqttTimer; scalar_t__ secure; int connState; int event_timeout; } ;
typedef TYPE_1__ lmqtt_userdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct espconn*) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static sint8 FUNC_4(struct espconn *VAR_4)
{

  FUNC_0("enter socket_connect.\n");

  sint8 VAR_5;

  if(VAR_4 == ((void*)0))
    return VAR_1;
  lmqtt_userdata *VAR_6 = (lmqtt_userdata *)VAR_4->reverse;
  if(VAR_6 == ((void*)0))
    return VAR_0;

  VAR_6->event_timeout = VAR_2;
  VAR_6->connState = VAR_3;







  {
    VAR_5 = FUNC_1(VAR_4);
  }

  FUNC_3(&VAR_6->mqttTimer, 1000, 1);

  FUNC_0("leave socket_connect\n");

  return VAR_5;
}
