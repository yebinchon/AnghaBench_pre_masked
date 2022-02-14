
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* prev; struct sk_buff* next; } ;
struct sfq_slot {struct sk_buff* skblist_prev; } ;



__attribute__((used)) static inline struct sk_buff *FUNC_0(struct sfq_slot *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->skblist_prev;

 VAR_0->skblist_prev = VAR_1->prev;
 VAR_1->prev->next = (struct sk_buff *)VAR_0;
 VAR_1->next = VAR_1->prev = ((void*)0);
 return VAR_1;
}
