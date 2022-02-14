
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_4__ {scalar_t__ topic_length; scalar_t__ data_length; scalar_t__ data; scalar_t__ topic; } ;
typedef TYPE_1__ mqtt_event_data_t ;
typedef int lua_State ;
struct TYPE_5__ {int cb_message_ref; int cb_overflow_ref; int self_ref; } ;
typedef TYPE_2__ lmqtt_userdata ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_7(lmqtt_userdata * VAR_2, uint8_t* VAR_3, uint16_t VAR_4, uint8_t VAR_5)
{
  FUNC_0("enter deliver_publish (len=%d, overflow=%d).\n", VAR_4, VAR_5);
  if(VAR_2 == ((void*)0))
    return;
  mqtt_event_data_t VAR_6;

  VAR_6.topic_length = VAR_4;
  VAR_6.topic = FUNC_6(VAR_3, &VAR_6.topic_length);

  VAR_6.data_length = VAR_4;
  VAR_6.data = FUNC_5(VAR_3, &VAR_6.data_length);

  int VAR_7 = !VAR_5 ? VAR_2->cb_message_ref : VAR_2->cb_overflow_ref;

  if(VAR_7 == VAR_0)
    return;
  if(VAR_2->self_ref == VAR_0)
    return;
  lua_State *VAR_8 = FUNC_2();
  if(VAR_6.topic && (VAR_6.topic_length > 0)){
    FUNC_4(VAR_8, VAR_1, VAR_7);
    FUNC_4(VAR_8, VAR_1, VAR_2->self_ref);
    FUNC_3(VAR_8, VAR_6.topic, VAR_6.topic_length);
  } else {
    FUNC_0("get wrong packet.\n");
    return;
  }
  if(VAR_6.data && (VAR_6.data_length > 0)){
    FUNC_3(VAR_8, VAR_6.data, VAR_6.data_length);
    FUNC_1(VAR_8, 3, 0);
  } else {
    FUNC_1(VAR_8, 2, 0);
  }
  FUNC_0("leave deliver_publish.\n");
}
