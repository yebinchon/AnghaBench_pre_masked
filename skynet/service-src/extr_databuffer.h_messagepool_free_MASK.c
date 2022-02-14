
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct messagepool_list {struct messagepool_list* next; } ;
struct messagepool {int * freelist; struct messagepool_list* pool; } ;


 int FUNC_0 (struct messagepool_list*) ;

__attribute__((used)) static void
FUNC_1(struct messagepool *VAR_0) {
 struct messagepool_list *VAR_1 = VAR_0->pool;
 while(VAR_1) {
  struct messagepool_list *VAR_2 = VAR_1;
  VAR_1=VAR_1->next;
  FUNC_0(VAR_2);
 }
 VAR_0->pool = ((void*)0);
 VAR_0->freelist = ((void*)0);
}
