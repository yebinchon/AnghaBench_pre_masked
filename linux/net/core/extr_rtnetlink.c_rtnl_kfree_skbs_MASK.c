
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;


 struct sk_buff* VAR_0 ;

void FUNC_0(struct sk_buff *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_1 && VAR_2) {
  VAR_2->next = VAR_0;
  VAR_0 = VAR_1;
 }
}
