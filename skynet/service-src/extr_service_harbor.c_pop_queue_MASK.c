
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct harbor_msg_queue {size_t head; size_t tail; int size; struct harbor_msg* data; } ;
struct harbor_msg {int dummy; } ;



__attribute__((used)) static struct harbor_msg *
FUNC_0(struct harbor_msg_queue * VAR_0) {
 if (VAR_0->head == VAR_0->tail) {
  return ((void*)0);
 }
 struct harbor_msg * VAR_1 = &VAR_0->data[VAR_0->head];
 VAR_0->head = (VAR_0->head + 1) % VAR_0->size;
 return VAR_1;
}
