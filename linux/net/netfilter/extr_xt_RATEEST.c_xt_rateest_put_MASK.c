
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateest_net {int hash_lock; } ;
struct xt_rateest {scalar_t__ refcnt; int rate_est; int list; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xt_rateest*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct xt_rateest_net* FUNC_5 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(struct net *VAR_2, struct xt_rateest *VAR_3)
{
 struct xt_rateest_net *VAR_4 = FUNC_5(VAR_2, VAR_1);

 FUNC_3(&VAR_4->hash_lock);
 if (--VAR_3->refcnt == 0) {
  FUNC_1(&VAR_3->list);
  FUNC_0(&VAR_3->rate_est);




  FUNC_2(VAR_3, VAR_0);
 }
 FUNC_4(&VAR_4->hash_lock);
}
