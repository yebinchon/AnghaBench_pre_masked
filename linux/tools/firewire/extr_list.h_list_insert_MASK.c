
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {struct list* prev; struct list* next; } ;



__attribute__((used)) static inline void
FUNC_0(struct list *VAR_0, struct list *VAR_1)
{
 VAR_1->prev = VAR_0->prev;
 VAR_1->next = VAR_0;
 VAR_1->prev->next = VAR_1;
 VAR_1->next->prev = VAR_1;
}
