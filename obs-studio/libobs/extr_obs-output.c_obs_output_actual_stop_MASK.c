
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int uint64_t ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {int (* stop ) (scalar_t__,int ) ;} ;
struct TYPE_16__ {TYPE_12__* caption_tail; TYPE_12__* caption_head; int stopping_event; void* stop_code; TYPE_2__ context; TYPE_1__ info; int delay_capturing; int delay_active; int reconnect_thread; scalar_t__ reconnect_thread_active; int reconnect_stop_event; } ;
typedef TYPE_3__ obs_output_t ;
struct TYPE_13__ {struct TYPE_13__* next; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_12__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (scalar_t__,int ) ;

void FUNC_13(obs_output_t *VAR_1, bool VAR_2, uint64_t VAR_3)
{
 bool VAR_4 = 1;
 bool VAR_5 = 0;

 if (FUNC_11(VAR_1) && !VAR_2)
  return;

 FUNC_4(VAR_1, 0);

 FUNC_6(VAR_1->stopping_event);

 VAR_5 = FUNC_9(VAR_1) && !FUNC_1(VAR_1);
 if (FUNC_9(VAR_1)) {
  FUNC_7(VAR_1->reconnect_stop_event);
  if (VAR_1->reconnect_thread_active)
   FUNC_8(VAR_1->reconnect_thread, ((void*)0));
 }

 if (VAR_2) {
  if (FUNC_1(VAR_1)) {
   VAR_4 = FUNC_2(VAR_1);
   FUNC_5(&VAR_1->delay_active, 0);
   FUNC_5(&VAR_1->delay_capturing, 0);
   VAR_1->stop_code = VAR_0;
   FUNC_3(VAR_1);
   FUNC_7(VAR_1->stopping_event);
  } else {
   VAR_4 = 1;
  }
 } else {
  VAR_4 = 1;
 }

 if (VAR_1->context.data && VAR_4) {
  VAR_1->info.stop(VAR_1->context.data, VAR_3);

 } else if (VAR_5) {
  VAR_1->stop_code = VAR_0;
  FUNC_10(VAR_1);
  FUNC_7(VAR_1->stopping_event);
 }

 while (VAR_1->caption_head) {
  VAR_1->caption_tail = VAR_1->caption_head->next;
  FUNC_0(VAR_1->caption_head);
  VAR_1->caption_head = VAR_1->caption_tail;
 }
}
