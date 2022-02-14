
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ sint8 ;
struct TYPE_13__ {int length; } ;
struct TYPE_15__ {TYPE_1__ msg; int publish_qos; int msg_id; } ;
typedef TYPE_3__ msg_queue_t ;
struct TYPE_16__ {scalar_t__ length; int data; } ;
typedef TYPE_4__ mqtt_message_t ;
typedef int lua_State ;
struct TYPE_14__ {int pending_msg_q; int mqtt_connection; } ;
struct TYPE_17__ {TYPE_2__ mqtt_state; int * pesp_conn; int event_timeout; int cb_unsuback_ref; int connected; } ;
typedef TYPE_5__ lmqtt_userdata ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,TYPE_5__*,int,char*) ;
 char* FUNC_2 (int *,int,size_t*) ;
 char* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *,int*,int) ;
 TYPE_4__* FUNC_17 (int *,char const*,int *) ;
 TYPE_4__* FUNC_18 (int *) ;
 TYPE_4__* FUNC_19 (int *,int *) ;
 TYPE_4__* FUNC_20 (int *,char const*) ;
 scalar_t__ FUNC_21 (int *) ;
 TYPE_3__* FUNC_22 (int *,TYPE_4__*,int ,int ,int) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24( lua_State* VAR_7 ) {
  FUNC_0("enter mqtt_socket_unsubscribe.\n");

  uint8_t VAR_8 = 1;
  uint16_t VAR_9 = 0;
  const char *VAR_10;
  size_t VAR_11;
  lmqtt_userdata *VAR_12;

  VAR_12 = (lmqtt_userdata *) FUNC_4( VAR_7, VAR_8, "mqtt.socket" );
  FUNC_1( VAR_7, VAR_12, VAR_8, "mqtt.socket expected" );
  VAR_8++;

  if(VAR_12==((void*)0)){
    FUNC_0("userdata is nil.\n");
    FUNC_11(VAR_7, 0);
    return 1;
  }

  if(VAR_12->pesp_conn == ((void*)0)){
    FUNC_0("mud->pesp_conn is NULL.\n");
    FUNC_11(VAR_7, 0);
    return 1;
  }

  if(!VAR_12->connected){
    FUNC_5( VAR_7, "not connected" );
    FUNC_11(VAR_7, 0);
    return 1;
  }

  uint8_t VAR_13[VAR_5];
  FUNC_16(&VAR_12->mqtt_state.mqtt_connection, VAR_13, VAR_5);
  mqtt_message_t *VAR_14 = ((void*)0);

  if( FUNC_8( VAR_7, VAR_8 ) ) {
    FUNC_0("unsubscribe table\n");
    FUNC_12( VAR_7 );

    int VAR_15 = 0;
    uint8_t VAR_16 = 0;

    while( FUNC_9( VAR_7, VAR_8 ) != 0 ) {
      VAR_10 = FUNC_3( VAR_7, -2 );

      if (VAR_15 == 0) {
        VAR_14 = FUNC_19( &VAR_12->mqtt_state.mqtt_connection, &VAR_9 );
      }
      VAR_14 = FUNC_20( &VAR_12->mqtt_state.mqtt_connection, VAR_10 );
      VAR_15++;

      FUNC_0("topic: %s - length: %d\n", VAR_10, VAR_14->length);

      if (VAR_14->length == 0) {
        FUNC_10(VAR_7, 1);
        VAR_16 = 1;
        break;
      }

      FUNC_10( VAR_7, 1 );
    }

    if (VAR_15 == 0){
      return FUNC_5( VAR_7, "no topics found" );
    }
    if (VAR_16 != 0){
      return FUNC_5( VAR_7, "buffer overflow, can't enqueue all unsubscriptions" );
    }

    VAR_14 = FUNC_18( &VAR_12->mqtt_state.mqtt_connection );
    if (VAR_14->length == 0) {
      return FUNC_5( VAR_7, "buffer overflow, can't enqueue all unsubscriptions" );
    }

    VAR_8++;
  } else {
    FUNC_0("unsubscribe string\n");
    VAR_10 = FUNC_2( VAR_7, VAR_8, &VAR_11 );
    VAR_8++;
    if( VAR_10 == ((void*)0) ){
      return FUNC_5( VAR_7, "need topic name" );
    }
    VAR_14 = FUNC_17( &VAR_12->mqtt_state.mqtt_connection, VAR_10, &VAR_9 );
  }

  if( FUNC_14( VAR_7, VAR_8 ) == VAR_3 || FUNC_14( VAR_7, VAR_8 ) == VAR_4 ) {
    FUNC_13( VAR_7, VAR_8 );
    FUNC_7( VAR_7, VAR_2, VAR_12->cb_unsuback_ref );
    VAR_12->cb_unsuback_ref = FUNC_6( VAR_7, VAR_2 );
  }

  msg_queue_t *VAR_17 = FUNC_22( &(VAR_12->mqtt_state.pending_msg_q), VAR_14,
                                   VAR_9, VAR_6, (int)FUNC_15(VAR_14->data) );

  FUNC_0("topic: %s - id: %d - qos: %d, length: %d\n", VAR_10, VAR_17->msg_id, VAR_17->publish_qos, VAR_17->msg.length);
  FUNC_0("msg_size: %d, event_timeout: %d\n", FUNC_23(&(VAR_12->mqtt_state.pending_msg_q)), VAR_12->event_timeout);

  sint8 VAR_18 = VAR_0;

  VAR_18 = FUNC_21(VAR_12->pesp_conn);

  if(!VAR_17 || VAR_18 != VAR_1){
    FUNC_11(VAR_7, 0);
  } else {
    FUNC_11(VAR_7, 1);
  }
  FUNC_0("unsubscribe, queue size: %d\n", FUNC_23(&(VAR_12->mqtt_state.pending_msg_q)));
  FUNC_0("leave mqtt_socket_unsubscribe.\n");
  return 1;
}
