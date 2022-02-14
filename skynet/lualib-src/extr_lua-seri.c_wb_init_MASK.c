
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_block {scalar_t__ ptr; struct block* head; struct block* current; scalar_t__ len; } ;
struct block {int * next; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct write_block *VAR_0 , struct block *VAR_1) {
 VAR_0->head = VAR_1;
 FUNC_0(VAR_1->next == ((void*)0));
 VAR_0->len = 0;
 VAR_0->current = VAR_0->head;
 VAR_0->ptr = 0;
}
