
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct list_head {struct list_head* prev; struct list_head* next; } ;
typedef scalar_t__ (* cmp_func ) (void*,struct list_head*,struct list_head*) ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) __attribute__((nonnull(2,3,4,5)))
static void FUNC_1(void *VAR_0, cmp_func VAR_1, struct list_head *VAR_2,
   struct list_head *VAR_3, struct list_head *VAR_4)
{
 struct list_head *VAR_5 = VAR_2;
 u8 VAR_6 = 0;

 for (;;) {

  if (VAR_1(VAR_0, VAR_3, VAR_4) <= 0) {
   VAR_5->next = VAR_3;
   VAR_3->prev = VAR_5;
   VAR_5 = VAR_3;
   VAR_3 = VAR_3->next;
   if (!VAR_3)
    break;
  } else {
   VAR_5->next = VAR_4;
   VAR_4->prev = VAR_5;
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->next;
   if (!VAR_4) {
    VAR_4 = VAR_3;
    break;
   }
  }
 }


 VAR_5->next = VAR_4;
 do {







  if (FUNC_0(!++VAR_6))
   VAR_1(VAR_0, VAR_4, VAR_4);
  VAR_4->prev = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
 } while (VAR_4);


 VAR_5->next = VAR_2;
 VAR_2->prev = VAR_5;
}
