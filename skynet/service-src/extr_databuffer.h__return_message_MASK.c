
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct messagepool {struct message* freelist; } ;
struct message {struct message* next; scalar_t__ size; int * buffer; } ;
struct databuffer {struct message* head; struct message* tail; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct databuffer *VAR_0, struct messagepool *VAR_1) {
 struct message *VAR_2 = VAR_0->head;
 if (VAR_2->next == ((void*)0)) {
  FUNC_0(VAR_0->tail == VAR_2);
  VAR_0->head = VAR_0->tail = ((void*)0);
 } else {
  VAR_0->head = VAR_2->next;
 }
 FUNC_1(VAR_2->buffer);
 VAR_2->buffer = ((void*)0);
 VAR_2->size = 0;
 VAR_2->next = VAR_1->freelist;
 VAR_1->freelist = VAR_2;
}
