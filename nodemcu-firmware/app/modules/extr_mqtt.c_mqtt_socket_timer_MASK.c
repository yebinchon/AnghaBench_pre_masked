
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int msg_queue_t ;
struct TYPE_10__ {int data; } ;
typedef TYPE_3__ mqtt_message_t ;
struct TYPE_9__ {int pending_msg_q; int mqtt_connection; TYPE_1__* connect_info; } ;
struct TYPE_11__ {scalar_t__ event_timeout; scalar_t__ connState; scalar_t__ keep_alive_tick; int keepalive_sent; int * pesp_conn; TYPE_2__ mqtt_state; scalar_t__ secure; int mqttTimer; } ;
typedef TYPE_4__ lmqtt_userdata ;
struct TYPE_8__ {scalar_t__ keepalive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,TYPE_3__*,int ,int ,int) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(void *VAR_9)
{
  FUNC_0("enter mqtt_socket_timer.\n");
  lmqtt_userdata *VAR_10 = (lmqtt_userdata*) VAR_9;

  if(VAR_10 == ((void*)0))
    return;
  if(VAR_10->pesp_conn == ((void*)0)){
    FUNC_0("mud->pesp_conn is NULL.\n");
    FUNC_14(&VAR_10->mqttTimer);
    return;
  }

  FUNC_0("timer, queue size: %d\n", FUNC_13(&(VAR_10->mqtt_state.pending_msg_q)));
  if(VAR_10->event_timeout > 0){
    FUNC_0("event_timeout: %d.\n", VAR_10->event_timeout);
        VAR_10->event_timeout --;
    if(VAR_10->event_timeout > 0){
      return;
    } else {
      FUNC_0("event timeout. \n");
      if(VAR_10->connState == VAR_6)
        FUNC_10(FUNC_9(&(VAR_10->mqtt_state.pending_msg_q)));


    }
  }

  if(VAR_10->connState == VAR_7){
    FUNC_0("Can not connect to broker.\n");
    FUNC_14(&VAR_10->mqttTimer);
    FUNC_3(VAR_10, VAR_3);







    {
      FUNC_1(VAR_10->pesp_conn);
    }
  } else if(VAR_10->connState == VAR_1){
    FUNC_0("sSend MQTT_CONNECT failed.\n");
    VAR_10->connState = VAR_7;
    FUNC_3(VAR_10, VAR_5);
    {
      FUNC_1(VAR_10->pesp_conn);
    }
    VAR_10->keep_alive_tick = 0;
  } else if(VAR_10->connState == VAR_2) {
    FUNC_0("MQTT_CONNECT timeout.\n");
    VAR_10->connState = VAR_7;
    {
      FUNC_1(VAR_10->pesp_conn);
    }
    FUNC_3(VAR_10, VAR_4);
  } else if(VAR_10->connState == VAR_6){
    msg_queue_t *VAR_11 = FUNC_12(&(VAR_10->mqtt_state.pending_msg_q));
    if(VAR_11){
      FUNC_7(VAR_10->pesp_conn);
    } else {

      VAR_10->keep_alive_tick ++;
      if(VAR_10->keep_alive_tick > VAR_10->mqtt_state.connect_info->keepalive){
        if (VAR_10->keepalive_sent) {

          FUNC_8(VAR_10->pesp_conn, 0);
        } else {
          uint8_t VAR_12[VAR_0];
          FUNC_5(&VAR_10->mqtt_state.mqtt_connection, VAR_12, VAR_0);
          FUNC_0("\r\nMQTT: Send keepalive packet\r\n");
          mqtt_message_t* VAR_13 = FUNC_6(&VAR_10->mqtt_state.mqtt_connection);
          msg_queue_t *VAR_14 = FUNC_11( &(VAR_10->mqtt_state.pending_msg_q), VAR_13,
                              0, VAR_8, (int)FUNC_4(VAR_13->data) );
          VAR_10->keepalive_sent = 1;
          VAR_10->keep_alive_tick = 0;
          FUNC_7(VAR_10->pesp_conn);
        }
      }
    }
  }
  FUNC_0("keep_alive_tick: %d\n", VAR_10->keep_alive_tick);
  FUNC_0("leave mqtt_socket_timer.\n");
}
