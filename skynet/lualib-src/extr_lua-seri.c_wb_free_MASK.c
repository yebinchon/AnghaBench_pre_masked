
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_block {scalar_t__ len; scalar_t__ ptr; int * current; struct block* head; } ;
struct block {struct block* next; } ;


 int FUNC_0 (struct block*) ;

__attribute__((used)) static void
FUNC_1(struct write_block *VAR_0) {
 struct block *VAR_1 = VAR_0->head;
 VAR_1 = VAR_1->next;
 while (VAR_1) {
  struct block * VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_0->head = ((void*)0);
 VAR_0->current = ((void*)0);
 VAR_0->ptr = 0;
 VAR_0->len = 0;
}
