
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lua_State ;
struct TYPE_5__ {int port; int recv_buffer_state; scalar_t__ recv_buffer_size; int * recv_buffer; TYPE_2__* connect_info; int * pending_msg_q; } ;
struct TYPE_6__ {int clean_session; int keepalive; int max_message_length; scalar_t__ will_retain; scalar_t__ will_qos; scalar_t__* password; scalar_t__* username; scalar_t__* client_id; } ;
struct TYPE_7__ {TYPE_1__ mqtt_state; TYPE_2__ connect_info; int connState; void* cb_puback_ref; void* cb_unsuback_ref; void* cb_suback_ref; void* cb_overflow_ref; void* cb_message_ref; void* cb_disconnect_ref; void* cb_connect_fail_ref; void* cb_connect_ref; void* self_ref; } ;
typedef TYPE_3__ lmqtt_userdata ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (scalar_t__*,char const*,size_t) ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int FUNC_14 (char*,char*,char*,int ) ;
 size_t FUNC_15 (char*) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17( lua_State* VAR_5 )
{
  FUNC_0("enter mqtt_socket_client.\n");

  lmqtt_userdata *VAR_6;
  char VAR_7[20] = {0};
  FUNC_14(VAR_7, "%s%x", "NodeMCU_", FUNC_16() );
  FUNC_0(VAR_7);
  FUNC_0("\n");

  const char *VAR_8 = VAR_7, *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
  size_t VAR_11 = FUNC_15(VAR_7);
  size_t VAR_12 = 0, VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 1;
  int VAR_16 = 1;
  int VAR_17 = 0;
  int VAR_18 = FUNC_7(VAR_5);


  VAR_6 = (lmqtt_userdata *)FUNC_10(VAR_5, sizeof(lmqtt_userdata));
  FUNC_13(VAR_6, 0, sizeof(*VAR_6));

  VAR_6->self_ref = VAR_1;
  VAR_6->cb_connect_ref = VAR_1;
  VAR_6->cb_connect_fail_ref = VAR_1;
  VAR_6->cb_disconnect_ref = VAR_1;

  VAR_6->cb_message_ref = VAR_1;
  VAR_6->cb_overflow_ref = VAR_1;
  VAR_6->cb_suback_ref = VAR_1;
  VAR_6->cb_unsuback_ref = VAR_1;
  VAR_6->cb_puback_ref = VAR_1;

  VAR_6->connState = VAR_3;


  FUNC_6(VAR_5, "mqtt.socket");
  FUNC_11(VAR_5, -2);

  if( FUNC_9(VAR_5,VAR_15) )
  {
    VAR_8 = FUNC_4( VAR_5, VAR_15, &VAR_11 );
    VAR_15++;
  }

  if(FUNC_8( VAR_5, VAR_15 ))
  {
    VAR_14 = FUNC_3( VAR_5, VAR_15);
    VAR_15++;
  }

  if(VAR_14 == 0){
    VAR_14 = VAR_2;
  }

  if(FUNC_9( VAR_5, VAR_15 )){
    VAR_9 = FUNC_4( VAR_5, VAR_15, &VAR_12 );
    VAR_15++;
  }
  if(VAR_9 == ((void*)0))
    VAR_12 = 0;
  FUNC_0("length username: %d\r\n", VAR_12);

  if(FUNC_9( VAR_5, VAR_15 )){
    VAR_10 = FUNC_4( VAR_5, VAR_15, &VAR_13 );
    VAR_15++;
  }
  if(VAR_10 == ((void*)0))
    VAR_13 = 0;
  FUNC_0("length password: %d\r\n", VAR_13);

  if(FUNC_8( VAR_5, VAR_15 ))
  {
    VAR_16 = FUNC_3( VAR_5, VAR_15);
    VAR_15++;
  }

  if(VAR_16 > 1){
    VAR_16 = 1;
  }

  if(FUNC_8( VAR_5, VAR_15 ))
  {
      VAR_17 = FUNC_3( VAR_5, VAR_15);
      VAR_15++;
  }

  if(VAR_17 == 0) {
    VAR_17 = VAR_0;
  }


  VAR_6->connect_info.client_id = (uint8_t *)FUNC_1(1,VAR_11+1);
  VAR_6->connect_info.username = (uint8_t *)FUNC_1(1,VAR_12 + 1);
  VAR_6->connect_info.password = (uint8_t *)FUNC_1(1,VAR_13 + 1);
  if(!VAR_6->connect_info.client_id || !VAR_6->connect_info.username || !VAR_6->connect_info.password){
    if(VAR_6->connect_info.client_id) {
      FUNC_2(VAR_6->connect_info.client_id);
      VAR_6->connect_info.client_id = ((void*)0);
    }
    if(VAR_6->connect_info.username) {
      FUNC_2(VAR_6->connect_info.username);
      VAR_6->connect_info.username = ((void*)0);
    }
    if(VAR_6->connect_info.password) {
      FUNC_2(VAR_6->connect_info.password);
      VAR_6->connect_info.password = ((void*)0);
    }
    return FUNC_5(VAR_5, "not enough memory");
  }

  FUNC_12(VAR_6->connect_info.client_id, VAR_8, VAR_11);
  VAR_6->connect_info.client_id[VAR_11] = 0;
  FUNC_12(VAR_6->connect_info.username, VAR_9, VAR_12);
  VAR_6->connect_info.username[VAR_12] = 0;
  FUNC_12(VAR_6->connect_info.password, VAR_10, VAR_13);
  VAR_6->connect_info.password[VAR_13] = 0;

  FUNC_0("MQTT: Init info: %s, %s, %s\r\n", VAR_6->connect_info.client_id, VAR_6->connect_info.username, VAR_6->connect_info.password);

  VAR_6->connect_info.clean_session = VAR_16;
  VAR_6->connect_info.will_qos = 0;
  VAR_6->connect_info.will_retain = 0;
  VAR_6->connect_info.keepalive = VAR_14;
  VAR_6->connect_info.max_message_length = VAR_17;

  VAR_6->mqtt_state.pending_msg_q = ((void*)0);
  VAR_6->mqtt_state.port = 1883;
  VAR_6->mqtt_state.connect_info = &VAR_6->connect_info;
  VAR_6->mqtt_state.recv_buffer = ((void*)0);
  VAR_6->mqtt_state.recv_buffer_size = 0;
  VAR_6->mqtt_state.recv_buffer_state = VAR_4;

  FUNC_0("leave mqtt_socket_client.\n");
  return 1;
}
