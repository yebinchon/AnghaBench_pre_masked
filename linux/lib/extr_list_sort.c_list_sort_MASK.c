
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;
typedef int cmp_func ;


 scalar_t__ FUNC_0 (size_t) ;
 struct list_head* FUNC_1 (void*,int ,struct list_head*,struct list_head*) ;
 int FUNC_2 (void*,int ,struct list_head*,struct list_head*,struct list_head*) ;

__attribute__((nonnull(2,3)))
void FUNC_3(void *VAR_0, struct list_head *VAR_1,
  int (*VAR_2)(void *VAR_3, struct list_head *VAR_4,
   struct list_head *VAR_5))
{
 struct list_head *VAR_6 = VAR_1->next, *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;

 if (VAR_6 == VAR_1->prev)
  return;


 VAR_1->prev->next = ((void*)0);
 do {
  size_t VAR_9;
  struct list_head **VAR_10 = &VAR_7;


  for (VAR_9 = VAR_8; VAR_9 & 1; VAR_9 >>= 1)
   VAR_10 = &(*VAR_10)->prev;

  if (FUNC_0(VAR_9)) {
   struct list_head *VAR_11 = *VAR_10, *VAR_12 = VAR_11->prev;

   VAR_11 = FUNC_1(VAR_0, (cmp_func)VAR_2, VAR_12, VAR_11);

   VAR_11->prev = VAR_12->prev;
   *VAR_10 = VAR_11;
  }


  VAR_6->prev = VAR_7;
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
  VAR_7->next = ((void*)0);
  VAR_8++;
 } while (VAR_6);


 VAR_6 = VAR_7;
 VAR_7 = VAR_7->prev;
 for (;;) {
  struct list_head *VAR_13 = VAR_7->prev;

  if (!VAR_13)
   break;
  VAR_6 = FUNC_1(VAR_0, (cmp_func)VAR_2, VAR_7, VAR_6);
  VAR_7 = VAR_13;
 }

 FUNC_2(VAR_0, (cmp_func)VAR_2, VAR_1, VAR_7, VAR_6);
}
