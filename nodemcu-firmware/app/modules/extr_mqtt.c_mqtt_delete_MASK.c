
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {TYPE_6__* password; TYPE_6__* username; TYPE_6__* client_id; TYPE_6__* will_message; TYPE_6__* will_topic; } ;
struct TYPE_8__ {TYPE_6__* recv_buffer; scalar_t__ pending_msg_q; } ;
struct TYPE_10__ {int connected; void* self_ref; void* cb_puback_ref; void* cb_unsuback_ref; void* cb_suback_ref; void* cb_overflow_ref; void* cb_message_ref; void* cb_disconnect_ref; void* cb_connect_fail_ref; void* cb_connect_ref; TYPE_3__ connect_info; TYPE_2__ mqtt_state; TYPE_6__* pesp_conn; int mqttTimer; } ;
typedef TYPE_4__ lmqtt_userdata ;
struct TYPE_7__ {TYPE_6__* tcp; } ;
struct TYPE_11__ {TYPE_1__ proto; int * reverse; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,TYPE_4__*,int,char*) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( lua_State* VAR_4 )
{
  FUNC_0("enter mqtt_delete.\n");

  lmqtt_userdata *VAR_5 = (lmqtt_userdata *)FUNC_3(VAR_4, 1, "mqtt.socket");
  FUNC_2(VAR_4, VAR_5, 1, "mqtt.socket expected");
  if(VAR_5==((void*)0)){
    FUNC_0("userdata is nil.\n");
    return 0;
  }

  FUNC_8(&VAR_5->mqttTimer);
  VAR_5->connected = 0;


  if(VAR_5->pesp_conn){
    VAR_5->pesp_conn->reverse = ((void*)0);
    if(VAR_5->pesp_conn->proto.tcp)
      FUNC_1(VAR_5->pesp_conn->proto.tcp);
    VAR_5->pesp_conn->proto.tcp = ((void*)0);
    FUNC_1(VAR_5->pesp_conn);
    VAR_5->pesp_conn = ((void*)0);
  }
  while(VAR_5->mqtt_state.pending_msg_q) {
    FUNC_7(FUNC_6(&(VAR_5->mqtt_state.pending_msg_q)));
  }


  if(VAR_5->connect_info.will_topic){
        FUNC_1(VAR_5->connect_info.will_topic);
        VAR_5->connect_info.will_topic = ((void*)0);
  }

  if(VAR_5->connect_info.will_message){
    FUNC_1(VAR_5->connect_info.will_message);
    VAR_5->connect_info.will_message = ((void*)0);
  }



  if(VAR_5->mqtt_state.recv_buffer) {
    FUNC_1(VAR_5->mqtt_state.recv_buffer);
    VAR_5->mqtt_state.recv_buffer = ((void*)0);
  }



  if(VAR_5->connect_info.client_id){
    FUNC_1(VAR_5->connect_info.client_id);
    VAR_5->connect_info.client_id = ((void*)0);
  }
  if(VAR_5->connect_info.username){
    FUNC_1(VAR_5->connect_info.username);
    VAR_5->connect_info.username = ((void*)0);
  }
  if(VAR_5->connect_info.password){
    FUNC_1(VAR_5->connect_info.password);
    VAR_5->connect_info.password = ((void*)0);
  }



  FUNC_4(VAR_4, VAR_3, VAR_5->cb_connect_ref);
  VAR_5->cb_connect_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_connect_fail_ref);
  VAR_5->cb_connect_fail_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_disconnect_ref);
  VAR_5->cb_disconnect_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_message_ref);
  VAR_5->cb_message_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_overflow_ref);
  VAR_5->cb_overflow_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_suback_ref);
  VAR_5->cb_suback_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_unsuback_ref);
  VAR_5->cb_unsuback_ref = VAR_2;
  FUNC_4(VAR_4, VAR_3, VAR_5->cb_puback_ref);
  VAR_5->cb_puback_ref = VAR_2;
  FUNC_5(VAR_4, VAR_1, 0);
  FUNC_4(VAR_4, VAR_3, VAR_5->self_ref);
  VAR_5->self_ref = VAR_2;
  FUNC_5(VAR_4, VAR_0, 0);
  FUNC_0("leave mqtt_delete.\n");
  return 0;
}
