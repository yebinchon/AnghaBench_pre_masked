
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct sk_buff *VAR_0, struct sk_buff_head *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock, VAR_2);
}
