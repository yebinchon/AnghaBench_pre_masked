
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; struct sk_buff* prev; } ;
struct sfq_slot {struct sk_buff* skblist_prev; } ;



__attribute__((used)) static inline void FUNC_0(struct sfq_slot *VAR_0, struct sk_buff *VAR_1)
{
 VAR_1->prev = VAR_0->skblist_prev;
 VAR_1->next = (struct sk_buff *)VAR_0;
 VAR_0->skblist_prev->next = VAR_1;
 VAR_0->skblist_prev = VAR_1;
}
