
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct messagepool {int dummy; } ;
struct message {int size; int buffer; } ;
struct databuffer {int size; int offset; struct message* head; } ;


 int FUNC_0 (struct databuffer*,struct messagepool*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct databuffer *VAR_0, struct messagepool *VAR_1, void * VAR_2, int VAR_3) {
 FUNC_1(VAR_0->size >= VAR_3);
 VAR_0->size -= VAR_3;
 for (;;) {
  struct message *VAR_4 = VAR_0->head;
  int VAR_5 = VAR_4->size - VAR_0->offset;
  if (VAR_5 > VAR_3) {
   FUNC_2(VAR_2, VAR_4->buffer + VAR_0->offset, VAR_3);
   VAR_0->offset += VAR_3;
   return;
  }
  if (VAR_5 == VAR_3) {
   FUNC_2(VAR_2, VAR_4->buffer + VAR_0->offset, VAR_3);
   VAR_0->offset = 0;
   FUNC_0(VAR_0, VAR_1);
   return;
  } else {
   FUNC_2(VAR_2, VAR_4->buffer + VAR_0->offset, VAR_5);
   FUNC_0(VAR_0, VAR_1);
   VAR_0->offset = 0;
   VAR_2+=VAR_5;
   VAR_3-=VAR_5;
  }
 }
}
