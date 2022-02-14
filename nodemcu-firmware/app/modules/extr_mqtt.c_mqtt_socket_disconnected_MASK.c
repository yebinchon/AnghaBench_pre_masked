
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct espconn {scalar_t__ reverse; } ;
typedef int lua_State ;
struct TYPE_5__ {int recv_buffer_state; scalar_t__ recv_buffer_size; TYPE_4__* recv_buffer; } ;
struct TYPE_7__ {int connected; scalar_t__ cb_disconnect_ref; scalar_t__ self_ref; TYPE_4__* pesp_conn; TYPE_1__ mqtt_state; int mqttTimer; } ;
typedef TYPE_3__ lmqtt_userdata ;
struct TYPE_6__ {TYPE_4__* tcp; } ;
struct TYPE_8__ {TYPE_2__ proto; int * reverse; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
  FUNC_0("enter mqtt_socket_disconnected.\n");
  struct espconn *VAR_4 = VAR_3;
  bool VAR_5 = 0;
  if(VAR_4 == ((void*)0))
    return;
  lmqtt_userdata *VAR_6 = (lmqtt_userdata *)VAR_4->reverse;
  if(VAR_6 == ((void*)0))
    return;

  FUNC_6(&VAR_6->mqttTimer);

  lua_State *VAR_7 = FUNC_4();

  if(VAR_6->connected){
    VAR_6->connected = 0;
    if((VAR_6->cb_disconnect_ref != VAR_0) && (VAR_6->self_ref != VAR_0)) {
      FUNC_5(VAR_7, VAR_1, VAR_6->cb_disconnect_ref);
      FUNC_5(VAR_7, VAR_1, VAR_6->self_ref);
      VAR_5 = 1;
    }
  }

  if(VAR_6->mqtt_state.recv_buffer) {
    FUNC_1(VAR_6->mqtt_state.recv_buffer);
    VAR_6->mqtt_state.recv_buffer = ((void*)0);
  }
  VAR_6->mqtt_state.recv_buffer_size = 0;
  VAR_6->mqtt_state.recv_buffer_state = VAR_2;

  if(VAR_6->pesp_conn){
    VAR_6->pesp_conn->reverse = ((void*)0);
    if(VAR_6->pesp_conn->proto.tcp)
      FUNC_1(VAR_6->pesp_conn->proto.tcp);
    VAR_6->pesp_conn->proto.tcp = ((void*)0);
    FUNC_1(VAR_6->pesp_conn);
    VAR_6->pesp_conn = ((void*)0);
  }

  VAR_6->connected = 0;
  FUNC_2(VAR_7, VAR_1, VAR_6->self_ref);
  VAR_6->self_ref = VAR_0;

  if(VAR_5){
    FUNC_3(VAR_7, 1, 0);
  }

  FUNC_0("leave mqtt_socket_disconnected.\n");
}
