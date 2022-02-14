
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct espconn {int dummy; } ;
typedef scalar_t__ sint8 ;
typedef int msg_queue_t ;
typedef int mqtt_message_t ;
typedef int lua_State ;
struct TYPE_4__ {int pending_msg_q; int mqtt_connection; } ;
struct TYPE_5__ {TYPE_1__ mqtt_state; int * pesp_conn; int cb_puback_ref; int connected; } ;
typedef TYPE_2__ lmqtt_userdata ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,TYPE_2__*,int,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int*,int) ;
 int * FUNC_12 (int *,char const*,char const*,size_t,int,int,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *,int ,int ,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16( lua_State* VAR_6 )
{
  FUNC_0("enter mqtt_socket_publish.\n");
  struct espconn *VAR_7 = ((void*)0);
  lmqtt_userdata *VAR_8;
  size_t VAR_9;
  uint8_t VAR_10 = 1;
  uint16_t VAR_11 = 0;

  VAR_8 = (lmqtt_userdata *)FUNC_4(VAR_6, VAR_10, "mqtt.socket");
  FUNC_1(VAR_6, VAR_8, VAR_10, "mqtt.socket expected");
  VAR_10++;
  if(VAR_8==((void*)0)){
    FUNC_0("userdata is nil.\n");
    FUNC_8(VAR_6, 0);
    return 1;
  }

  if(VAR_8->pesp_conn == ((void*)0)){
    FUNC_0("mud->pesp_conn is NULL.\n");
    FUNC_8(VAR_6, 0);
    return 1;
  }

  if(!VAR_8->connected){
    return FUNC_5( VAR_6, "not connected" );
  }

  const char *VAR_12 = FUNC_3( VAR_6, VAR_10, &VAR_9 );
  VAR_10 ++;
  if (VAR_12 == ((void*)0)){
    return FUNC_5( VAR_6, "need topic" );
  }

  const char *VAR_13 = FUNC_3( VAR_6, VAR_10, &VAR_9 );
  VAR_10 ++;
  uint8_t VAR_14 = FUNC_2( VAR_6, VAR_10);
  VAR_10 ++;
  uint8_t VAR_15 = FUNC_2( VAR_6, VAR_10);
  VAR_10 ++;

  uint8_t VAR_16[VAR_4];
  FUNC_11(&VAR_8->mqtt_state.mqtt_connection, VAR_16, VAR_4);
  mqtt_message_t *VAR_17 = FUNC_12(&VAR_8->mqtt_state.mqtt_connection,
                       VAR_12, VAR_13, VAR_9,
                       VAR_14, VAR_15,
                       &VAR_11);

  if (FUNC_10(VAR_6, VAR_10) == VAR_2 || FUNC_10(VAR_6, VAR_10) == VAR_3){
    FUNC_9(VAR_6, VAR_10);
    FUNC_7(VAR_6, VAR_1, VAR_8->cb_puback_ref);
    VAR_8->cb_puback_ref = FUNC_6(VAR_6, VAR_1);
  }

  msg_queue_t *VAR_18 = FUNC_14(&(VAR_8->mqtt_state.pending_msg_q), VAR_17,
                      VAR_11, VAR_5, (int)VAR_14 );

  sint8 VAR_19 = VAR_0;

  VAR_19 = FUNC_13(VAR_8->pesp_conn);

  if(!VAR_18 || VAR_19 != VAR_0){
    FUNC_8(VAR_6, 0);
  } else {
    FUNC_8(VAR_6, 1);
  }

  FUNC_0("publish, queue size: %d\n", FUNC_15(&(VAR_8->mqtt_state.pending_msg_q)));
  FUNC_0("leave mqtt_socket_publish.\n");
  return 1;
}
