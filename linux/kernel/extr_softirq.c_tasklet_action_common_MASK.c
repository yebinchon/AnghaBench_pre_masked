
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_struct {struct tasklet_struct* next; int data; int (* func ) (int ) ;int state; int count; } ;
struct tasklet_head {struct tasklet_struct** tail; struct tasklet_struct* head; } ;
struct softirq_action {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct tasklet_struct*) ;
 int FUNC_7 (struct tasklet_struct*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct softirq_action *VAR_1,
      struct tasklet_head *VAR_2,
      unsigned int VAR_3)
{
 struct tasklet_struct *VAR_4;

 FUNC_3();
 VAR_4 = VAR_2->head;
 VAR_2->head = ((void*)0);
 VAR_2->tail = &VAR_2->head;
 FUNC_4();

 while (VAR_4) {
  struct tasklet_struct *VAR_5 = VAR_4;

  VAR_4 = VAR_4->next;

  if (FUNC_6(VAR_5)) {
   if (!FUNC_2(&VAR_5->count)) {
    if (!FUNC_8(VAR_0,
       &VAR_5->state))
     FUNC_0();
    VAR_5->func(VAR_5->data);
    FUNC_7(VAR_5);
    continue;
   }
   FUNC_7(VAR_5);
  }

  FUNC_3();
  VAR_5->next = ((void*)0);
  *VAR_2->tail = VAR_5;
  VAR_2->tail = &VAR_5->next;
  FUNC_1(VAR_3);
  FUNC_4();
 }
}
