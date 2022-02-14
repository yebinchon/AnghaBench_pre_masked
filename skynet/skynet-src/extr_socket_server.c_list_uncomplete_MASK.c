
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {void* buffer; scalar_t__ ptr; } ;
struct wb_list {struct write_buffer* head; } ;



__attribute__((used)) static inline int
FUNC_0(struct wb_list *VAR_0) {
 struct write_buffer *VAR_1 = VAR_0->head;
 if (VAR_1 == ((void*)0))
  return 0;

 return (void *)VAR_1->ptr != VAR_1->buffer;
}
