
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sint8 ;
struct TYPE_15__ {int length; int * data; } ;
typedef TYPE_4__ mqtt_message_t ;
typedef int lua_State ;
struct TYPE_14__ {scalar_t__ pending_msg_q; int mqtt_connection; } ;
struct TYPE_16__ {TYPE_3__ mqtt_state; scalar_t__ connected; TYPE_8__* pesp_conn; scalar_t__ secure; } ;
typedef TYPE_5__ lmqtt_userdata ;
struct TYPE_13__ {TYPE_1__* tcp; } ;
struct TYPE_17__ {TYPE_2__ proto; } ;
struct TYPE_12__ {scalar_t__ local_port; scalar_t__ remote_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,int *,int ) ;
 int FUNC_4 (TYPE_8__*,int *,int ) ;
 int FUNC_5 (int *,TYPE_5__*,int,char*) ;
 scalar_t__ FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 TYPE_4__* FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11( lua_State* VAR_2 )
{
  FUNC_0("enter mqtt_socket_close.\n");
  int VAR_3 = 0;
  lmqtt_userdata *VAR_4 = ((void*)0);

  VAR_4 = (lmqtt_userdata *)FUNC_6(VAR_2, 1, "mqtt.socket");
  FUNC_5(VAR_2, VAR_4, 1, "mqtt.socket expected");
  if (VAR_4 == ((void*)0) || VAR_4->pesp_conn == ((void*)0)) {
    FUNC_7(VAR_2, 0);
    return 1;
  }

  sint8 VAR_5 = VAR_0;
  if (VAR_4->connected) {

    mqtt_message_t* VAR_6 = FUNC_8(&VAR_4->mqtt_state.mqtt_connection);
    FUNC_0("Send MQTT disconnect infomation, data len: %d, d[0]=%d \r\n", VAR_6->length, VAR_6->data[0]);
    {
      VAR_5 = FUNC_4(VAR_4->pesp_conn, VAR_6->data, VAR_6->length);
      if(VAR_4->pesp_conn->proto.tcp->remote_port || VAR_4->pesp_conn->proto.tcp->local_port)
        VAR_5 |= FUNC_1(VAR_4->pesp_conn);
    }
  }
  VAR_4->connected = 0;

  while (VAR_4->mqtt_state.pending_msg_q) {
    FUNC_10(FUNC_9(&(VAR_4->mqtt_state.pending_msg_q)));
  }

  FUNC_0("leave mqtt_socket_close.\n");

  if (VAR_5 == VAR_1) {
    FUNC_7(VAR_2, 1);
  } else {
    FUNC_7(VAR_2, 0);
  }
  return 1;
}
