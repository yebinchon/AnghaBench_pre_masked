
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_message {int dummy; } ;
struct skynet_context {struct message_queue* queue; } ;
struct message_queue {int dummy; } ;


 int FUNC_0 (struct skynet_context*,struct skynet_message*) ;
 int FUNC_1 (struct message_queue*,struct skynet_message*) ;

void
FUNC_2(struct skynet_context * VAR_0) {

 struct skynet_message VAR_1;
 struct message_queue *VAR_2 = VAR_0->queue;
 while (!FUNC_1(VAR_2,&VAR_1)) {
  FUNC_0(VAR_0, &VAR_1);
 }
}
