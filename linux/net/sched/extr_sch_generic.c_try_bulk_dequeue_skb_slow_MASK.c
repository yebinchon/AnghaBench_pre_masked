
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct Qdisc {struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 int FUNC_0 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct Qdisc*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0,
          struct sk_buff *VAR_1,
          int *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 struct sk_buff *VAR_4;
 int VAR_5 = 0;

 do {
  VAR_4 = VAR_0->dequeue(VAR_0);
  if (!VAR_4)
   break;
  if (FUNC_4(FUNC_1(VAR_4) != VAR_3)) {
   FUNC_0(VAR_0, VAR_4);
   break;
  }
  VAR_1->next = VAR_4;
  VAR_1 = VAR_4;
 } while (++VAR_5 < 8);
 (*VAR_2) += VAR_5;
 FUNC_2(VAR_1);
}
