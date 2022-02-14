
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;


 scalar_t__ FUNC_0 (int,char*,struct list_head*,struct list_head*) ;
 struct list_head* VAR_0 ;
 struct list_head* VAR_1 ;

bool FUNC_1(struct list_head *VAR_2)
{
 struct list_head *VAR_3, *VAR_4;

 VAR_3 = VAR_2->prev;
 VAR_4 = VAR_2->next;

 if (FUNC_0(VAR_4 == VAR_0,
   "list_del corruption, %px->next is LIST_POISON1 (%px)\n",
   VAR_2, VAR_0) ||
     FUNC_0(VAR_3 == VAR_1,
   "list_del corruption, %px->prev is LIST_POISON2 (%px)\n",
   VAR_2, VAR_1) ||
     FUNC_0(VAR_3->next != VAR_2,
   "list_del corruption. prev->next should be %px, but was %px\n",
   VAR_2, VAR_3->next) ||
     FUNC_0(VAR_4->prev != VAR_2,
   "list_del corruption. next->prev should be %px, but was %px\n",
   VAR_2, VAR_4->prev))
  return 0;

 return 1;

}
