
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {char* ptr; struct write_buffer* next; int buffer; int sz; int userobject; } ;
struct wb_list {struct write_buffer* tail; struct write_buffer* head; } ;
struct socket_server {int dummy; } ;
struct send_object {int sz; scalar_t__ buffer; } ;
struct request_send {int buffer; int sz; } ;


 struct write_buffer* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket_server*,struct send_object*,int ,int ) ;

__attribute__((used)) static struct write_buffer *
FUNC_3(struct socket_server *VAR_0, struct wb_list *VAR_1, struct request_send * VAR_2, int VAR_3) {
 struct write_buffer * VAR_4 = FUNC_0(VAR_3);
 struct send_object VAR_5;
 VAR_4->userobject = FUNC_2(VAR_0, &VAR_5, VAR_2->buffer, VAR_2->sz);
 VAR_4->ptr = (char*)VAR_5.buffer;
 VAR_4->sz = VAR_5.sz;
 VAR_4->buffer = VAR_2->buffer;
 VAR_4->next = ((void*)0);
 if (VAR_1->head == ((void*)0)) {
  VAR_1->head = VAR_1->tail = VAR_4;
 } else {
  FUNC_1(VAR_1->tail != ((void*)0));
  FUNC_1(VAR_1->tail->next == ((void*)0));
  VAR_1->tail->next = VAR_4;
  VAR_1->tail = VAR_4;
 }
 return VAR_4;
}
