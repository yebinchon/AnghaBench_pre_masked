
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct write_buffer {char* ptr; int sz; struct write_buffer* next; void* buffer; int userobject; } ;
struct socket_server {int dummy; } ;
struct socket_message {int dummy; } ;
struct socket_lock {int dummy; } ;
struct TYPE_2__ {struct write_buffer* head; struct write_buffer* tail; } ;
struct socket {int dw_offset; int * dw_buffer; TYPE_1__ high; int wb_size; int dw_size; } ;
struct send_object {int sz; scalar_t__ buffer; } ;


 struct write_buffer* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_2 (struct socket_server*,struct send_object*,void*,int ) ;
 int FUNC_3 (struct socket_lock*) ;
 int FUNC_4 (struct socket_lock*) ;

__attribute__((used)) static int
FUNC_5(struct socket_server *VAR_1, struct socket *VAR_2, struct socket_lock *VAR_3, struct socket_message *VAR_4) {
 if (!FUNC_3(VAR_3))
  return -1;
 if (VAR_2->dw_buffer) {

  struct write_buffer * VAR_5 = FUNC_0(VAR_0);
  struct send_object VAR_6;
  VAR_5->userobject = FUNC_2(VAR_1, &VAR_6, (void *)VAR_2->dw_buffer, VAR_2->dw_size);
  VAR_5->ptr = (char*)VAR_6.buffer+VAR_2->dw_offset;
  VAR_5->sz = VAR_6.sz - VAR_2->dw_offset;
  VAR_5->buffer = (void *)VAR_2->dw_buffer;
  VAR_2->wb_size+=VAR_5->sz;
  if (VAR_2->high.head == ((void*)0)) {
   VAR_2->high.head = VAR_2->high.tail = VAR_5;
   VAR_5->next = ((void*)0);
  } else {
   VAR_5->next = VAR_2->high.head;
   VAR_2->high.head = VAR_5;
  }
  VAR_2->dw_buffer = ((void*)0);
 }
 int VAR_7 = FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);
 FUNC_4(VAR_3);

 return VAR_7;
}
