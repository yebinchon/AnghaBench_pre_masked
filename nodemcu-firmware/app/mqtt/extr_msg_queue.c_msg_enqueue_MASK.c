
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int length; int * data; } ;
struct TYPE_9__ {int msg_type; int publish_qos; struct TYPE_9__* next; int msg_id; TYPE_1__ msg; } ;
typedef TYPE_2__ msg_queue_t ;
struct TYPE_10__ {int length; int data; } ;
typedef TYPE_3__ mqtt_message_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int) ;

msg_queue_t *FUNC_4(msg_queue_t **VAR_0, mqtt_message_t *VAR_1, uint16_t VAR_2, int VAR_3, int VAR_4){
  if(!VAR_0){
    return ((void*)0);
  }
  if (!VAR_1 || !VAR_1->data || VAR_1->length == 0){
    FUNC_0("empty message\n");
    return ((void*)0);
  }
  msg_queue_t *VAR_5 = (msg_queue_t *)FUNC_1(1,sizeof(msg_queue_t));
  if(!VAR_5){
    FUNC_0("not enough memory\n");
    return ((void*)0);
  }

  VAR_5->msg.data = (uint8_t *)FUNC_1(1,VAR_1->length);
  if(!VAR_5->msg.data){
    FUNC_0("not enough memory\n");
    FUNC_2(VAR_5);
    return ((void*)0);
  }
  FUNC_3(VAR_5->msg.data, VAR_1->data, VAR_1->length);
  VAR_5->msg.length = VAR_1->length;
  VAR_5->next = ((void*)0);
  VAR_5->msg_id = VAR_2;
  VAR_5->msg_type = VAR_3;
  VAR_5->publish_qos = VAR_4;

  msg_queue_t *VAR_6 = *VAR_0;
  if(VAR_6){
    while(VAR_6->next!=((void*)0)) VAR_6 = VAR_6->next;
    VAR_6->next = VAR_5;
  } else {
    *VAR_0 = VAR_5;
  }
  return VAR_5;
}
