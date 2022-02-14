
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct l2cap_seq_list {scalar_t__* list; size_t mask; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct l2cap_seq_list *VAR_1,
        u16 VAR_2)
{

 return VAR_1->list[VAR_2 & VAR_1->mask] != VAR_0;
}
