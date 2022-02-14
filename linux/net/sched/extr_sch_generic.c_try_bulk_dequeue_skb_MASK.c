
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; struct sk_buff* next; } ;
struct netdev_queue {int dummy; } ;
struct Qdisc {struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 int FUNC_0 (struct netdev_queue const*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0,
     struct sk_buff *VAR_1,
     const struct netdev_queue *VAR_2,
     int *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2) - VAR_1->len;

 while (VAR_4 > 0) {
  struct sk_buff *VAR_5 = VAR_0->dequeue(VAR_0);

  if (!VAR_5)
   break;

  VAR_4 -= VAR_5->len;
  VAR_1->next = VAR_5;
  VAR_1 = VAR_5;
  (*VAR_3)++;
 }
 FUNC_1(VAR_1);
}
