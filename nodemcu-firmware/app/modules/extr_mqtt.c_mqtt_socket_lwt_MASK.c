
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lua_State ;
struct TYPE_4__ {int* will_topic; int* will_message; void* will_retain; void* will_qos; } ;
struct TYPE_5__ {TYPE_1__ connect_info; } ;
typedef TYPE_2__ lmqtt_userdata ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,TYPE_2__*,int,char*) ;
 char* FUNC_4 (int *,int,size_t*) ;
 scalar_t__ FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (int*,char const*,size_t) ;

__attribute__((used)) static int FUNC_10( lua_State* VAR_0 )
{
  FUNC_0("enter mqtt_socket_lwt.\n");
  uint8_t VAR_1 = 1;
  size_t VAR_2, VAR_3;
  FUNC_0("mqtt_socket_lwt.\n");
  lmqtt_userdata *VAR_4 = ((void*)0);
  const char *VAR_5, *VAR_6;
  uint8_t VAR_7, VAR_8;

  VAR_4 = (lmqtt_userdata *)FUNC_5( VAR_0, VAR_1, "mqtt.socket" );
  FUNC_3( VAR_0, VAR_4, VAR_1, "mqtt.socket expected" );

  if(VAR_4 == ((void*)0))
    return 0;

  VAR_1++;
  VAR_5 = FUNC_4( VAR_0, VAR_1, &VAR_2 );
  if (VAR_5 == ((void*)0))
  {
    return FUNC_6( VAR_0, "need lwt topic");
  }

  VAR_1++;
  VAR_6 = FUNC_4( VAR_0, VAR_1, &VAR_3 );
  if (VAR_6 == ((void*)0))
  {
    return FUNC_6( VAR_0, "need lwt message");
  }
  VAR_1++;
  if(VAR_4->connect_info.will_topic){
    FUNC_2(VAR_4->connect_info.will_topic);
    VAR_4->connect_info.will_topic = ((void*)0);
  }
  if(VAR_4->connect_info.will_message){
    FUNC_2(VAR_4->connect_info.will_message);
    VAR_4->connect_info.will_message = ((void*)0);
  }

  VAR_4->connect_info.will_topic = (uint8_t*) FUNC_1(1, VAR_2 + 1 );
  VAR_4->connect_info.will_message = (uint8_t*) FUNC_1(1, VAR_3 + 1 );
  if(!VAR_4->connect_info.will_topic || !VAR_4->connect_info.will_message){
    if(VAR_4->connect_info.will_topic){
      FUNC_2(VAR_4->connect_info.will_topic);
      VAR_4->connect_info.will_topic = ((void*)0);
    }
    if(VAR_4->connect_info.will_message){
      FUNC_2(VAR_4->connect_info.will_message);
      VAR_4->connect_info.will_message = ((void*)0);
    }
    return FUNC_6( VAR_0, "not enough memory");
  }
  FUNC_9(VAR_4->connect_info.will_topic, VAR_5, VAR_2);
  VAR_4->connect_info.will_topic[VAR_2] = 0;
  FUNC_9(VAR_4->connect_info.will_message, VAR_6, VAR_3);
  VAR_4->connect_info.will_message[VAR_3] = 0;

  if ( FUNC_7(VAR_0, VAR_1) )
  {
    VAR_4->connect_info.will_qos = FUNC_8(VAR_0, VAR_1);
    VAR_1++;
  }
  if ( FUNC_7(VAR_0, VAR_1) )
  {
    VAR_4->connect_info.will_retain = FUNC_8(VAR_0, VAR_1);
    VAR_1++;
  }

  FUNC_0("mqtt_socket_lwt: topic: %s, message: %s, qos: %d, retain: %d\n",
      VAR_4->connect_info.will_topic,
      VAR_4->connect_info.will_message,
      VAR_4->connect_info.will_qos,
      VAR_4->connect_info.will_retain);
  FUNC_0("leave mqtt_socket_lwt.\n");
  return 0;
}
