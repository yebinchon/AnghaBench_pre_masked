
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;


 int FUNC_0 (struct list_head*,struct list_head*) ;

__attribute__((used)) static inline void FUNC_1(struct list_head *VAR_0)
{
 FUNC_0(VAR_0->prev, VAR_0->next);
 VAR_0->next = (struct list_head *) 0;
 VAR_0->prev = (struct list_head *) 0;
}
