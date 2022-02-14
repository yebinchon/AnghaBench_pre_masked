
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct messagepool_list {struct messagepool_list* next; struct message* pool; } ;
struct messagepool {struct message* freelist; struct messagepool_list* pool; } ;
struct message {int size; struct message* next; int * buffer; } ;
struct databuffer {int size; struct message* tail; struct message* head; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct messagepool_list* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct databuffer *VAR_1, struct messagepool *VAR_2, void *VAR_3, int VAR_4) {
 struct message * VAR_5;
 if (VAR_2->freelist) {
  VAR_5 = VAR_2->freelist;
  VAR_2->freelist = VAR_5->next;
 } else {
  struct messagepool_list * VAR_6 = FUNC_1(sizeof(*VAR_6));
  struct message * VAR_7 = VAR_6->pool;
  int VAR_8;
  for (VAR_8=1;VAR_8<VAR_0;VAR_8++) {
   VAR_7[VAR_8].buffer = ((void*)0);
   VAR_7[VAR_8].size = 0;
   VAR_7[VAR_8].next = &VAR_7[VAR_8+1];
  }
  VAR_7[VAR_0-1].next = ((void*)0);
  VAR_6->next = VAR_2->pool;
  VAR_2->pool = VAR_6;
  VAR_5 = &VAR_7[0];
  VAR_2->freelist = &VAR_7[1];
 }
 VAR_5->buffer = VAR_3;
 VAR_5->size = VAR_4;
 VAR_5->next = ((void*)0);
 VAR_1->size += VAR_4;
 if (VAR_1->head == ((void*)0)) {
  FUNC_0(VAR_1->tail == ((void*)0));
  VAR_1->head = VAR_1->tail = VAR_5;
 } else {
  VAR_1->tail->next = VAR_5;
  VAR_1->tail = VAR_5;
 }
}
