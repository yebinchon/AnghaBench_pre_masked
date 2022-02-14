
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfulnl_instance {int lock; scalar_t__ skb; int copy_mode; int hlist; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfulnl_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfulnl_instance*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfulnl_instance *VAR_1)
{

 FUNC_1(&VAR_1->hlist);



 FUNC_3(&VAR_1->lock);


 VAR_1->copy_mode = VAR_0;

 if (VAR_1->skb)
  FUNC_0(VAR_1);
 FUNC_4(&VAR_1->lock);


 FUNC_2(VAR_1);
}
