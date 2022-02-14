
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int * next; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sk_buff_head*) ;
 scalar_t__ FUNC_6 (struct sk_buff**,struct sk_buff**) ;

bool FUNC_7(struct sk_buff_head *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2 = ((void*)0);

 if (FUNC_5(VAR_0) == 1)
  return 1;

 while ((VAR_1 = FUNC_0(VAR_0))) {
  VAR_1->next = ((void*)0);
  if (FUNC_6(&VAR_2, &VAR_1)) {
   FUNC_3(VAR_0, VAR_1);
   return 1;
  }
  if (!VAR_2)
   break;
 }
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4("Failed do assemble buffer\n");
 return 0;
}
