
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct l2cap_seq_list {size_t head; size_t mask; size_t* list; void* tail; } ;


 void* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline u16 FUNC_0(struct l2cap_seq_list *VAR_2)
{
 u16 VAR_3 = VAR_2->head;
 u16 VAR_4 = VAR_2->mask;

 VAR_2->head = VAR_2->list[VAR_3 & VAR_4];
 VAR_2->list[VAR_3 & VAR_4] = VAR_0;

 if (VAR_2->head == VAR_1) {
  VAR_2->head = VAR_0;
  VAR_2->tail = VAR_0;
 }

 return VAR_3;
}
