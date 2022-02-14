
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* prev; struct sk_buff* next; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,struct net_device*,int*) ;

struct sk_buff *FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1, bool *VAR_2)
{
 struct sk_buff *VAR_3, *VAR_4 = ((void*)0), *VAR_5;

 for (; VAR_0 != ((void*)0); VAR_0 = VAR_3) {
  VAR_3 = VAR_0->next;
  FUNC_0(VAR_0);


  VAR_0->prev = VAR_0;

  VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2);
  if (!VAR_0)
   continue;

  if (!VAR_4)
   VAR_4 = VAR_0;
  else
   VAR_5->next = VAR_0;



  VAR_5 = VAR_0->prev;
 }
 return VAR_4;
}
