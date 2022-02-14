
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct l2cap_seq_list {scalar_t__ head; size_t mask; scalar_t__ tail; scalar_t__* list; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct l2cap_seq_list *VAR_1)
{
 u16 VAR_2;

 if (VAR_1->head == VAR_0)
  return;

 for (VAR_2 = 0; VAR_2 <= VAR_1->mask; VAR_2++)
  VAR_1->list[VAR_2] = VAR_0;

 VAR_1->head = VAR_0;
 VAR_1->tail = VAR_0;
}
