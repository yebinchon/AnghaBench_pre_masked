
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {void* cb_unsuback_ref; void* cb_suback_ref; void* cb_puback_ref; void* cb_overflow_ref; void* cb_message_ref; void* cb_disconnect_ref; void* cb_connect_ref; } ;
typedef TYPE_1__ lmqtt_userdata ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_1__*,int,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,void*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static int FUNC_11( lua_State* VAR_1 )
{
  FUNC_0("enter mqtt_socket_on.\n");
  lmqtt_userdata *VAR_2;
  size_t VAR_3;

  VAR_2 = (lmqtt_userdata *)FUNC_4(VAR_1, 1, "mqtt.socket");
  FUNC_1(VAR_1, VAR_2, 1, "mqtt.socket expected");
  if(VAR_2==((void*)0)){
    FUNC_0("userdata is nil.\n");
    return 0;
  }

  const char *VAR_4 = FUNC_3( VAR_1, 2, &VAR_3 );
  if (VAR_4 == ((void*)0))
    return FUNC_5( VAR_1, "wrong arg type" );

  FUNC_2(VAR_1, 3);
  FUNC_9(VAR_1, 3);

  if( VAR_3 == 7 && FUNC_10(VAR_4, "connect") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_connect_ref);
    VAR_2->cb_connect_ref = FUNC_6(VAR_1, VAR_0);
  }else if( VAR_3 == 7 && FUNC_10(VAR_4, "offline") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_disconnect_ref);
    VAR_2->cb_disconnect_ref = FUNC_6(VAR_1, VAR_0);
  }else if( VAR_3 == 7 && FUNC_10(VAR_4, "message") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_message_ref);
    VAR_2->cb_message_ref = FUNC_6(VAR_1, VAR_0);
  }else if( VAR_3 == 8 && FUNC_10(VAR_4, "overflow") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_overflow_ref);
    VAR_2->cb_overflow_ref = FUNC_6(VAR_1, VAR_0);
  }else if( VAR_3 == 6 && FUNC_10(VAR_4, "puback") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_puback_ref);
    VAR_2->cb_puback_ref = FUNC_6(VAR_1, VAR_0);
  }else if( VAR_3 == 6 && FUNC_10(VAR_4, "suback") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_suback_ref);
    VAR_2->cb_suback_ref = FUNC_6(VAR_1, VAR_0);
  }else if( VAR_3 == 8 && FUNC_10(VAR_4, "unsuback") == 0){
    FUNC_7(VAR_1, VAR_0, VAR_2->cb_unsuback_ref);
    VAR_2->cb_unsuback_ref = FUNC_6(VAR_1, VAR_0);
  }else{
    FUNC_8(VAR_1, 1);
    return FUNC_5( VAR_1, "method not supported" );
  }
  FUNC_0("leave mqtt_socket_on.\n");
  return 0;
}
