
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct espconn {scalar_t__ reverse; } ;
struct TYPE_6__ {scalar_t__ msg_type; scalar_t__ publish_qos; } ;
typedef TYPE_2__ msg_queue_t ;
typedef int lua_State ;
struct TYPE_5__ {int pending_msg_q; } ;
struct TYPE_7__ {scalar_t__ connState; scalar_t__ cb_puback_ref; scalar_t__ self_ref; TYPE_1__ mqtt_state; int pesp_conn; scalar_t__ event_timeout; scalar_t__ keep_alive_tick; int connected; } ;
typedef TYPE_3__ lmqtt_userdata ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_9)
{
  FUNC_0("enter mqtt_socket_sent.\n");
  struct espconn *VAR_10 = VAR_9;
  if(VAR_10 == ((void*)0))
    return;
  lmqtt_userdata *VAR_11 = (lmqtt_userdata *)VAR_10->reverse;
  if(VAR_11 == ((void*)0))
    return;
  if(!VAR_11->connected)
    return;

  VAR_11->event_timeout = 0;
  VAR_11->keep_alive_tick = 0;

  if(VAR_11->connState == VAR_2){
    VAR_11->connState = VAR_3;
    VAR_11->event_timeout = VAR_8;

    return;
  }
  FUNC_0("sent1, queue size: %d\n", FUNC_8(&(VAR_11->mqtt_state.pending_msg_q)));
  uint8_t VAR_12 = 1;

  msg_queue_t *VAR_13 = FUNC_7(&(VAR_11->mqtt_state.pending_msg_q));
  if(VAR_13 && VAR_13->msg_type == VAR_7 && VAR_13->publish_qos == 0) {
    FUNC_6(FUNC_5(&(VAR_11->mqtt_state.pending_msg_q)));
    if(VAR_11->cb_puback_ref != VAR_0 && VAR_11->self_ref != VAR_0) {
      lua_State *VAR_14 = FUNC_2();
      FUNC_3(VAR_14, VAR_1, VAR_11->cb_puback_ref);
      FUNC_3(VAR_14, VAR_1, VAR_11->self_ref);
      FUNC_1(VAR_14, 1, 0);
    }
  } else if(VAR_13 && VAR_13->msg_type == VAR_5) {
    FUNC_6(FUNC_5(&(VAR_11->mqtt_state.pending_msg_q)));
  } else if(VAR_13 && VAR_13->msg_type == VAR_6) {
    FUNC_6(FUNC_5(&(VAR_11->mqtt_state.pending_msg_q)));
  } else if(VAR_13 && VAR_13->msg_type == VAR_4) {
    FUNC_6(FUNC_5(&(VAR_11->mqtt_state.pending_msg_q)));
  } else {
    VAR_12 = 0;
  }
  if (VAR_12) {
    FUNC_4(VAR_11->pesp_conn);
  }
  FUNC_0("sent2, queue size: %d\n", FUNC_8(&(VAR_11->mqtt_state.pending_msg_q)));
  FUNC_0("leave mqtt_socket_sent.\n");
}
