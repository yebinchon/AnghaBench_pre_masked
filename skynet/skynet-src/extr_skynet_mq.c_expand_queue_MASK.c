
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_message {int dummy; } ;
struct message_queue {int cap; int head; int tail; struct skynet_message* queue; } ;


 int FUNC_0 (struct skynet_message*) ;
 struct skynet_message* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct message_queue *VAR_0) {
 struct skynet_message *VAR_1 = FUNC_1(sizeof(struct skynet_message) * VAR_0->cap * 2);
 int VAR_2;
 for (VAR_2=0;VAR_2<VAR_0->cap;VAR_2++) {
  VAR_1[VAR_2] = VAR_0->queue[(VAR_0->head + VAR_2) % VAR_0->cap];
 }
 VAR_0->head = 0;
 VAR_0->tail = VAR_0->cap;
 VAR_0->cap *= 2;

 FUNC_0(VAR_0->queue);
 VAR_0->queue = VAR_1;
}
