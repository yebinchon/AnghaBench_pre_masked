
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nfulnl_instance {int lock; scalar_t__ skb; } ;


 int FUNC_0 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_1 (int ,struct timer_list*,int ) ;
 struct nfulnl_instance* VAR_0 ;
 int FUNC_2 (struct nfulnl_instance*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct timer_list *VAR_2)
{
 struct nfulnl_instance *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 FUNC_3(&VAR_3->lock);
 if (VAR_3->skb)
  FUNC_0(VAR_3);
 FUNC_4(&VAR_3->lock);
 FUNC_2(VAR_3);
}
