
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; struct list_head* prev; } ;


 scalar_t__ FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*,struct list_head*,int (*) ()) ;
 int FUNC_2 (struct list_head*,struct list_head*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct list_head *VAR_0,
         struct list_head *VAR_1)
{
 struct list_head *VAR_2, *VAR_3;

 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_1, VAR_0, FUNC_3);
 } else {

  VAR_2 = VAR_0->next;
  VAR_3 = VAR_0->prev;


  VAR_1->prev->next = VAR_0;
  VAR_1->next->prev = VAR_0;
  FUNC_2(VAR_0->next, VAR_1->next);
  VAR_0->prev = VAR_1->prev;

  FUNC_3();



  VAR_1->next = VAR_2;
  VAR_1->prev = VAR_3;
  VAR_2->prev = VAR_1;
  VAR_3->next = VAR_1;
 }
}
