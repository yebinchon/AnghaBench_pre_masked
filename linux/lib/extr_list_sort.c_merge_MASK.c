
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;
typedef scalar_t__ (* cmp_func ) (void*,struct list_head*,struct list_head*) ;



__attribute__((used)) __attribute__((nonnull(2,3,4)))
static struct list_head *FUNC_0(void *VAR_0, cmp_func VAR_1,
    struct list_head *VAR_2, struct list_head *VAR_3)
{
 struct list_head *VAR_4, **VAR_5 = &VAR_4;

 for (;;) {

  if (VAR_1(VAR_0, VAR_2, VAR_3) <= 0) {
   *VAR_5 = VAR_2;
   VAR_5 = &VAR_2->next;
   VAR_2 = VAR_2->next;
   if (!VAR_2) {
    *VAR_5 = VAR_3;
    break;
   }
  } else {
   *VAR_5 = VAR_3;
   VAR_5 = &VAR_3->next;
   VAR_3 = VAR_3->next;
   if (!VAR_3) {
    *VAR_5 = VAR_2;
    break;
   }
  }
 }
 return VAR_4;
}
