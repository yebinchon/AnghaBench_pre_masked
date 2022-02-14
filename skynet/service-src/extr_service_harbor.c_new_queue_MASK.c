
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct harbor_msg_queue {int size; void* data; scalar_t__ tail; scalar_t__ head; } ;
struct harbor_msg {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static struct harbor_msg_queue *
FUNC_1() {
 struct harbor_msg_queue * VAR_1 = FUNC_0(sizeof(*VAR_1));
 VAR_1->size = VAR_0;
 VAR_1->head = 0;
 VAR_1->tail = 0;
 VAR_1->data = FUNC_0(VAR_0 * sizeof(struct harbor_msg));

 return VAR_1;
}
