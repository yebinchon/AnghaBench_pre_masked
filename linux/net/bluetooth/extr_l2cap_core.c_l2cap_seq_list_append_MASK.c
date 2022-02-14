
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct l2cap_seq_list {size_t mask; size_t* list; size_t tail; size_t head; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct l2cap_seq_list *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = VAR_2->mask;



 if (VAR_2->list[VAR_3 & VAR_4] != VAR_0)
  return;

 if (VAR_2->tail == VAR_0)
  VAR_2->head = VAR_3;
 else
  VAR_2->list[VAR_2->tail & VAR_4] = VAR_3;

 VAR_2->tail = VAR_3;
 VAR_2->list[VAR_3 & VAR_4] = VAR_1;
}
