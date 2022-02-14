
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct espconn {scalar_t__ reverse; } ;
typedef int sint8 ;
struct TYPE_6__ {int length; int data; } ;
struct TYPE_8__ {TYPE_1__ msg; } ;
typedef TYPE_3__ msg_queue_t ;
struct TYPE_7__ {int pending_msg_q; } ;
struct TYPE_9__ {scalar_t__ event_timeout; TYPE_2__ mqtt_state; scalar_t__ keep_alive_tick; scalar_t__ secure; } ;
typedef TYPE_4__ lmqtt_userdata ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct espconn*,int ,int ) ;
 int FUNC_2 (struct espconn*,int ,int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static sint8 FUNC_5(struct espconn *VAR_2)
{
  if(VAR_2 == ((void*)0))
    return VAR_0;
  lmqtt_userdata *VAR_3 = (lmqtt_userdata *)VAR_2->reverse;
  if(VAR_3 == ((void*)0))
    return VAR_0;

  sint8 VAR_4 = VAR_0;



  if (VAR_3->event_timeout == 0) {
    msg_queue_t *VAR_5 = FUNC_3(&(VAR_3->mqtt_state.pending_msg_q));
    if (VAR_5) {
      VAR_3->event_timeout = VAR_1;
      FUNC_0("Sent: %d\n", VAR_5->msg.length);







      {
        VAR_4 = FUNC_2( VAR_2, VAR_5->msg.data, VAR_5->msg.length );
      }
      VAR_3->keep_alive_tick = 0;
    }
  }
  FUNC_0("send_if_poss, queue size: %d\n", FUNC_4(&(VAR_3->mqtt_state.pending_msg_q)));
  return VAR_4;
}
